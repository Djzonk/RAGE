#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"t1me_main","Jbad_Defines", "cTab", "tfw_radios_rf3080"};
        author = ECSTRING(main,Author);
        authors[] = {""};
        url = ECSTRING(main,URL);
        VERSION_CONFIG;
    };
};


#include "CfgEventHandlers.hpp"
#include "ctabFix.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"

