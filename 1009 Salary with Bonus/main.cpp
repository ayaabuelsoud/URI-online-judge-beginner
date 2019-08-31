#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
    string name ;
    double salary , sales ;
    cin >> name >> salary >> sales ;
    double z = ((sales * 15)/100)+ salary ;
    cout << "TOTAL = R$ "<< fixed << setprecision(2)<< z << endl;

    return 0;
}
