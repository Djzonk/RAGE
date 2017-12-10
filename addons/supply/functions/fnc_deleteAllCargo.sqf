/*
 * Author: Djzonk
 * Deletes all types of cargo from object
 *
 * Arguments:
 * 0: The first argument <STRING>
 * 1: The second argument <OBJECT>
 *
 * Return Value:
 * The return value <BOOL>
 *
 * Example:
 * ["something", player] call T1ME_supply_fnc_deletAllCargo
 *
 * Public: Yes
 */
#include "script_component.hpp"
params["_object"];

clearMagazineCargoGlobal _object;
clearItemCargoGlobal _object;
clearWeaponCargoGlobal _object;
clearBackpackCargoGlobal _object;
