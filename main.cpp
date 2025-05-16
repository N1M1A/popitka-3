#include <windows.h>
#include <iostream>
#ifdef _WIN32
#define IMPORT __declspec(dllimport)
#else
#define IMPORT
#endif

extern "C" {
    IMPORT void mysend(const char* message);
    IMPORT void send_cmd1();
    IMPORT void send_number(int number);
}
int main() {

    // Вызовы функций — вывод будет в консоль терминала
    mysend("закрося");
    send_cmd1();
    send_number(123);

    return 0;
}