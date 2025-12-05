#include<iostream>
using namespace std;
void reverseArray(int arr[], int size ) {
    int start = 0, end = size -1;
    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int size = 7;
    int arr[] = {4, 3, 5, 2, 9, 0, 1};
    reverseArray(arr, size);
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout <<endl;

    return 0;
}