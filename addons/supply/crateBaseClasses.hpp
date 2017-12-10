class T1ME_crateBase: ReammoBox_F {
    author = ECSTRING(main,Author);
    mapSize = 1.47;
    scope = 0;
    hiddenSelections[] = {"Camo_Signs","Camo"};
    hiddenSelectionsTextures[] = {
        "A3\Weapons_F\Ammoboxes\data\AmmoBox_signs_CA.paa",
        "A3\Weapons_F\Ammoboxes\data\AmmoBox_CO.paa"
    };
    vehicleClass = "T1ME_Object";
    accuracy = 1000;
    maximumLoad = 10000;

};
class B_supplyCrate_F;
class T1ME_ammoCrateBase: B_supplyCrate_F {
    author = ECSTRING(main,Author);
    vehicleClass = "T1ME_Object";
    scope = 0;
    accuracy = 1000;
    maximumLoad = 10000;
    class TransportMagazines {};
    class TransportWeapons {};
    class TransportItems {};
    class TransportBackpacks {};
};
class T1ME_weaponCrateBase: T1ME_crateBase {
    mapSize = 1.81;
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Wps_F.jpg";
    model = "\A3\weapons_F\AmmoBoxes\WpnsBox_F";
    icon = "iconCrateWpns";
};
class T1ME_weaponSpecialCrateBase: T1ME_crateBase {
    mapSize = 2.34;
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsSpecial_F.jpg";
    model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
    icon = "iconCrateLarge";\
};
class T1ME_launcherCrateBase: T1ME_crateBase {
    mapSize = 2.34;
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_WpsLaunch_F.jpg";
    model = "\A3\weapons_F\AmmoBoxes\WpnsBox_long_F";
    icon = "iconCrateLong";
};
class T1ME_explosiveCrateBase: T1ME_crateBase {
    mapSize = 1.47;
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_AmmoOrd_F.jpg";
    model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
    icon = "iconCrateOrd";
    class AnimationSources {
        class Ammo_source {
            source="user";
            animPeriod=1;
            initPhase=1;
        };
        class AmmoOrd_source {
            source="user";
            animPeriod=1;
            initPhase=0;
        };
        class Grenades_source {
            source="user";
            animPeriod=1;
            initPhase=1;
        };
        class Support_source {
            source="user";
            animPeriod=1;
            initPhase=1;
        };
    };
};
class T1ME_grenadeCrateBase: T1ME_crateBase {
    mapSize = 1.47;
    editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Box_NATO_Grenades_F.jpg";
    model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
    icon = "iconCrateOrd";
    class AnimationSources {
        class Ammo_source {
            source="user";
            animPeriod=1;
            initPhase=1;
        };
        class AmmoOrd_source {
            source="user";
            animPeriod=1;
            initPhase=0;
        };
        class Grenades_source {
            source="user";
            animPeriod=1;
            initPhase=1;
        };
        class Support_source {
            source="user";
            animPeriod=1;
            initPhase=1;
        };
    };
};
class T1ME_equipmentCrateBase: T1ME_crateBase {
    mapSize = 1.25;
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Equip_F.jpg";
    model = "\A3\Supplies_F_Exp\Ammoboxes\Equipment_Box_F.p3d";
    hiddenSelections[] = {"camo","camo_signs"};
    hiddenSelectionsTextures[] = {
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_co.paa",
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_ca.paa"
    };
    icon = "\A3\Supplies_F_Exp\Ammoboxes\Data\UI\icon_equipment_box_ca.paa";
};
class T1ME_uniformCrateBase: T1ME_crateBase {
    mapSize = 1.25;
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\Box_NATO_Uniforms_F.jpg";
    model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
    hiddenSelections[] = {"camo","camo_signs"};
    hiddenSelectionsTextures[] = {
        "\A3\Supplies_F_Exp\Ammoboxes\Data\uniforms_box_blufor_co.paa",
        "\A3\Supplies_F_Exp\Ammoboxes\Data\equipment_box_blufor_ca.paa"};
    icon = "\A3\Supplies_F_Exp\Ammoboxes\Data\UI\icon_uniforms_box_ca.paa";
};
