
/*
 * Author: DjZonk
 * Gets all types of cargo from object
 *
 * Arguments:
 * 0: The first argument <STRING>
 * 1: The second argument <OBJECT>
 *
 * Return Value:
 * The return value <BOOL>
 *
 * Example:
 * ["something", player] call T1ME_supply_fnc_getAllCargo
 *
 * Public: Yes
 */
#include "script_component.hpp"
params[["_object", objNull], ["_option", false]];

private _cargo = [(getItemCargo _object),(getWeaponCargo _object),(getMagazineCargo _object),(getBackpackCargo _object)];

if (_option) exitWith {
    (count _array) == 0;
};
hint str _cargo;
_cargo;
