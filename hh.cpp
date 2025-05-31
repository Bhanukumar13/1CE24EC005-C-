#include <iostream>
#include <chrono>   // For std::chrono::seconds and steady_clock
#include <thread>   // For std::this_thread::sleep_for

void countdownTimer(int seconds) {
    while (seconds > 0) {
        std::cout << "\rTime remaining: " << seconds << " seconds ";
        std::cout.flush();
        std::this_thread::sleep_for(std::chrono::seconds(1));
        --seconds;
    }

    std::cout << "\rTime's up!                      \n";
}

int main() {
    int duration;
    std::cout << "Enter countdown time in seconds: ";
    std::cin >> duration;

    if (duration <= 0) {
        std::cout << "Please enter a positive number.\n";
        return 1;
    }

    countdownTimer(duration);
    return 0;
}