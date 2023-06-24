#include<iostream>
using namespace std;

int main()
{
    int ans=0;
    int x;
    cin>>x;
    int INT_MAX,INT_MIN;
    while( x!=0){
        int digit =x%10;
        if((ans >INT_MAX/10)||(ans<INT_MIN/10))
{
    cout<<"0"<<endl;
}

        ans =(ans*10)+digit;//Reverse a number

        x=x/10;


}
cout<<ans<<endl;;





    return 0;
    }
