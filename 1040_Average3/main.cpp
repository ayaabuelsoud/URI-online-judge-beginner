#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double N1 ,N2,N3,N4,avrge;
    cin>>N1 >>N2>>N3>>N4;
    N1=(N1*2)/10;
    N2=(N2*3)/10;
    N3=(N3*4)/10;
    N4=(N4*1)/10;
    avrge=N1+N2+N3+N4;
    if(avrge>=7.0)
    {
        cout<<fixed << setprecision(1)<<"Media: "<<avrge<<"\nAluno aprovado."<<endl;
    }
    else if(avrge<5.0)
    {
        cout<<fixed << setprecision(1)<<"Media: "<<avrge<<"\nAluno reprovado."<<endl;
    }
    else
    {
        double N5, Mfinal=0;
        cout<<fixed << setprecision(1)<<"Media: "<<avrge<<"\nAluno em exame."<<endl;
        cin>>N5;
        Mfinal=(avrge+N5)/2;
        if (Mfinal>5.0)
        {
            cout<<fixed << setprecision(1)<<"Nota do exame: "<<N5<<"\nAluno aprovado.\nMedia final: "<<Mfinal<<endl;
        }
        else
        {
            cout<<fixed << setprecision(1)<<"Nota do exame: "<<N5<<"\nAluno reprovado..\nMedia final: "<<Mfinal<<endl;
        }

    }
    return 0;
}
