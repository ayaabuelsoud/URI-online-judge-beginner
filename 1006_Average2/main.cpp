#include <iostream>
#include <iomanip> //METHODS FOR DIGITS

using namespace std;

int main()
{
    float A,B,C;
    cin >> A >> B >>C ;
    double Z= ((A*2.0)+(B*3.0)+(C*5.0))/ 10.0 ;
    cout << fixed << setprecision(1) << "MEDIA = " <<Z <<endl;

    return 0;
}
