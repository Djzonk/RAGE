class T1ME_metalAmmoCrate: T1ME_ammoCrateBase {
    scope = 2;
    displayName = CSTRING(weaponAmmo);

    class TransportMagazines {
        // Carbine
        MACRO_ADDMAGAZINE(rhs_mag_30Rnd_556x45_Mk318_Stanag,50);
        MACRO_ADDMAGAZINE(rhs_mag_30Rnd_556x45_M855A1_Stanag_Tracer_Red,15);

        MACRO_ADDMAGAZINE(rhsusf_mag_17Rnd_9x19_FMJ,10); // Glock 17
        MACRO_ADDMAGAZINE(rhs_200rnd_556x45_M_SAW, 10); // M249
        MACRO_ADDMAGAZINE(rhsusf_20Rnd_762x51_m118_special_Mag, 10); // Mk11 Mod 0
        // Gernades
        MACRO_ADDMAGAZINE(rhs_mag_m67,20);
        MACRO_ADDMAGAZINE(ACE_M84,20);  // Stun
        // GL Rounds
        MACRO_ADDMAGAZINE(rhs_mag_M433_HEDP,20);
        MACRO_ADDMAGAZINE(ACE_HuntIR_M203,5);
        // Hand Thrown Smoke
        MACRO_ADDMAGAZINE(SmokeShell,10);
        MACRO_ADDMAGAZINE(SmokeShellBlue,10);
        MACRO_ADDMAGAZINE(SmokeShellGreen,10);
        MACRO_ADDMAGAZINE(SmokeShellPurple,10);
        MACRO_ADDMAGAZINE(SmokeShellRed,10);
        // GL Smoke Rounds
        MACRO_ADDMAGAZINE(1Rnd_Smoke_Grenade_shell,10);
        MACRO_ADDMAGAZINE(1Rnd_SmokeBlue_Grenade_shell,10);
        MACRO_ADDMAGAZINE(1Rnd_SmokeGreen_Grenade_shell,10);
        MACRO_ADDMAGAZINE(1Rnd_SmokePurple_Grenade_shell,10);
        MACRO_ADDMAGAZINE(1Rnd_SmokeRed_Grenade_shell,10);
        // Launcher Ammo
        MACRO_ADDMAGAZINE(rhs_fgm148_magazine_AT,5);
        MACRO_ADDMAGAZINE(rhs_fim92_mag,5);
        MACRO_ADDMAGAZINE(rhs_mag_smaw_HEDP,5);
    };
    class TransportWeapons {
        MACRO_ADDWEAPON(rhs_weap_M136,5);
        MACRO_ADDWEAPON(rhs_weap_m72a7,5);
    };
};
class T1ME_metalGrenadeCrate: T1ME_grenadeCrateBase {
    scope = 2;
    displayName = CSTRING(grenade);

    class TransportMagazines {
        // Gernades
        MACRO_ADDMAGAZINE(rhs_mag_m67,20);
        MACRO_ADDMAGAZINE(ACE_M14,20);  // Incendiary
        MACRO_ADDMAGAZINE(ACE_M84,20);  // Stun
        // GL Rounds
        MACRO_ADDMAGAZINE(rhs_mag_M397_HET,20);
        MACRO_ADDMAGAZINE(rhs_mag_M433_HEDP,20);
        MACRO_ADDMAGAZINE(rhs_mag_M441_HE,20);
        MACRO_ADDMAGAZINE(ACE_HuntIR_M203,10);
        // Hand Thrown Smoke
        MACRO_ADDMAGAZINE(SmokeShell,20);
        MACRO_ADDMAGAZINE(SmokeShellBlue,20);
        MACRO_ADDMAGAZINE(SmokeShellGreen,20);
        MACRO_ADDMAGAZINE(SmokeShellOrange,20);
        MACRO_ADDMAGAZINE(SmokeShellPurple,20);
        MACRO_ADDMAGAZINE(SmokeShellRed,20);
        MACRO_ADDMAGAZINE(SmokeShellYellow,20);
        // GL Smoke Rounds
        MACRO_ADDMAGAZINE(1Rnd_Smoke_Grenade_shell,20);
        MACRO_ADDMAGAZINE(1Rnd_SmokeBlue_Grenade_shell,20);
        MACRO_ADDMAGAZINE(1Rnd_SmokeGreen_Grenade_shell,20);
        MACRO_ADDMAGAZINE(1Rnd_SmokeOrange_Grenade_shell,20);
        MACRO_ADDMAGAZINE(1Rnd_SmokePurple_Grenade_shell,20);
        MACRO_ADDMAGAZINE(1Rnd_SmokeRed_Grenade_shell,20);
        MACRO_ADDMAGAZINE(1Rnd_SmokeYellow_Grenade_shell,20);
    };
};
class T1ME_metalLauncherCrate: T1ME_launcherCrateBase {
    scope = 2;
    displayName = CSTRING(launcher);

