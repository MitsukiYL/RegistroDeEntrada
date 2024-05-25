/**
 * Project Untitled
 */
//prueba
//otra prueba
#include "workHours.h"

#ifndef _ADMIN_H
#define _ADMIN_H

#include "person.h"

using namespace System;
using namespace System::Collections::Generic;

namespace RDEModel {
    public ref class admin : public person {
        private:
            int adminID;
            String^ area;
            String^ adminType;
            String^ name;
            String^ password;
            int registrationDate;
            int expirationDate;
            int contractID;
            List<workHours^>^ listWorkHours;

        public:
            admin();
            admin(int adminID, String^ area, String^ adminType, String^ name, String^ password, int registrationDate, int expirationDate, int contractID, List<workHours^>^ listWorkHours);

            int getAdminID();
            String^ getArea();
            String^ getAdminType();
            String^ getName();
            String^ getPassword();
            int getRegistrationDate();
            int getExpirationDate();
            int getContractID();
            List<workHours^>^ getListWorkHours();

            void setAdminID( int adminID);
            void setArea(String^ area);
            void setAdminType(String^ adminType);
            void setName(String^ name);
            void setPassword(String^ password);
            void setRegistrationDate(int registrationDate);
            void setExpirationDate(int expirationDate);
            void setContractID(int contractID);
            void setListWorkHours(List<workHours^>^ listWorkHours);
    };
}


#endif //_ADMIN_H
