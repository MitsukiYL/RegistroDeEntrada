/**
 * Project Untitled
 */
//prueba
//otra prueba

#ifndef _ADMIN_H
#define _ADMIN_H

#include "person.h"

using namespace System;

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

        public:
            admin();
            admin(int adminID, String^ area, String^ adminType, String^ name, String^ password, int registrationDate, int expirationDate, int contractID);

            int getadminID();
            String^ getarea();
            String^ getadminType();
            String^ getname();
            String^ getpassword();
            int getregistrationDate();
            int getexpirationDate();
            int getcontractID();

            void setadminID( int adminID);
            void setarea(String^ area);
            void setadminType(String^ adminType);
            void setname(String^ name);
            void setpassword(String^ password);
            void setregistrationDate(int registrationDate);
            void setexpirationDate(int expirationDate);
            void setcontractID(int contractID);
    };
}


#endif //_ADMIN_H
