#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string day1 , day2 , p;
    int d1 , d2 , h1,m1,s1,h2,m2,s2;
    int all_sec=0,days =0,hours=0, mins=0,sec=0;

    cin>> day1 >> d1;
    cin>> h1>> p>> m1 >>p>>s1;
    cin>> day2 >> d2;
    cin>> h2>> p>> m2>>p>>s2;

    //convert all time to seconds&get the event time in seconds
    all_sec=((d2*86400)-(d1*86400) +(h2*3600)-(h1*3600) +(m2*60)-(m1*60)+(s2-s2));

    days= all_sec/86400;
    cout <<days<<" dia(s)"<<endl;
    hours= (all_sec%86400 )/ 3600 ;
    cout <<hours<<" hora(s)"<<endl;
    mins =(all_sec%3600) /60;
    cout << mins <<" minuto(s)" <<endl;
    sec=all_sec %60;
    cout << sec <<" segundo(s)"<<endl;
    return 0;
}
