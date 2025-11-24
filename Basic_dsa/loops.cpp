#include<iostream>
using namespace std;
int main() {
    int i = 1;
    while(i<=20) {
        cout << i <<" ";                                             // {1}
        i++;
    }
    cout<<endl;
    cout<<"\n";

    int n = 5;
    for(int i=1; i<=n; i++) {                                        // {2}
        cout << i <<" ";
    }
    cout<<endl;
    cout<<"\n";

    // Is the sum of numbers from 1 to 100 [ for loop ]

    int m = 100 ;
    int sum = 0 ;
    for(int i=1; i<=m; i++) {                                         // {3}
        sum += i;
        // if(i == 30) {
        //     break;
        // }
    }
    cout<<"sum = " << sum <<endl;
    cout<<"\n";

    // Is the sum of numbers from 1 to 50 [ while loop ]

    int j = 1 ;
    int Sum = 0 ;
    while(j<=50) {
        Sum = Sum + j;                                                  // {4}
        j++;
        // if(j == 10) {
        //     break;
        // }
    }
    cout<<"sum = " << Sum <<endl;
    cout<<"\n";

    // print odd numbers and sum [ for loop ]

    int r = 10;
    int SUM = 0;
    for(int i=1; i<=r; i++) {                                            // {5}
        if(i%2 != 0) {
            cout << i << " ";
            SUM += i;
        }
    }
    cout<<endl;
    cout <<"Total odd number of sum = " << SUM <<endl;
    cout<<"\n";

    // print even numbers and sum [ for loop ]

    int u = 10;
    int SUm = 0;
    for(int i=1; i<=u; i++) {
        if(i%2 == 0) {                                                    // {6}
            cout << i << " ";
            SUm += i;
        }
    }
    cout<<endl;
    cout <<"Total even number of sum = " << SUm <<endl;
    cout<<"\n";

    // print even numbers and sum [ while loop ]

    int x = 1;
    int SuM = 0;
    while(x<=20) {
        if(x%2 == 0) {                                                     // {7}
            cout << x << " ";
            SuM += x;
        }
        x++;
    }
    cout<<endl;
    cout <<"Total even number of sum = " << SuM <<endl; 
    cout<<"\n";
    
    // print odd number and sum [ while loop ]

    int y = 1;
    int sUm = 0;
    while(y<=20) {
        if(y%2 != 0) {                                                      // {8}
            cout << y << " ";
            sUm += y;
        }
        y++;
    }
    cout<<endl;
    cout <<"Total odd number of sum = " << sUm <<endl; 

    return 0;
}