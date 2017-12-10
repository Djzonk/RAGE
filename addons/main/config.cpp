#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"ace_common"};
        author = ECSTRING(main,Author);
        authors[] = {"DjZonk"};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};

#include "CfgModuleCategories.hpp"