    class TransportWeapons {
        MACRO_ADDWEAPON(rhs_weap_fgm148,5);
        MACRO_ADDWEAPON(rhs_weap_fim92,5);
        MACRO_ADDWEAPON(rhs_weap_smaw_gr_optic,5);
        MACRO_ADDWEAPON(rhs_weap_M136,20);
        MACRO_ADDWEAPON(rhs_weap_m72a7,20);
    };
    class TransportMagazines {
        MACRO_ADDMAGAZINE(rhs_fgm148_magazine_AT,20);
        MACRO_ADDMAGAZINE(rhs_fim92_mag,20);
        MACRO_ADDMAGAZINE(rhs_mag_smaw_HEDP,20);
        MACRO_ADDMAGAZINE(rhs_mag_smaw_SR,20);
    };
};
class T1ME_metalExplosiveCrate: T1ME_explosiveCrateBase {
    scope = 2;
    displayName = CSTRING(explosivesEquipment);

    class TransportMagazines {
        MACRO_ADDMAGAZINE(APERSBoundingMine_Range_Mag,20);
        MACRO_ADDMAGAZINE(ATMine_Range_Mag,20);
        MACRO_ADDMAGAZINE(ClaymoreDirectionalMine_Remote_Mag,20);
        MACRO_ADDMAGAZINE(DemoCharge_Remote_Mag,20);
        MACRO_ADDMAGAZINE(SatchelCharge_Remote_Mag,20);
        MACRO_ADDMAGAZINE(SLAMDirectionalMine_Wire_Mag,20);
    };
    class TransportItems {
        // Explosives stuff
        MACRO_ADDITEM(ACE_DefusalKit,20);
        MACRO_ADDITEM(ACE_M26_Clacker,20);
        MACRO_ADDITEM(MineDetector,20);
    };
    class TransportWeapons {
        MACRO_ADDWEAPON(ACE_VMH3,20);
        MACRO_ADDWEAPON(ACE_VMM3,20);
    };
};
class T1ME_metalEquipmentCrate: T1ME_equipmentCrateBase {
    scope = 2;
    displayName = CSTRING(equipment);
    class TransportItems {
        // Binoculars
        MACRO_ADDITEM(Laserdesignator,20);
        MACRO_ADDITEM(Laserbatteries,20);
        MACRO_ADDITEM(Rangefinder,20);
        // Misc
        MACRO_ADDITEM(ACE_Banana,20);
        MACRO_ADDITEM(ACE_CableTie,20);
        MACRO_ADDITEM(ACE_EarPlugs,20);
        MACRO_ADDITEM(ACE_EntrenchingTool,20);
        MACRO_ADDITEM(ACE_key_west,20);
        MACRO_ADDITEM(ACE_MapTools,20);
        MACRO_ADDITEM(ACE_RangeCard,20);
        MACRO_ADDITEM(ACE_RangeTable_82mm,20);
        MACRO_ADDITEM(ACE_Sandbag_empty,20);
        MACRO_ADDITEM(ACE_SpottingScope,20);
        MACRO_ADDITEM(ACE_Tripod,20);
        MACRO_ADDITEM(ACE_UAVBattery,20);
        MACRO_ADDITEM(ACE_wirecutter,20);
        MACRO_ADDITEM(ACE_IR_Strobe_Item,20);
        MACRO_ADDITEM(ACE_Chemlight_Shield,20);
        // Gps/Terminals
        MACRO_ADDITEM(ItemcTab,20);
        MACRO_ADDITEM(ItemAndroid,20);
        // Advanced tools
        MACRO_ADDITEM(ACE_ATragMX,20);
        MACRO_ADDITEM(ACE_HuntIR_monitor,20);
        MACRO_ADDITEM(ACE_Kestrel4500,20);
        MACRO_ADDITEM(ACE_microDAGR,20);
        // Spray Paint
        MACRO_ADDITEM(ACE_SpraypaintBlack,20);
        MACRO_ADDITEM(ACE_SpraypaintBlue,20);
        MACRO_ADDITEM(ACE_SpraypaintGreen,20);
        MACRO_ADDITEM(ACE_SpraypaintRed,20);
    };
    class TransportWeapons {
        // Hand Held Flares
        MACRO_ADDWEAPON(rhs_weap_rsp30_white,20);
        MACRO_ADDWEAPON(rhs_weap_rsp30_green,20);
        MACRO_ADDWEAPON(rhs_weap_rsp30_red,20);
    };
    class TransportMagazines {
        // Hand Thrown Flares
        MACRO_ADDMAGAZINE(ACE_HandFlare_Green,20);
        MACRO_ADDMAGAZINE(ACE_HandFlare_Red,20);
        MACRO_ADDMAGAZINE(ACE_HandFlare_White,20);
        MACRO_ADDMAGAZINE(ACE_HandFlare_Yellow,20);
        MACRO_ADDMAGAZINE(B_IR_Grenade,20);
        MACRO_ADDMAGAZINE(Chemlight_blue,20);
        MACRO_ADDMAGAZINE(Chemlight_green,20);
        MACRO_ADDMAGAZINE(Chemlight_red,20);
        MACRO_ADDMAGAZINE(Chemlight_yellow,20);
        MACRO_ADDMAGAZINE(ACE_Chemlight_White,20);
        MACRO_ADDMAGAZINE(ACE_Chemlight_HiOrange,20);
        MACRO_ADDMAGAZINE(ACE_Chemlight_HiRed,20);
        MACRO_ADDMAGAZINE(ACE_Chemlight_HiWhite,20);
        MACRO_ADDMAGAZINE(ACE_Chemlight_HiYellow,20);
        MACRO_ADDMAGAZINE(ACE_Chemlight_IR,20);
        MACRO_ADDMAGAZINE(ACE_Chemlight_Orange,20);
    };
};
class T1ME_metalRadioEquipmentCrate: T1ME_equipmentCrateBase {
    scope = 2;
    displayName = CSTRING(radioEquipment);
    class TransportItems {
    MACRO_ADDITEM(tf_anprc152,20);
    };
    class TransportBackpacks {
    MACRO_ADDBACKPACK(tf_rt1523g,20);
    MACRO_ADDBACKPACK(tf_rt1523g_rhs,20);
    MACRO_ADDBACKPACK(tf_rt1523g_big,20);
    MACRO_ADDBACKPACK(tf_rt1523g_big_rhs,20);
    };
};
class T1ME_facewhereEquipmentCrate: T1ME_equipmentCrateBase {
    scope = 2;
    displayName = CSTRING(facewhere);
    class TransportItems {
        // Ballistic Glasses
        MACRO_ADDITEM(rhs_googles_black,20);
        MACRO_ADDITEM(rhs_googles_orange,20);
        MACRO_ADDITEM(rhs_googles_yellow,20);
        MACRO_ADDITEM(rhs_googles_clear,20);
        // Ballistic Goggles
        MACRO_ADDITEM(rhs_ess_black,20);
        MACRO_ADDITEM(rhsusf_oakley_goggles_blk,20);
        MACRO_ADDITEM(rhsusf_oakley_goggles_clr,20);
        MACRO_ADDITEM(rhsusf_oakley_goggles_ylw,20);

