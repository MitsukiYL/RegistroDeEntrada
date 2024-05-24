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
        int lotID;

    public:

        parkingSite();
        parkingSite(String^ ID, bool reserved, bool active, int lotID);

        String^ getID();
        void setID(String^ ID);

        bool getReserved();
        void setReserved(bool reserved);

        bool getActive();
        void setActive(bool active);

        int getLotID();
        void setLotID(int lotID);
    };
}

#endif //_PARKINGSITE_H
