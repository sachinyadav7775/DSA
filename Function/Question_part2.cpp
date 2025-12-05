#include<iostream>
using namespace std;
int sumOfdigit(int num) {
    int digitSum = 0;
    while(num > 0) {
        int lastdigit = num % 10;
        num /= 10;
        digitSum += lastdigit; 
    }
    return digitSum;
}

int main() {
    int num ;
    cout << "Enter num : ";      
    cin >> num;
    cout << "sum = " << sumOfdigit(num)<<endl;

    return 0;
}