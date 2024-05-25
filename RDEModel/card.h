/**
 * Project Untitled
 */


#ifndef _CARD_H
#define _CARD_H

#include "user.h"

using namespace System;

namespace RDEModel {
	public ref class card {
    		private:
        	int code;
        	int expirationDate;
        	String^ permissionType;
        	int ID;
        	bool permission;
        	int emissionDate;
        	int registrationDate;
        	bool active;
            user^ objUser;

    	public:
		card();
		card(int code, int expirationDate, String^ permissionType, int ID, bool permission, int emissionDate, int registrationDate, bool active, user^ objUser);

        int getCode();
        int getExpirationDate();
        String^ getPermissionType();
        int getID();
        bool getPermission();
        int getEmissionDate();
        int getRegistrationDate();
        bool getActive();
        user^ getObjUser();

        void setCode(int code);
        void setExpirationDate(int expirationDate);
        void setPermissionType(String^ permissionType);
        void setID(int ID);
        void setPermission(bool permission);
        void setEmissionDate(int emissionDate);
        void setRegistrationDate(int registrationDate);
        void setActive(bool active);
        void setObjUser(user^ objUser);
    };
}

#endif //_CARD_H
