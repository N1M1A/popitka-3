// dllexport.cpp
#include <windows.h>
#include <cstdio>

extern "C" {

// Функция для отправки сообщения (вывод в консоль)
__declspec(dllexport) void mysend(const char* message) {
     printf("send: %s\n", message);
      fflush(stdout);
}

// Функция для выполнения команды send_cmd1
__declspec(dllexport) void send_cmd1() {
        printf("Executing send_cmd1()\n");
            fflush(stdout);
}

// Функция для отправки номера
__declspec(dllexport) void send_number(int number) {
     printf("Number: %d\n", number);
         fflush(stdout);
}

}

BOOL WINAPI DllMain(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved) {
    return TRUE;
}