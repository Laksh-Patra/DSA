#include<iostream>
using namespace std;

void update(int arr[],int n){

cout<<endl <<"Inside the function"<<endl;
    //updating array's first element
    arr[0]=120;


    //printing the array
    for(int i=0;i<3;i++){

        cout<<arr[i]<<" ";

    }cout<<endl;
    cout<<"Going back to the main function"<<endl;




}

int main()
{

    int arr[]={1,2,3};

    update(arr,4);

    //printing an array
    for(int i=0;i<2;i++)
    {
        cout<<arr[i]<<" ";

    }
    return 0;

}
