#include <iostream>
using namespace std;

main()
{

    int hours, min;
    while (true)
    {
    
            cout << "Enter hours in 24 hours format: ";
            cin >> hours;
            cout << "Enter minutes: ";
            cin >> min;
            min = min + 15;
            if (min > 60)
            {
                min = min - 60;
                hours = hours + 1;
            }
            if (hours >= 24)
            {
                
                hours = hours - 24;
                
            }
            
            cout << "Your time in a 24 hours format: ";
            cout << hours << ":" << min << endl;
    }
}