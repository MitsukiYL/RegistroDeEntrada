#pragma once

#include <string>

namespace RDEController {
    using namespace System;

    public ref class DateTimeHelper
    {
    public:
        DateTimeHelper();
        static String^ horaActual();
        static String^ fechaActual();
    };
}
