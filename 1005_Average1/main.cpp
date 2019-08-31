#include <iostream>
#include <iomanip> //METHODS FOR DIGITS
using namespace std;

int main()
{
    float A ,B;
    cin >> A >>B ;
    double Z = ((A*3.5)+(B*7.5))/11.0;
    cout << fixed << setprecision(5) << "MEDIA = " <<Z <<endl;

   return 0;
}
