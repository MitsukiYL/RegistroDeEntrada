/**
 * Project Untitled
 */


#ifndef _PARKINGSITE_H
#define _PARKINGSITE_H

using namespace System;

namespace RDEModel {
	public ref class parkingSite {
    public:
        String^ ID;
        bool reserved;
        bool active;
    };
}

#endif //_PARKINGSITE_H