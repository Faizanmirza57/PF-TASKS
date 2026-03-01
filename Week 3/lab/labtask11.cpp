#include<iostream>
using namespace std;

main()
{
    int population;
    int n;
    int future_population;
    
    cout << "Enter the current world population: ";
    cin >> population;
    
    cout << "Enter the monthly birth rate (number of births per month): ";
    cin >> n;
    
    int months = 30 * 12;
    
    future_population = population + (n * months);
    
    cout << " Population after 3 decades (when spaceship is ready): ";
    cout << future_population ;
}