/**
 * Project Untitled
 */
//prueba
//otra prueba
//HOLAAAAA
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
            int registrationDate;
            int expirationDate;
            int contractID;
            List<workHours^>^ listWorkHours;

        public:
            admin();
            admin(int adminID, String^ area, String^ adminType, int registrationDate, int expirationDate, int contractID, List<workHours^>^ listWorkHours, int DNI, String^ name, int code, String^ mail, String^ phone, String^ password, bool permission, String^ occupation, String^ gender, int age, bool isInside);

            int getAdminID();
            String^ getArea();
            String^ getAdminType();
            int getRegistrationDate();
            int getExpirationDate();
            int getContractID();
            List<workHours^>^ getListWorkHours();

            void setAdminID( int adminID);
            void setArea(String^ area);
            void setAdminType(String^ adminType);
            void setRegistrationDate(int registrationDate);
            void setExpirationDate(int expirationDate);
            void setContractID(int contractID);
            void setListWorkHours(List<workHours^>^ listWorkHours);
    };
}


#endif //_ADMIN_H
