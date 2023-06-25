#include<iostream>
using namespace std;

int power()
{

    int a,b; //Local variables
    cout<<"Enter the value of A"<<endl;
    cin>>a;
    cout<<"Enter the value of B"<<endl;
    cin>>b;

    int ans=1;
    for(int i=1;i<=b;i++)
    {
        ans=ans*a;

    }
    return ans;

}
int main()
{
    int answer;
    answer=power();
    cout<<"Answer is"<< answer<<endl;
    return 0;


}
