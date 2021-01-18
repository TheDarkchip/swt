#include <iostream>
#include <ctime>

int main() {
    time_t timetoday;
    time (&timetoday);
	//Hochkomplizierte Funktionalität
    std::cout << "Goodbye World!";
    std::cout << "Calendar date and time as per todays is : "<< asctime(localtime(&timetoday));
    std::cout << "Quick Math";
    return 0;
}