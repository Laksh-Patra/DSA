#include<iostream>
using namespace std;

void reverse_an_array(int arr[],int start,int end)
{

    while (start<=end)
    {
        int temp;
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        
        start++;
        end--;
    }
    
}
void print_an_array(int arr[],int n)
{

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}
int main()
{
        int arr[]={1,2,3,4,5,6,7};
        int n=sizeof(arr)/sizeof(arr[0]);
        print_an_array(arr,n);
        reverse_an_array(arr,0,n-1);
        return 0;

        
}