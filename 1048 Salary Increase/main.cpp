#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    float Salary ;
    double earnMoney =0.0 , NewSalary=0.0 ;
    int percent =0;
    cin >> Salary ;
    if (Salary >0 && Salary <=400.00)
    {
        percent = 15;
        earnMoney = Salary *(0.15) ;
    }
    else if (Salary >400.00 && Salary <=800.00)
    {
        percent = 12;
        earnMoney = Salary *(0.12) ;
    }
    else if (Salary >800.00 && Salary <=1200.00)
    {
        percent = 10 ;
        earnMoney = Salary *(0.10) ;
    }
    else if (Salary >1200.01 && Salary <=2000.00)
    {
        percent = 7;
        earnMoney = Salary*(0.07) ;
    }
    else // salary >2000.00
    {
        percent = 4;
        earnMoney = Salary *(0.04) ;
    }
    NewSalary = earnMoney + Salary ;
    cout << fixed << setprecision(2)<<"Novo salario: " <<NewSalary <<"\n";
    cout << fixed << setprecision(2)<<"Reajuste ganho: "<< earnMoney <<"\n";
    cout <<"Em percentual: "<<percent<<" %"<< endl;

    return 0;
}
