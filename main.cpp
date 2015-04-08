//
//  main.cpp
//  Factory
//
//  Created by director on 15-4-7.
//  Copyright (c) 2015年 director. All rights reserved.
//

#include <iostream>
#include "Factory.h"

using namespace std;

int main(int argc, const char * argv[])
{

    CircleCreator cs;
	RectCreator   rs;
	
	Create( &cs );
	Create( &rs );
    
    return 0;
}

