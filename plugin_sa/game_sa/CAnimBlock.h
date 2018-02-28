/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"


class PLUGIN_API CAnimBlock {
public:

 	char szName[16];
 	char bLoaded;
 	char pad;
 	short usRefs;
 	int startAnimation;
 	int animationCount;
 	int animationStyle;

};

VALIDATE_SIZE(CAnimBlock,0x20);


