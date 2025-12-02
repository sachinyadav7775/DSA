#include<iostream>
using namespace std;

void printHello() {
    cout<<"Hello Sachin\n";
    return;
}
int sum(int a , int b) {
    int s = a + b;
    return s ;
}
int main() {
    printHello();
    printHello();
    printHello();
    printHello();
    printHello();
    cout << sum(3,4)<<endl;
    return 0;
}