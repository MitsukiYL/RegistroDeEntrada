/**
 * Project Untitled
 */


#ifndef _USER_H
#define _USER_H

#include "person.h"

using namespace System;

namespace RDEModel {
	public ref class user : public person {
    public:
        String^ userType;
        String^ name;
        String^ password;
        bool active;
        int userID;
        int registrationDate;
    };
}

#endif //_USER_H