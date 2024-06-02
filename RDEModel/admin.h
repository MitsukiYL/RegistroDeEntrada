/**
 * Project Untitled
 */

#include "workHours.h"

#ifndef _ADMIN_H
#define _ADMIN_H

#include "person.h"

using namespace System;
using namespace System::Collections::Generic;

namespace RDEModel {
    public ref class admin {
        private:
            int adminID;
            String^ area;
            String^ adminType;
            int registrationDate;
            int expirationDate;
            int contractID;
            List<workHours^>^ listWorkHours;
            person^ objPerson;

        public:
            admin();
            admin(int adminID, String^ area, String^ adminType, int registrationDate, int expirationDate, int contractID, List<workHours^>^ listWorkHours, person^ objPerson);

            int getAdminID();
            String^ getArea();
            String^ getAdminType();
            int getRegistrationDate();
            int getExpirationDate();
            int getContractID();
            List<workHours^>^ getListWorkHours();
            person^ getPerson();

            void setAdminID( int adminID);
            void setArea(String^ area);
            void setAdminType(String^ adminType);
            void setRegistrationDate(int registrationDate);
            void setExpirationDate(int expirationDate);
            void setContractID(int contractID);
            void setListWorkHours(List<workHours^>^ listWorkHours);
            void setPerson(person^ objPerson);
    };
}


#endif //_ADMIN_H
