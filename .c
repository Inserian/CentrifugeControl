#include <iostream>
#include <string>

//Input variable speed from 0 (stop) to 10 (full). Higher output can cause issues.

int main()
{
    // Initialize variables for centrifuge speed and time
    int speed = 0;
    int time = 0;

    // Prompt user for desired centrifuge speed and time
    std::cout << "Enter the desired centrifuge speed (in RPM): ";
    std::cin >> speed;
    std::cout << "Enter the desired centrifugation time (in minutes): ";
    std::cin >> time;

    // Convert time to seconds
    int timeInSeconds = time * 60;

    // Set the centrifuge to the desired speed and run for the specified time
    std::string command = "centrifuge -s " + std::to_string(speed) + " -t " + std::to_string(timeInSeconds);
    system(command.c_str());

    return 0;
}
