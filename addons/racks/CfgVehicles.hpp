class CfgVehicles {
    class NATO_Box_Base;
    class RAGE_Rack45 : NATO_Box_Base {
        scope = 2;
        scopeCurator = 2;
        priority = 5;
        displayname = CSTRING(Displayname);
        editorCategory = "EdCat_Supplies";
        model = QPATHTOF(data\RAGE_Rack45.p3d);
        class AnimationSources {
            class left1_rotation {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class left2_rotation {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class right1_rotation {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class right2_rotation {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class left_translation {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
            class right_translation {
                source = "user";
                animPeriod = 1;
                initPhase = 0;
            };
        };
        //todo disable box inventory when door is closed
        class ACE_Actions {
            class Open_Door {
                displayname = CSTRING(Opendoor);
                condition = QUOTE(_target animationPhase QUOTE(QUOTE(left1_rotation))  == 0 && alive _target);
                statement = QUOTE([ARR_2(_target, 1)] call FUNC(animate));
                selection = "actionPoint";
                distance = 2;
            };
            class Close_Door {
                displayname = CSTRING(Closedoor);
                condition = QUOTE(_target animationPhase QUOTE(QUOTE(left1_rotation))  == 1 && alive _target);
                statement = QUOTE([ARR_2(_target, 0)] call FUNC(animate));
                selection = "actionPoint";
                distance = 2;
            };
        };
    };
};
