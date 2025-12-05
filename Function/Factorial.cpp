#include<iostream>
using namespace std;

int sumN(int n) {
    int sum = 0 ;
    for(int i=1; i<=n; i++) {
        sum += i;
    }
    return sum;
}

int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}
int main() {
    cout << sumN(4) <<endl;
    cout << factorial(4) <<endl;
    cout << factorial(6) <<endl;
    return 0;
}