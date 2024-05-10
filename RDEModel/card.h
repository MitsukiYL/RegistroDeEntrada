/**
 * Project Untitled
 */


#ifndef _CARD_H
#define _CARD_H

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

    	public:
		card();
		card(int code, int expirationDate, String^ permissionType, int ID, bool permission, int emissionDate, int registrationDate, bool active);

        int getcode();
        int getexpirationDate();
        String^ getpermissionType();
        int getID();
        bool getpermission();
        int getemissionDate();
        int getregistrationDate();
        bool getactive();

        void setcode(int code);
        void setexpirationDate(int expirationDate);
        void setpermissionType(String^ permissionType);
        void setID(int ID);
        void setpermission(bool permission);
        void setemissionDate(int emissionDate);
        void setregistrationDate(int registrationDate);
        void setactive(bool active);
    };
}

#endif //_CARD_H
