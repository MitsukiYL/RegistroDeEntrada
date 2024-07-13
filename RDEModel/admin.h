/**
 * Project Untitled
 */



#ifndef _ADMIN_H
#define _ADMIN_H

#include "workHours.h"
#include "person.h"

using namespace System;
using namespace System::Collections::Generic;

namespace RDEModel {
    public ref class admin {
        private:
            int adminID;
            String^ area;
            String^ adminType;
            String^ registrationDate;
            String^ expirationDate;
            int contractID;
            person^ objPerson;

        public:
            admin();
            admin(int adminID, String^ area, String^ adminType, String^ registrationDate, String^ expirationDate, int contractID, person^ objPerson);

            int getAdminID();
            String^ getArea();
            String^ getAdminType();
            String^ getRegistrationDate();
            String^ getExpirationDate();
            int getContractID();
            person^ getPerson();

            void setAdminID( int adminID);
            void setArea(String^ area);
            void setAdminType(String^ adminType);
            void setRegistrationDate(String^ registrationDate);
            void setExpirationDate(String^ expirationDate);
            void setContractID(int contractID);
            void setPerson(person^ objPerson);
    };
}


#endif //_ADMIN_H
