#include<iostream>
#include<climits>
using namespace std;

/*void inputOfArray(int arr1[],int size1,int arr2[],int size2)
{
   
   
}
*/
int findArrayIntersection(int arr1[],int size1,int arr2[],int size2)
{
       int ans=0;
    cout<<"Enter the size of an array 1"<<endl;
    cin>>size1;
    cout<<"Enter the elements"<<endl;
    for (int a = 0; a < size1; a++)
    {
        
        cin>>arr1[a];
    }
    
     cout<<"Enter the size of an array 2"<<endl;
    cin>>size2;
    cout<<"Enter the elemnts"<<endl;
    for (int b = 0; b < size2; b++)
    {
        
        cin>>arr2[b];
    }
  
    

    for (int i = 0; i < size1; i++)
    {
        int element=arr1[i];
    
    for (int j = 0; j < size2; j++)
    {
        if(element<arr2[j])
        break;
        if(element==arr2[j])
        {
            
            //cout<<arr1[i]<<endl;
            arr2[j]=INT_MIN;
            break;

        }
    }
    }
    return ans;
    
}
int main()
{
    
    int i=0,arr1[i],size1,j=0,arr2[j],size2;
 //   inputOfArray(arr1,size1,arr2,size2);
    cout<<findArrayIntersection(arr1,size1,arr2,size2)<<endl;

    

  
    return 0;
}