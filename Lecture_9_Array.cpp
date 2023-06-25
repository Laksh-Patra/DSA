#include<iostream>
using namespace std;

void printarray(int arr[],int size){
      
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<endl;
    }
    cout<<"Printing Done"<<endl;
}
int main(){
/**
    //declare
    int number[15];
    //accessing an array
    cout<<"Value at 2 index"<< number[2] <<endl;
    //cout<<"Value at 24 index"<< number[14] <<endl;

    //initialising array
    int second[3]={5,7,9};
    cout<<" Value at 2 index "<< second[2] <<endl;

    int third[34]={1,0,7};
    cout<<" Value at 2 index "<< third[2] <<endl;
    int n=34;
    //printing size of an array
   printarray(third,34);

// Not possible to make all 1 only all 0 is possible with below code
    int fourth[45]={1};
    cout<<" Value at 29 index "<< fourth[29] <<endl;
      int z=45;
    //printing size of an array
    printarray(third,34);

    int fifth[]={1,2,3,4,5};
    cout<<" Value at 2 index "<< fifth[2] <<endl;

    int sixth[] {1,2,3,4,5};
    cout<<" Value at 5 index "<< sixth[4] <<endl;
    

    cout<<endl <<"Everything is Fine"<<endl << endl;
 */
/*Different types of array*/
char ch[5]={'a','b','c','d','e'};
cout<< ch[3]<<endl;
double firstDouble[5];
float firstFloat[6];
bool firstBool[9];
   
    cout<<endl <<"Everything is Fine"<< endl << endl;
   
    return 0;
}