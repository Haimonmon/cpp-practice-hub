#include <iostream>

int calculate_water_bill(int water_consumption, int multiply)
{
    int calculated = water_consumption * multiply;
    return calculated;
}

int main()
{
    int bill, water_consumption;

    std::cout << "Your Water Consumption: "; std::cin >> water_consumption;

    if (water_consumption > 200)
    {
        bill = calculate_water_bill((water_consumption - 200), 20) + calculate_water_bill((200 - 99), 15) + calculate_water_bill(99, 10);
    } 
    
    else if (water_consumption >= 100)
    {
        bill = calculate_water_bill((water_consumption - 99), 15) + calculate_water_bill(99, 10);
    } 
    
    else if (water_consumption < 100)
    {
        bill = calculate_water_bill(water_consumption, 10);
    }

    std::cout << "Your Water consumption is " << bill << " Pesos/cubic Meter";
}