#include <iostream>

using namespace std;

int main()
{
    int a,b,Hour=0;
    cin>>a>>b;
    if(a<b){
        Hour=b-a;
        cout<<"O JOGO DUROU "<<Hour<<" HORA(S)"<<endl;
    }else if(a>b){
        Hour=24-(a-b) ;
        cout<<"O JOGO DUROU "<<Hour<<" HORA(S)"<<endl;
    }else if(a==b){
        Hour=24;
        cout<<"O JOGO DUROU "<<Hour<<" HORA(S)"<<endl;
    }
    return 0;
}
