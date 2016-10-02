#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"rage_main"};
        author = ECSTRING(main,Author);
        authors[] = {"DjZonk"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgDifficultyPresets.hpp"
