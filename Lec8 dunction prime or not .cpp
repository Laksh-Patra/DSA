#include<iostream>
using namespace std;
//0 -> Not Prime
//1 -> Prime No
bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            //divide
            return 0;
        }
    }
    return 1;



}
int main()
{

    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Is Prime Number"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }
}
