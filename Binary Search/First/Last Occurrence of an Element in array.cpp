#include<iostream>
using namespace std;

void printArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}

int binarySearch(int arr[],int size,int key)
{
   
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while (start<=end)
    {
        if(arr[mid]==key){
            return mid;
        }
        //go to the right part
        if(key>arr[mid])
        {
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=start + (end-start)/2;
        
    }
    return -1;
    

}

int main()
{
    const int SIZE=10;
    int arr[SIZE];
    int size=sizeof(arr) / sizeof(arr[0]);
    int count =0;
     int key;
     cout<<"Enter a Key"<<endl;
    cin>>key;
    cout<<endl;
    cout<<"Enter an array"<<endl;

    
    for (int i = 0; i < SIZE; i++)
    {
        if(cin >>arr[i]) //return cin -> true of input worked
        {
            count++;
        }
        else{
                break;   
        }
    }
        printArray(arr,count);
        cin.clear();

         cout<<"First index of a key is :  "<<binarySearch(arr,count,key);


    return 0;
}