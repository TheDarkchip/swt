#include <iostream>
#include <ctime>

int main() {
    time_t timetoday;
    time (&timetoday);
	//Hochkomplizierte Funktionalitätense
    std::cout << "Goodbye beauty!";
    std::cout << "Calendar date and time as per todays is : "<< asctime(localtime(&timetoday));
    std::cout << 4 + 8 + 12;
    std::cout << "Quick Math";
    return 0;
}
