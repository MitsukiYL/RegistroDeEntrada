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
    };
}

#endif //_CARD_H
