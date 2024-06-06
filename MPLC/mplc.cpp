#include "mplc.h"

#include <Windows.h>

using namespace MPLC;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew mplc);
    return 0;
}