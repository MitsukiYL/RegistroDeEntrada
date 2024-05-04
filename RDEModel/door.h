/**
 * Project Untitled
 */


#ifndef _DOOR_H
#define _DOOR_H

using namespace System;

namespace RDEModel {
	public ref class door {
    public:
        String^ doorName;
        bool active;
        String^ location;
        String^ doorType;
        int openingTime;
        int closingTime;
    };
}



#endif //_DOOR_H