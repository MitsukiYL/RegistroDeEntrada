/**
 * Project Untitled
 */

//hola
#ifndef _DOORREGISTER_H
#define _DOORREGISTER_H

using namespace System;

namespace RDEModel {
    public ref class doorRegister {
    private:
        int entryTime;
        int exitTime;
        bool userIn;
        int code;

    public:
        doorRegister();
        doorRegister(int entryTime, int exitTime, bool userIn, int code);

        int getEntryTime();
        void setEntryTime(int entryTime);

        int getExitTime();
        void setExitTime(int exitTime);

        bool getUserIn();
        void setUserIn(bool userIn);

        int getCode();
        void setCode(int code);
    };

}

#endif //_DOORREGISTER_H
