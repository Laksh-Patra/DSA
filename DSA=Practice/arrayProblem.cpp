#include<iostream>
using namespace std;

void additionOfArray(int arr[], int n)
{
    int sum=0;
    cout<<"Enter the elements of an array"<<endl;

    for ( int j = 0; j < n; j++)
    {
       
        cin>>arr[j] ;
    }
    
    for (int i = 0; i < n ; i++)
    {
        
        if(arr[i]>0)
        {
            cout<<arr[i]<<endl;
        }
        sum=sum+arr[i];
        
    }
    cout<<sum;

    
    


}


int main()
{
    int arr[]={1,-2,-4,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    additionOfArray(arr,n);
    
    return 0;
}
