#include<iostream>
#include<climits>
using namespace std;
int main() {
    int marks[3] = {33, 332, 300};
    marks[1] = 88;
    cout << marks[0] <<endl;
    cout << marks[1] <<endl;                                                 // {1}
    cout << marks[2] <<endl;
    cout<<endl;

    int size = 5;
    int Marks[size];
    // int Marks[size] = { 90, 23, 33, 44, 11 };
    for(int i=0; i<size; i++) {
        cin >> Marks[i];
    }                                                                        // {2}

    for(int i=0; i<size; i++) {
        cout << Marks[i] <<endl;
    }
    cout<<endl;

    int nums[] = {4, -2, 3, -1, -14, 55};
    int Size = 6;
    int smallest = INT_MAX;
    for(int i=0; i<Size; i++) {
        // if(nums[i] < smallest) {
        //     smallest = nums[i];
        // }                                                                 // {3}

        smallest = min(nums[i], smallest);
    }
    cout <<"smallest = " << smallest <<endl;


    int SIZE = 6;
    int Nums[] = {4, -2, 3, -1, -14, 55};
    int largest = INT_MIN;
    for(int i=0; i<SIZE; i++) {
        // if(Nums[i] > largest) {
        //     largest = Nums[i];
        // }                                                                // {4}

        largest = max(Nums[i], largest);
    }
    cout <<"largest = " << largest <<endl;

    return 0;
}