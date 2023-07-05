#include<iostream>
#include<algorithm>

using namespace std;

class findPairSums {
public:
    int s = 0;
    int temp = 0;

    void PairsSum(int arr[], int size);
};

void findPairSums::PairsSum(int arr[], int size) {
    for (int i = 0; i < size; i++) {
      
        for (int j = i+1; j < size; j++) {
            temp = arr[i] + arr[j];
            if (temp == s) {
                //sort(arr[i], arr [j]);
            
                cout << arr[i] << "," << arr[j] << endl;
               // return;  // If you want to find only one pair, you can add 'return' here.
            }
        }
    }
   // cout << "Not found" << endl;  // Moved the 'else' statement outside the inner loop
}

int main() {
    findPairSums obj1;
    int arr[] = { 2,-3,3,3,-2};
    int size = sizeof(arr) / sizeof(arr[0]);
    obj1.PairsSum(arr, size);

    return 0;
}
