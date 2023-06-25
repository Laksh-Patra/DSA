#include<iostream>
using namespace std;
class Solution{

public:
    int hamingWeight(int n){


    int count=0;
    while(n!=0){
        //checking last bit
        if(n&1){
            count++;
        }
        n=n>>1;
    }
    cout<<count;



    }


};
int main()
{
    Solution s;
    s.hamingWeight(11);
    return 0;
}
