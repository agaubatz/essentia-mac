//
//  essentia_mac.cpp
//  essentia-mac
//
//  Created by Andrew Gaubatz on 4/27/19.
//  Copyright © 2019 Andrew Gaubatz. All rights reserved.
//

#include <iostream>
#include "essentia_mac.hpp"
#include "essentia_macPriv.hpp"

void essentia_mac::HelloWorld(const char * s)
{
    essentia_macPriv *theObj = new essentia_macPriv;
    theObj->HelloWorldPriv(s);
    delete theObj;
};

void essentia_macPriv::HelloWorldPriv(const char * s) 
{
    std::cout << s << std::endl;
};

