#include <iostream>
using namespace std;
int main() {
    int m = -22 ;
    if (m>=0) {
        cout<<"m is positive"<<endl;
    } else {
        cout<<"m is negative"<<endl;
    }
    cout<<"\n";

    int age ;
    cout<<"Enter your age : ";
    cin>>age;
    if (age>=18) {
        cout<<"Your age is valid to vote"<<endl;
    } else {
        cout<<"Your age is not valid to vote"<<endl;
    }
    cout<<"\n";

    int n ;
    cout<<"Enter number n : ";
    cin >> n;
    if (n%2==0) {
        cout << "Your number is even" <<endl;
    } else {
        cout << "Your number is odd" <<endl;
    }
    cout<<"\n";

    int marks ;
    cout<<"Enter number marks : ";
    cin >> marks ;
    if (marks>=90) {
        cout << "Grade A++"<<endl;
    } else if (marks>=80 && marks<90) {
        cout << "Grade A"<<endl;
    } else if (marks>=70 && marks<80) {
        cout << "Grade B"<<endl;
    } else if (marks>=60 && marks<70) {
        cout << "Grade C"<<endl;
    } else {
        cout << "Grade D"<<endl;
    }
    cout<<"\n";

    char ch ;
    cout<<"Enter char : ";
    cin>> ch ;
    if (ch>='a'&& ch<='z') {                          // a --> 97  ,  A --> 65
        cout << "Lowercase"<<endl;                    // Lowercase --> a
    } else {                                          // Uppercase --> A
        cout << "Uppercase"<<endl;
    }
    cout<<"\n";

    // Ternary Statement
    // condition ? stt1 : stt2
    
    int r = 40;
    cout <<(r>=0 ? "positive" : "negative")<<endl;

    return 0;
}