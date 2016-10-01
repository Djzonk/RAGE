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
 * [_target, ] call ace_racks_fnc_animate
 *
 * Public: No
 */
#include "script_component.hpp"

params ["_rack", "_openclose"];
private ["_animationsources"];

_animationsources = animationNames _rack;

{
    _rack animate [_x, _openclose];
} count _animationsources;
