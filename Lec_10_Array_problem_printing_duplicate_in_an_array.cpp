#include<iostream>
using namespace std;
int findDuplicate(int arr[],int size)
{
    int ans =0;
    for(int i=0;    i<size;    i++)
    {
        ans=ans^ arr[i];
    }
    for(int i = 0; i < size; i++)
    {
    ans=ans^i;
    }
return ans;
} 



int main()
{
    int arr[]={1,2,3,4,2};
    int size= sizeof(arr)/sizeof(arr[0]);
    cout<<findDuplicate(arr,size)<<"   ";
    return 0;

}