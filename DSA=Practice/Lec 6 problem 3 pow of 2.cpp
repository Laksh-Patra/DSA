#include<iostream>
#include<math.h>
using namespace std;

class Solution{
public:
    bool isPowerOfTwo(int n){
    for(int i=0;i<=30;i++){
        int ans=pow(2,i);
        if(ans==n)
        {
            cout<< "true"<<endl;

        }
    }
    cout<< "false";
    }
};
int main()
{
    Solution solution_of_power;

    solution_of_power.isPowerOfTwo(205);

    return 0;

}
