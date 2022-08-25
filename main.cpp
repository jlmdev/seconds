/*
 * Seconds Project
 * Display seconds on screen as 2 digits
 */

#include <iostream>
#include <iomanip>
#include <chrono>
#include <thread>
using namespace std;

int main() {
    // Declarations
    int seconds = 0;

    // Output
    std::cout << setw(2) << setfill('0') << seconds << std::endl;
    system("clear");


    // Loop

    for (int i = 0; i < 60; i++) {
        seconds = i;
        std::cout << setw(2) << setfill('0') << seconds << std::endl;
        std::this_thread::sleep_for(1000ms);
        system("clear");
    }

    return 0;


}
