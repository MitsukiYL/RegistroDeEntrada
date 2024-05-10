/**
 * Project Untitled
 */


#ifndef _ZONE_H
#define _ZONE_H

using namespace System;

namespace RDEModel {
	public ref class zone {
    private:
        String^ location;
        String^ name;
        int openingTime;
        int closingTime;
        bool active;
    public:

        zone();
        zone(String^ location, String^ name, int openingTime, int closingTime,
            bool active);

        String^ getLocation();
        void setLocation(String^ location);

        String^ getName();
        void setName(String^ name);

        int getOpeningTime();
        void setOpeningTime(int openingTime);

        int getClosingTime();
        void setClosingTime(int closingTime);

        bool isActive();
        void setActive(bool active);
    };
}

#endif //_ZONE_H