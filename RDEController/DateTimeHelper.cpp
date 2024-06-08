#include "DateTimeHelper.h"
#include <ctime>

using namespace System;
using namespace std;
using namespace RDEController;

DateTimeHelper::DateTimeHelper() {};

String^ DateTimeHelper::horaActual() {
    time_t now = time(0);
    tm* local_tm = localtime(&now);
    return gcnew String(std::to_string(local_tm->tm_hour).c_str()) + ":" +
        gcnew String(std::to_string(local_tm->tm_min).c_str()) + ":" +
        gcnew String(std::to_string(local_tm->tm_sec).c_str());
}

String^ DateTimeHelper::fechaActual() {
    time_t now = time(0);
    tm* local_tm = localtime(&now);
    return gcnew String(std::to_string(local_tm->tm_mday).c_str()) + "/" +
        gcnew String(std::to_string(local_tm->tm_mon + 1).c_str()) + "/" +
        gcnew String(std::to_string(local_tm->tm_year + 1900).c_str());
}
