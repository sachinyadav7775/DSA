#include<iostream>
using namespace std;
int main() {
    int n = 5;
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {                                           // {1}
            cout<< "* ";
        }
        cout<<endl;
    }
    cout<<endl;

    // Triangle pattern 

    int m = 4;
    for(int i=0; i<m; i++) {
        for(int j=0; j<i+1; j++) {                                          // {2}
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;

    // Pyramid pattern

    int r = 8;
    for(int i=0; i<r; i++) {
        // spaces
        for(int j=0; j<r-1-i; j++) {
            cout << " ";
        }
        // number 1                                                          // {3}
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

    // Diamond pattern

    int u = 4;
    // Top
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
                                                                            
    // bottom                                                              // {4}
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
    
    return 0;
}