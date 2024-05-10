/**
 * Project Untitled
 */


#ifndef _PARKINGSITE_H
#define _PARKINGSITE_H

using namespace System;

namespace RDEModel {
	public ref class parkingSite {
    private:

        String^ ID;
        bool reserved;
        bool active;

    public:

        parkingSite();
        parkingSite(String^ ID, bool reserved, bool active);

        String^ getID();
        void setID(String^ ID);

        bool getReserved();
        void setReserved(bool reserved);

        bool getActive();
        void setActive(bool active);
    };
}

#endif //_PARKINGSITE_H
