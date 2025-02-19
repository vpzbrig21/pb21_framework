#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"pb21f_main"};
        author = "S4";
        authors[] = {""};
        url = "";
        VERSION_CONFIG;
    };
};

#include "CfgVehicles.hpp"
