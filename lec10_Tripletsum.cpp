#include<iostream>
#include<algorithm>

using namespace std;

class findPairSums {
public:
    int s = 10;
    int temp = 0;

    void PairsSum(int arr[], int size);
};

void findPairSums::PairsSum(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        {
            cout<<"Haan bhai i ko utha liya"<<endl;

        for ( int k = i+1; k<size; k++)
        {
            cout<<"Haan bhai k ko bhi utha liya"<<endl;
        for (int j = k+1; j < size; j++) {
            cout<<"J ko bhi utha liya"<<endl;
            temp = arr[i] + arr[k]+arr[j];
            if (temp == s) {
                //sort(arr[i], arr [j]);
                cout<<"mil gya bhai"<<endl;
            
                cout << arr[i] << "," << arr[k]<<","<<arr[j] << endl;
               // return;  // If you want to find only one pair, you can add 'return' here.
            }
        }
    }
        }
    }
   // cout << "Not found" << endl;  // Moved the 'else' statement outside the inner loop
}

int main() {
    findPairSums obj1;
    int arr[] = { 1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr) / sizeof(arr[0]);
    obj1.PairsSum(arr, size);

    return 0;
}
