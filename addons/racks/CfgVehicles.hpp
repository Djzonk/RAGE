class CfgVehicles {
    class Items_base_f;
    class RAGE_Rack45 : Items_base_f {
        scope = 2;
        scopeCurator = 2;
        displayname = CSTRING(Displayname);
        editorCategory = "EdCat_Supplies";
        model = QPATHTOF(data\RAGE_Rack45.p3d);
        class AnimationSources {
            class left1_rotation {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
        };
        class ACE_Actions {
            class ACE_MainAction {
                selection = "";
                distance = 5;
                class Open_Door {
                    displayname = CSTRING(Opendoor);
                    condition = true;
                    statement = QUOTE(_this animate [QUOTE(left1_rotation), 1]);
                    distance = 5;
                    selection = "";

                };
                class Close_Door {
                    displayname = CSTRING(Closedoor);
                    condition = true;
                    statement = QUOTE(_this animate [QUOTE(left1_rotation), 0]);
                    distance = 5;
                    selection = "";
                };
            };
        };
    };
};
