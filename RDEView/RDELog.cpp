#include "RDELog.h"

using namespace System;
using namespace RDEView;

[STAThreadAttribute]
int Main(array<String^>^ args) {
    RDELog^ mainForm = gcnew RDELog();
    Application::Run(mainForm);
    return 0;
}