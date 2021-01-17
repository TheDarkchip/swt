#include <iostream>
#include <ctime>

int main() {
    time_t timetoday;
    time (&timetoday);
    std::cout << "Calendar date and time as per todays is : "<< asctime(localtime(&timetoday));
    return 0;
}