class CfgVehicles {
    class NATO_Box_Base;
    class RAGE_Rack45 : NATO_Box_Base {
        scope = 2;
        scopeCurator = 2;
        priority = 5
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
            class Open_Door {
                displayname = CSTRING(Opendoor);
                condition = QUOTE(_target animationPhase QUOTE(QUOTE(left1_rotation))  == 0 && alive _target);
                statement = QUOTE(_target animate [ARR_2(QUOTE(QUOTE(left1_rotation)), 1)]);
                selection = "actionPoint";
                distance = 2;
            };
            class Close_Door {
                displayname = CSTRING(Closedoor);
                condition = QUOTE(_target animationPhase QUOTE(QUOTE(left1_rotation))  == 1 && alive _target);
                statement = QUOTE(_target animate [ARR_2(QUOTE(QUOTE(left1_rotation)), 0)]);
                selection = "actionPoint";
                distance = 2;
            };
        };
    };
};
