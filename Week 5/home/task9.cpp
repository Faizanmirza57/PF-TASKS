#include <iostream>
using namespace std;
main()
{
    double inheritedMoney;
    int finalYear;

    cin >> inheritedMoney;
    cin >> finalYear;

    int currentAge = 18;
    int startYear = 1800;
    double spentMoney = 0;

    for(int year = startYear; year <= finalYear; year++)
    {
        if(year % 2 == 0)
        {
            spentMoney = spentMoney + 12000;
        }
        else 
        {
            spentMoney = spentMoney + 12000 + 50 * currentAge;
        }

        currentAge = currentAge + 1;
    }

    double remaining = inheritedMoney - spentMoney;

    if(remaining >= 0)
    {
        cout << "Yes! He will live a carefree life and will have " << remaining << " dollars left.";
    }
    else
    {
        cout << "He will need " << -remaining << " dollars to survive.";
    }

}