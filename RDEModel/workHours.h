/**
 * Project Untitled
 */


#ifndef _WORKHOURS_H
#define _WORKHOURS_H

using namespace System;

namespace RDEModel {
	public ref class workHours {
    public:
        int inTime;
        int outTime;
        int breakStartTime;
        int breakFinishTime;
        String^ scheduleDay;
    };
}

#endif //_WORKHOURS_H