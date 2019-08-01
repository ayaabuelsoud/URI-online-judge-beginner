#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float A,B,C;
    cin >> A >>B >>C ;
    double PI= 3.14159;
    double triangle = (0.5*A)*C;
    double circle = PI * C*C ;
    double trapezium = (.5*(A+B))*C;
    double square = B*B;
    double rectungle = A*B;
    cout <<fixed << setprecision(3)<< "TRIANGULO: "<< triangle << "\n" << "CIRCULO: "<< circle << "\n"
    << "TRAPEZIO: "<< trapezium << "\n" << "QUADRADO: "<< square << "\n" << "RETANGULO: "<< rectungle << endl;
    return 0;
}
