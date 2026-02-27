#include<iostream>
using namespace std;
void changeArr(int arr[], int Size) {
    cout << "in function\n";
    for(int i=0; i<Size; i++) {
        arr[i] = 2*arr[i];
    }
}

int main() {
    int Arr[] = { 1, 2, 3 };
    changeArr(Arr, 3);
    cout << "in main\n";
    for(int i=0; i<3; i++) {
        cout << Arr[i] << " "; 
    }
    cout<<endl;

    return 0;
}