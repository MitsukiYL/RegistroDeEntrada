/**
 * Project Untitled
 */


#ifndef _USER_H
#define _USER_H

#include "person.h"

using namespace System;

namespace RDEModel {
	public ref class user : public person {
    private:
        String^ userType;
        String^ name;
        String^ password;
        bool active;
        int userID;
        int registrationDate;
    public:
        user();
        user(String^ userType, String^ name, String^ password, bool active,
            int userID, int registrationDate);

        String^ getUserType();
        void setUserType(String^ userType);

        String^ getName();
        void setName(String^ name);

        String^ getPassword();
        void setPassword(String^ password);

        bool isActive();
        void setActive(bool active);

        int getUserID();
        void setUserID(int userID);

        int getRegistrationDate();
        void setRegistrationDate(int registrationDate);
    };
}

#endif //_USER_H