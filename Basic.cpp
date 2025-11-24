#include <iostream>
using namespace std;
int main() {

    cout<<"[sachin sky]\n";

    int x = 11 , y = 5 ;
    int Sum = x + y ;                          // int    4 Bytes
    // float PI = 3.14f;                       // float  4 Bytes 
    // char grade = 's';                       // char   1 Bytes 
    // bool sky = true;                        // bool   1 Bytes
    // double price = 1100.4;                  // double 8 Bytes              
    // cout<<sizeof(Sum)<<endl;
    cout<< "\n";
    cout<< "Sum = "<< Sum <<endl;
    cout<< "difference = "<< (x - y) <<endl;
    cout<< "product = "<< (x * y) <<endl;
    cout<< "division = "<< (x / y) <<endl;
    cout<< "modulo = "<< (x % y) <<endl; // 1

    cout<<"\n";
    int u = 9 , r = 10 ;
    cout<< r / u <<endl;
    cout<< u / r <<endl;
    cout<< 5/2 <<endl;
    cout<< 4.5/7 <<endl;
    cout<< 7/4.5 <<endl;
    cout<< 5/(float)2 <<endl;
    cout<< 2/(float)5 <<endl;

    // Input Type Variables

    cout<<"\n";
    int n , m ;
    cout <<"Enter number of n : ";
    cin >> n ;
    cout <<"Enter number of m : ";
    cin >> m ;
    int sum = n + m ;
    cout <<"Total sum of the number = " << sum <<endl;

    // [ || OR symbol , && AND symbol ]  use 

    cout<<"\n";
    cout<<( (5>3) || (8>3) )<<endl; // true  -->  1 [ first correct and second correct --> ans true  ]
    cout<<( (6>3) || (4>9) )<<endl; // true  -->  1 [ first correct and second false   --> ans true  ]
    cout<<( (3>5) || (8>3) )<<endl; // true  -->  1 [ first false   and second correct --> ans true  ]
    cout<<( (5<2) || (8<2) )<<endl; // false -->  0 [ first false   and second false   --> ans false ]

    cout<<( (6>3) && (9>2) )<<endl; // true  -->  1 [ first correct and second correct --> ans true  ]
    cout<<( (6>3) && (9<2) )<<endl; // false -->  0 [ first correct and second false   --> ans false ]
    cout<<( (6>7) && (9>2) )<<endl; // false -->  0 [ first false   and second correct --> ans false ]
    cout<<( (6<3) && (9<2) )<<endl; // false -->  0 [ first false   and second false   --> ans false ]

    // [ a++ and ++a , b-- and --b ] Difference

    int a = 5 ;
    int b = a ;
    cout<<"\n";
    cout<< "Ans a = "<< a<<endl;         // normal
    cout<< "Ans b = "<< b<<endl;

    b = a++ ;
    cout<< "\nAns b = "<< b<<endl;       // 5      // a++ Post-increment [ pahle kaam fir update kro ]
    cout<< "Ans a = "<< a<<endl;         // 6

    b = ++a ;
    cout<< "\nAns b = "<< b<<endl;       // 7      // ++a  Pre-increment [ pahle update kro fir kaam ]
    cout<< "Ans a = "<< a<<endl;         // 7

    b = a-- ;
    cout<< "\nAns b = "<< b<<endl;       // 7      // a--  Post-decrement [ pahle kaam kro fir update ]
    cout<< "Ans a = "<< a<<endl;         // 6

    b = --a ;
    cout<< "\nAns b = "<< b<<endl;       // 5      // --a  Pre-decrement [ pahle update kro fir kaam ]
    cout<< "Ans a = "<< a<<endl;         // 5

    // [ < , > , <= , >= use ]

    cout<<"\n";
    cout<< (2<3) <<endl;  // true -->  1
    cout<< (2>3) <<endl;  // false --> 0
    cout<< (2<=3) <<endl; // true -->  1
    cout<< (2>=3) <<endl; // false --> 0
    cout<< (3==3) <<endl; // true -->  1
    cout<< (2==3) <<endl; // false --> 0
    cout<< (2!=3) <<endl; // true -->  1   [Both elements are different]  
    cout<< (2!=2) <<endl; // false --> 0   [Both elements are the same ]

    return 0;
}