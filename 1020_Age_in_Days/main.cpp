#include <iostream>

using namespace std;

int main()
{
    int uage;
    cin >> uage ;
    int year = uage/365;
    int month = (uage%365)/30;
    int days = (uage%365)%30;
    cout << year <<" ano(s)" << "\n" << month <<" mes(es)"<<"\n" << days <<" dia(s)"<< endl;
    return 0;
}
