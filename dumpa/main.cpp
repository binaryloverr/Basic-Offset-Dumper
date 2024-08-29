#include <Windows.h>
#include <iostream>
#include "util/get_offsets.cpp"
#include <chrono>
#include <thread>

auto main() -> int 
{
    system("color 0C");

    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

    std::cout << "\n Made by reversefortnite_. \n";
    Sleep(3000);
    system("cls");

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_BLUE | FOREGROUND_RED);

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);
    std::string input;


    const int progress = 100;
    for (int i = 0; i <= progress; ++i) {
        std::cout << "Dumping... [" << i << "%]\r";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::milliseconds(30)); 
    }

    Offsets::getDaOffsets();
    std::cout << ("[+] Done and saved to txt file.") << std::endl;
    Sleep(3000);
    exit(1);
}
