/**
 * Project Untitled
 */


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
    };

}

#endif //_DOORREGISTER_H
