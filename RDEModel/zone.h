/**
 * Project Untitled
 */


#ifndef _ZONE_H
#define _ZONE_H

#include "admin.h"

using namespace System;

namespace RDEModel {
	public ref class zone {
    private:
        int ID;
        String^ location;
        String^ name;
        String^ openingTime;
        String^ closingTime;
        bool active;
        admin^ objAdmin;

    public:

        zone();
        zone(int ID, String^ name, String^ location, String^ openingTime, String^ closingTime, bool active, admin^ objAdmin);

        int getID();
        void setID(int ID);

        String^ getLocation();
        void setLocation(String^ location);

        String^ getName();
        void setName(String^ name);

        String^ getOpeningTime();
        void setOpeningTime(String^ openingTime);

        String^ getClosingTime();
        void setClosingTime(String^ closingTime);

        bool getActive();
        void setActive(bool active);

        admin^ getAdmin();
        void setAdmin(admin^ objAdmin);
    };
}

#endif //_ZONE_H
