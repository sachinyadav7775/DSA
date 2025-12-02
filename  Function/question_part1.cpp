#include<iostream>
using namespace std;

int factorial(int n) {
    int fact = 1;
    for(int i=1; i<=n; i++) {
        fact *= i;
    }
    return fact;
}
int nCr(int n , int r) {
    int fact_n = factorial(n);
    int fact_r = factorial(r);
    int fact_n_minos_r = factorial(n - r);
    int total = fact_n / (fact_r * fact_n_minos_r);
    return total;
}

int main() {
    // int n = 6 , r = 4 ;
    cout << nCr(6 , 4) <<endl;
    
    return 0;
}