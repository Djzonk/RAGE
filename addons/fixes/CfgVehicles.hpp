#define MACRO_ARMOR_FIX(CLASS, BASE_CLASS, ARMOR) \
    class CLASS: BASE_CLASS { \
        armor = ARMOR; \
    };


class CfgVehicles {
    class House_F;

    class Jbad_Bridge_base_kammeny: House_F {
        armor = 2000;
    };
    class Jbad_Bridge_base_most: House_F {
        armor = 2000;
    };
    class Land_Jbad_A_Minaret_porto: House_F {
        armor = 2000;
    };
    class Land_Jbad_A_Minaret: House_F {
        armor = 2000;
    };
    class Land_Jbad_A_Mosque_small_1: House_F {
        armor = 2000;
    };
    class Land_Jbad_A_Mosque_small_2: House_F {
        armor = 2000;
    };
    class Land_Jbad_A_Stationhouse: House_F {
        armor = 2000;
    };
    class Land_Jbad_A_Villa: House_F {
        armor = 2000;
    };
    class Jbad_House_c: House_F {
        armor = 2000;
    };
    class Jbad_House_c2: House_F {
        armor = 2000;
    };
    class Jbad_House_old: House_F {
        armor = 2000;
    };
    class Jbad_House: House_F {
        armor = 2000;
    };
    class Land_jbad_A_GeneralStore_01: House_F {
        armor = 2000;
    };
    // Hanger
    class Land_jbad_hangar_2: House_F {
        armor = 2000;
    };
    class Land_Jbad_Ind_Coltan_Conv1_10: House_F {
        armor = 2000;
    };
    class Land_Jbad_Ind_Coltan_Conv1_End: House_F {
        armor = 2000;
    };
    class Land_Jbad_Ind_Coltan_Conv1_Main: House_F {
        armor = 2000;
    };
    class Land_Jbad_Ind_Coltan_Conv2: House_F {
        armor = 2000;
    };
    class Land_Jbad_Ind_Coltan_Hopper: House_F {
        armor = 2000;
    };
    class Land_Jbad_Ind_Coltan_Main: House_F {
        armor = 2000;
    };
    class Land_Jbad_Ind_Conveyer: House_F {
        armor = 2000;
    };
    class Land_Jbad_Ind_FuelStation_Build: House_F {
        armor = 2000;
    };
    class Land_Jbad_Ind_FuelStation_Shed: House_F {
        armor = 1000;
    };
    class Land_Jbad_Ind_FuelStation_Sign: House_F {
        armor = 50;
    };
    class Land_Jbad_Ind_Garage01: House_F {
        armor = 1000;
    };
    class Land_Jbad_Ind_Oil_Pump: House_F {
        armor = 2000;
    };
    class Land_Jbad_Ind_Oil_Tower: House_F {
        armor = 2000;
    };
    class Land_Jbad_Ind_PowerStation: House_F {
        armor = 2000;
    };
    class Jbad_sawmill_base: House_F {
        armor = 2000;
    };
    class Land_Jbad_Ind_Shed_01: House_F {
        armor = 1000;
    };
    class Jbad_Ind_WorkshopBase: House_F {
        armor = 2000;
    };
    class Land_Jbad_Mil_Barracks: House_F {
        armor = 3000;
    };
    class Land_Jbad_Mil_ControlTower: House_F {
        armor = 3000;
    };
    class Land_Jbad_Mil_Guardhouse: House_F {
        armor = 2000;
    };
    class Land_Jbad_Mil_House: House_F {
        armor = 3000;
    };
    class Land_Jbad_Mil_Repair_center: House_F {
        armor = 1000;
    };
    class Land_jbad_hanger_withdoor: House_F {
        armor = 2000;
    };
    class Land_jbad_mosque_big_addon: House_F {
        armor = 2000;
    };
    class Land_jbad_mosque_big_hq: House_F {
        armor = 2000;
    };
    class Land_jbad_mosque_big_minaret_1: House_F {
        armor = 2000;
    };
    class Land_jbad_mosque_big_minaret_2: House_F {
        armor = 2000;
    };
    class Land_jbad_mosque_big_wall: House_F {
        armor = 2000;
    };
    class Land_jbad_mosque_big_wall_corner: House_F {
        armor = 2000;
    };
    class Land_jbad_mosque_big_wall_gate: House_F {
        armor = 2000;
    };
    class Land_jbad_Wall_L_2m5: House_F {
        armor = 1000;
        explosionShielding = 5;
        class HitPoints {
            class HitZone_1_hitpoint {
                armor = 0.6;
                explosionShielding = 20;
            };
        };
    };
    class Land_jbad_Wall_L_2m5_IED: House_F {
        armor = 1000;
    };
    class Land_jbad_wall_l1_gate: House_F {
        armor = 1000;
    };
    class Land_jbad_wall_l3_gate: House_F {
        armor = 1000;
    };
};

/*
Vanilla building with hitZones
base armor = 2000
base exolosive shielding = 5
destrType = DestructDefault
replaceDamagedLimit = 0.99999

HitZone 1/2 same values
armor = 0.6;
explosionShielding = 20;
material = -1;
minimalHit = 0.02;
passThrough = 0.4;
radius = 0.4;

*/
