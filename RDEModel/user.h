/**
 * Project Untitled
 */


#ifndef _USER_H
#define _USER_H

#include "person.h"
#include "parkingSite.h"

using namespace System;

namespace RDEModel {
	public ref class user : public person {
    private:
        String^ userType;
        bool active;
        int userID;
        int registrationDate;
        parkingSite^ objParkingSite;
    public:
        user();
        user(String^ userType, bool active, int userID, int registrationDate, int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside, parkingSite^ objParkingSite);

        String^ getUserType();
        void setUserType(String^ userType);

        bool getActive();
        void setActive(bool active);

        int getUserID();
        void setUserID(int userID);

        int getRegistrationDate();
        void setRegistrationDate(int registrationDate);

        parkingSite^ getObjParkingSite();
        void setObjParkingSite(parkingSite^ objParkingSite);
    };
}

#endif //_USER_H
