/**
 * Project Untitled
 */


#ifndef _WORKHOURS_H
#define _WORKHOURS_H

using namespace System;

namespace RDEModel {
	public ref class workHours {
    private:
        int inTime;
        int outTime;
        int breakStartTime;
        int breakFinishTime;
        String^ scheduleDay;
    public:
        workHours();
        workHours(int inTime, int outTime, int breakStartTime, int breakFinishTime,
            String^ scheduleDay);

        int getInTime();
        void setInTime(int inTime);

        int getOutTime();
        void setOutTime(int outTime);

        int getBreakStartTime();
        void setBreakStartTime(int breakStartTime);

        int getBreakFinishTime();
        void setBreakFinishTime(int breakFinishTime);

        String^ getScheduleDay();
        void setScheduleDay(String^ scheduleDay);
    };
}

#endif //_WORKHOURS_H