        MACRO_ADDITEM(rhsusf_shemagh_grn,20);
        MACRO_ADDITEM(rhsusf_shemagh2_grn,20);
        MACRO_ADDITEM(rhsusf_shemagh_gogg_grn,20);
        MACRO_ADDITEM(rhsusf_shemagh2_gogg_grn,20);
        MACRO_ADDITEM(rhsusf_shemagh_od,20);
        MACRO_ADDITEM(rhsusf_shemagh2_od,20);
        MACRO_ADDITEM(rhsusf_shemagh_gogg_od,20);
        MACRO_ADDITEM(rhsusf_shemagh2_gogg_od,20);
        MACRO_ADDITEM(rhsusf_shemagh_tan,20);
        MACRO_ADDITEM(rhsusf_shemagh2_tan,20);
        MACRO_ADDITEM(rhsusf_shemagh_gogg_tan,20);
        MACRO_ADDITEM(rhsusf_shemagh2_gogg_tan,20);
    };
};
class T1ME_trashCan: T1ME_crateBase {
    scope = 2;
    displayName = "Trash Can";
    mapSize = 0.54;
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Land_BarrelTrash_grey_F.jpg";
    icon = "iconObject_circle";
    model = "\A3\Structures_F_EPB\Items\Vessels\BarrelTrash_grey_F.p3d";
    hiddenSelections[] = {};
    hiddenSelectionsTextures[] = {};

    class ACE_Actions {
        class ACE_MainActions {
            displayName = "Interaction";
            selection = "";
            distance = 2;
            condition = "true";
            class T1ME_emptyTrasch {
                displayName = "Empty Trash Can";
                distance = 4;
                condition = QUOTE([_target, true] call FUNC(getAllCargo));
                statement = QUOTE([_target] call FUNC(deleteAllCargo));
                icon = "";

            };
        };
    };
};
