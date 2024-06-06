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
        bool busy;
        String^ lotID;

    public:

        parkingSite();
        parkingSite(String^ ID, bool reserved, bool active,bool busy, String^ lotID);

        String^ getID();
        void setID(String^ ID);

        bool getReserved();
        void setReserved(bool reserved);

        bool getbusy();
        void setbusy(bool busy);

        bool getActive();
        void setActive(bool active);

        String^ getLotID();
        void setLotID(String^ lotID);
    };
}

#endif //_PARKINGSITE_H
