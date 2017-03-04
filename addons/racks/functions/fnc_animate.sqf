/*
 * Author: DjZonk
 * Animate rack doors
 *
 * Arguments:
 * 0: Rack <OBJECT>
 * 1: openclose <NUMBER>
 *
 * Return Value:
 * None
 *
 * Example:
 * [_target, 1] call t1me_racks_fnc_animate;
 *
 * Public: No
 */
#include "script_component.hpp"

params ["_rack", "_openclose"];

private _animationsources = animationNames _rack;
private _rotation = [_animationsources, {[_this, "rotation"] call CBA_fnc_find >= 0}] call CBA_fnc_select;
private _translation = [_animationsources, {[_this, "translation"] call CBA_fnc_find >= 0}] call CBA_fnc_select;

if (_openclose == 1) exitWith {//open
    private _rotation1 = _rotation select 0;

    {_rack animate [_x, 1]} count _rotation;

    [{
        params ["_args", "_handle"];
        _args params ["_rack", "_openclose", "_rotation", "_translation", "_rotation1"];

        if (_rack animationPhase _rotation1 == 1) exitwith {

            {_rack animate [_x, 1]} count _translation;

            [_handle] call CBA_fnc_removePerFrameHandler;
        };
    }, 0, [_rack, _openclose, _rotation, _translation, _rotation1]] call CBA_fnc_addPerFrameHandler;
};
if (_openclose == 0) exitWith {//close
    private _translation1 = _translation select 0;

    {_rack animate [_x, 0]} count _translation;

    [{
        params ["_args", "_handle"];
        _args params ["_rack", "_openclose", "_rotation", "_translation", "_translation1"];

        if (_rack animationPhase _translation1 == 0) exitwith {

            {_rack animate [_x, 0]} count _rotation;

            [_handle] call CBA_fnc_removePerFrameHandler;
        };
    }, 0, [_rack, _openclose, _rotation, _translation, _translation1]] call CBA_fnc_addPerFrameHandler;
};
