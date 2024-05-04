/**
 * Project Untitled
 */


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
    };
}


#endif //_ADMIN_H
