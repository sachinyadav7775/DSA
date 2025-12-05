#include<iostream>
using namespace std;

int sum(int a , int b) {
    int s = a + b;
    return s;
}

int minoftwo(int a , int b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }
}

int maxofTwo(int a , int b) {
    if(b < a) {
        return a;
    } else {
        return b;
    }
}

int main() {
    cout << "sum = " << sum(4 ,9) <<endl;
    cout << "min number = " << minoftwo(16 ,18)<<endl;
    cout << "max number = " << maxofTwo(55 ,88)<<endl;
    return 0;
}