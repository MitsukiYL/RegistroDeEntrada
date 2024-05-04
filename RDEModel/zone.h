/**
 * Project Untitled
 */


#ifndef _ZONE_H
#define _ZONE_H

using namespace System;

namespace RDEModel {
	public ref class zone {
    public:
        String^ location;
        String^ name;
        int openingTime;
        int closingTime;
        bool active;
    };
}

#endif //_ZONE_H