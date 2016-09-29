class CfgVehicles {
    class Items_base_f;
    class rage_rack_45 : Items_base_f {
        scope = 2;
        model = "";
        displayname = "Weapon Rack 45in";
        editorCategory = "EdCat_Supplies";
        class AnimationSources {
            class left1Rotation {
                source = "user";
                animPeriod = 2;
                initPhase = 0;
            };
        };
        class ACE_Actions {
            class openDoor {
                displayname = "Open Door";
                condition = "true";
                statement = "this animateSource [""left1Rotation"", 1]";
                distance = 5;
                selection = "actionPoint";
            };
            class closeDoor {
                displayname = "close Door";
                condition = "true";
                statement = "this animateSource [""left1Rotation"", 0]";
                distance = 5;
                selection = "actionPoint";
            };
        };
    };
};
