/**
 * Project Untitled
 */

#include "pch.h"
#include "workHours.h"

using namespace RDEModel;

workHours::workHours() {}

workHours::workHours(int inTime, int outTime, int breakStartTime, int breakFinishTime,
                     String^ scheduleDay) {
    this->inTime = inTime;
    this->outTime = outTime;
    this->breakStartTime = breakStartTime;
    this->breakFinishTime = breakFinishTime;
    this->scheduleDay = scheduleDay;
}

int workHours::getInTime() {
    return this->inTime;
}

void workHours::setInTime(int inTime) {
    this->inTime = inTime;
}

int workHours::getOutTime() {
    return this->outTime;
}

void workHours::setOutTime(int outTime) {
    this->outTime = outTime;
}

int workHours::getBreakStartTime() {
    return this->breakStartTime;
}

void workHours::setBreakStartTime(int breakStartTime) {
    this->breakStartTime = breakStartTime;
}

int workHours::getBreakFinishTime() {
    return this->breakFinishTime;
}

void workHours::setBreakFinishTime(int breakFinishTime) {
    this->breakFinishTime = breakFinishTime;
}

String^ workHours::getScheduleDay() {
    return this->scheduleDay;
}

void workHours::setScheduleDay(String^ scheduleDay) {
    this->scheduleDay = scheduleDay;
}
