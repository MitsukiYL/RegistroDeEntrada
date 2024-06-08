/**
 * Project Untitled
 */
#include "admin.h"

#ifndef _SYSTEMREGISTER_H
#define _SYSTEMREGISTER_H

using namespace System;

namespace RDEModel {
	public ref class systemRegister {
    private:
        String^ date;
        String^ operationType;
        String^ IP;
        admin^ objAdmin;

    public:
        systemRegister();
        systemRegister(String^ date, String^ operationType, String^ IP, admin^ objAdmin);

        String^ getDate();
        void setDate(String^ date);

        String^ getOperationType();
        void setOperationType(String^ operationType);

        String^ getIP();
        void setIP(String^ IP);

        admin^ getObjAdmin();
        void setObjAdmin(admin^ objAdmin);
    };
}

#endif //_SYSTEMREGISTER_H