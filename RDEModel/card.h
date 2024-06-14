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
        	String^ code;
            String^ expirationDate;
        	String^ permissionType;
        	int ID;
        	bool permission;
            String^ emissionDate;
            String^ registrationDate;
        	bool active;
            user^ objUser;

    	public:
		card();
		card(String^ code, String^ expirationDate, String^ permissionType, int ID, bool permission, String^ emissionDate, String^ registrationDate, bool active, user^ objUser);

        String^ getCode();
        String^ getExpirationDate();
        String^ getPermissionType();
        int getID();
        bool getPermission();
        String^ getEmissionDate();
        String^ getRegistrationDate();
        bool getActive();
        user^ getObjUser();

        void setCode(String^ code);
        void setExpirationDate(String^ expirationDate);
        void setPermissionType(String^ permissionType);
        void setID(int ID);
        void setPermission(bool permission);
        void setEmissionDate(String^ emissionDate);
        void setRegistrationDate(String^ registrationDate);
        void setActive(bool active);
        void setObjUser(user^ objUser);
    };
}

#endif //_CARD_H
