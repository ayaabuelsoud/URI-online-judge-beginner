#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
     double a,b,c,area;
    cin>>a>>b>>c;
    if(a<(b+c)&&b<(a+c)&&c<(a+b)){
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<a+b+c<<endl;
    }
    else{
        area=0.5*(a+b)*c;
        cout<<fixed<<setprecision(1)<<"Area = "<<area<<endl;
    }
    return 0;
}
