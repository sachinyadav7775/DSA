#include<iostream>
using namespace std;
int main() {
    int x = 5;
    for(int i=1; i<=x; i++) {
        for(int j=1; j<=x; j++) {                                           // {1}
            cout<< "* ";
        }
        cout<<endl;
    }
    cout<<endl;

    // [ Triangle pattern ]

    int n = 4;
    for(int i=0; i<n; i++) {
        for(int j=0; j<i+1; j++) {                                          // {2}
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    int N = 4;
    for(int i=0; i<N; i++) {
        for(int j=0; j<=N-1-i; j++) {                                       // {3}
            cout << "* ";
        }
        cout<<endl;
    }
    cout<<endl;

    int m = 4;
    for(int i=0; i<m; i++) {
        for(int j=0; j<m-i; j++) {
            cout <<" ";
        }                                                                   // {4}
        for(int j=0; j<=i; j++) {
            cout <<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    int M = 4;
    for(int i=M; i>=1; i--) {
        for(int j=0; j<M-i; j++) {
            cout<<" ";
        }                                                                   // {5}
        for(int j=0; j<i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    // [ Pyramid pattern ]

    int r = 8;
    for(int i=0; i<r; i++) {
        // spaces
        for(int j=0; j<r-1-i; j++) {
            cout << " ";
        }
        // number 1                                                          // {6}
        for(int j=1; j<=i+1; j++) {
            cout << "*";
        }
        // number 2
        for(int j=i; j>0; j--) {
            cout << "*";
        }

        cout<<endl;
    }
    cout<<endl;

    int k = 5;
    // Top part
    for(int i=k; i>=1; i--) {
        for(int j=0; j<k-i; j++) {
            cout<<" ";
        }                                                             
        for(int j=0; j<2*i-1; j++) {
            cout<<"*";
        }
        cout<<endl;                                                           // {7}
    }
    // Bottom part 
    for(int i=2; i<=k; i++) {
        for(int j=0; j<k-i; j++) {
            cout <<" ";
        }
        for(int j=0; j<2*i-1; j++) {
            cout <<"*";
        }
        cout<<endl;
    }
    cout<<endl;

    // [ Diamond pattern ]

    int u = 4;
    // Top part
    for(int i=0; i<u; i++) {

        // Spaces
        for(int j=0; j<u-i-1; j++) {            
            cout << " ";
        }
        
        cout << "*";                                                        
                                                        
        if(i != 0) {
            // Spaces
            for(int j=0; j<2*i-1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout<<endl;
    }                                                             
    // Bottom part                                                             // {8}
    for(int i=0; i<u-1; i++) {

        // Spaces
        for(int j=0; j<i+1; j++) {
            cout << " ";
        }

        cout << "*";

        if(i != u-2) {
            // Spaces
            for(int j=0; j<2*(u-i)-5; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout<<endl;
    }
    cout<<endl;

    // [ Diamond pattern solid ]

    int z = 4;
    // Top part
    for(int i=0; i<z; i++) {
        for(int j=0; j<z-i-1; j++) {
            cout<<" ";
        }
        for(int j=0; j<i+1; j++) {
            cout <<"*";
        }
        for(int j=i; j>0; j--) {
            cout <<"*";
        }                                                                         // {9}
        cout<<endl;
    }
    // Bottom part
    for(int i=z-2; i>=0; i--) {
        for(int j=0; j<z-i-1; j++) {
            cout << " ";
        }
        for(int j=0; j<2*i+1; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout<<endl;

    // [ Butterfly Pattern ]

    int R = 4;
    // Top part
    for(int i=0; i<R; i++) {
        for(int j=0; j<i+1; j++) {                                        
            cout<<"*";
        }
        for(int j=0; j<2*(R-i-1); j++) {
            cout <<" ";
        }
        for(int j=0; j<=i; j++) {
            cout <<"*";
        }
        cout<<endl;
    }                                                                           // {10}
    // Bottom part
    for(int i=R-1; i>=0; i--) {
        for(int j=0; j<i+1; j++) {
            cout <<"*";
        }
        for(int j=0; j<2*(R-i-1); j++) {
            cout<<" ";
        }
        for(int j=0; j<i+1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}