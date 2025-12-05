#include<iostream>
using namespace std;
int linearSearch(int arr[], int size, int target) {
    for(int i=0; i<size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }

    return -1;
}

int main() {
    int arr[] = {2, 4, 5, 3, 9, 1, 7, 8, 6};
    int size = 9;
    int target = 6;
    cout << linearSearch(arr, size, target) <<endl;

    return 0;
}