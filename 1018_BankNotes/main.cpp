#include <iostream>

using namespace std;

int main()
{
    int n, res ,arr[7]={100,50,20,10,5,2,1};
        cin>>res;
        cout << res <<endl;
        for(int i=0;i<7;i++)
        {
            n=res/arr[i];
            res %= arr[i];
            cout <<n<<" nota(s) de R$ "<<arr[i]<<",00\n";
        }

    return 0;
}
