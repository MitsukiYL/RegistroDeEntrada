/**
 * Project Untitled
 */


#ifndef _SYSTEMREGISTER_H
#define _SYSTEMREGISTER_H

using namespace System;

namespace RDEModel {
	public ref class systemRegister {
    private:
        int date;
        String^ operationType;
        String^ IP;

    public:
        systemRegister();
        systemRegister(int date, String^ operationType, String^ IP);

        int getDate();
        void setDate(int date);

        String^ getOperationType();
        void setOperationType(String^ operationType);

        String^ getIP();
        void setIP(String^ IP);
    };
}

#endif //_SYSTEMREGISTER_H