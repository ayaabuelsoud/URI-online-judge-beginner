#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int R;
    cin >> R;
    double const PI = 3.14159 ;
    double Z =((4.0/3.0)*PI*R*R*R);
    cout << "VOLUME = " << fixed <<setprecision(3)<< Z << endl;
    return 0;
}
