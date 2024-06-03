/**
 * Project Untitled
 */


#ifndef _USER_H
#define _USER_H

#include "person.h"
#include "parkingSite.h"

using namespace System;
using namespace System::Collections::Generic;

namespace RDEModel {
	public ref class user{
        private:
            int userID;
            String^ userType;
            bool active;
            int registrationDate;
            parkingSite^ objParkingSite;
            person^ objPerson;

        public:
            user();
            user(int userID, String^ userType, bool active, int registrationDate, parkingSite^ objParkingSite, person^ objPerson);

            String^ getUserType();
            void setUserType(String^ userType);

            bool getActive();
            void setActive(bool active);

            int getUserID();
            void setUserID(int userID);

            int getRegistrationDate();
            void setRegistrationDate(int registrationDate);

            parkingSite^ getParkingSite();
            void setParkingSite(parkingSite^ objParkingSite);

            person^ getPerson();
            void setPerson(person^ objPerson);

    };
}

#endif //_USER_H
