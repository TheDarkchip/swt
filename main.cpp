#include <iostream>
#include <ctime>

int main() {
    time_t timetoday;
    time (&timetoday);
	//Hochkomplizierte Funktionalität
    std::cout << "Goodbye lovely  World!";
    std::cout << "Calendar date and time as per todays is : "<< asctime(localtime(&timetoday));
    std::cout << 3 + 3 + 1
    std::cout << "Quick Math's father";
    return 0;
}
