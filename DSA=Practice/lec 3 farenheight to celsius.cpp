#include<iostream>
using namespace std;


int main()
{
    float n,i=1,f;

    cout<<"Enter the value of n"<<endl;
    cin>>n;

    while(i<=n)
    {
        cout<<i<<endl;
        f=(i-32)*5/9;
          cout<<"\t"<<f<<endl;
        i++;
    }


    return 0;
}
