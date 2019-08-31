#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    int num , workhours;
    cin >> num >> workhours ;
    float perWorkHour;
    cin >> perWorkHour;
    double salary = workhours*perWorkHour ;
    cout <<"NUMBER = "<< num << "\n" ;
    cout <<"SALARY = U$ "<<fixed<<setprecision(2)<< salary <<endl;

    return 0;
}
