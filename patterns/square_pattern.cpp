#include<iostream>
using namespace std;
int main() {
    int n = 4;
    for(int i=1; i<=n; i++) {       // outer loop
        for(int j=1; j<=n; j++) {   // inner loop                     // {1}
            cout<< j <<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int m = 3;
    int num = 1;
    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {                                       // {2}
            cout << num <<" ";
            num++;
        }
        cout<<endl;
    }
    cout<<"after number = "<< num <<endl;
    cout<<endl;

    // Triangle pattern 

    int N = 4;
    for(int i=0; i<N; i++) {
        for(int j=0; j<i+1; j++) {                                      // {3}
            cout<< (i+1) <<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int M = 4;
    for(int i=0; i<M; i++) {
        for(int j=1; j<=i+1; j++) {                                      // {4}
            cout<< j <<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    
    // Reverse Triangle pattern 
    
    int d = 4 ;
    for(int i=0; i<d; i++) {
        for(int j=i; j>0; j--) {                                         // {5}
            cout << j <<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    int r = 4;
    for(int i=0; i<r; i++) {
        for(int j=i+1; j>0; j--) {                                        // {6}
            cout << j <<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int u = 4;
    int Num = 1;
    for(int i=0; i<u; i++) {
        for(int j=0; j<i+1; j++) {                                         // {7}
            cout << Num <<" ";
            Num++;
        }
        cout<<endl;
    }
    cout<<endl;

    // Inverted Triangle pattern 

    int R = 4;
    for(int i=0; i<R; i++) {
        // Spaces
        for(int j=0; j<i; j++) {
            cout << " ";
        }
                                                                        
        // Numbers                                                         // {8}
        for(int j=0; j<R-i; j++) {
            cout << i+1;
        }
        cout<<endl;
    }
    cout<<endl;

    // Pyramid pattern

    int U = 7;
    for(int i=0; i<U; i++) {
        // spaces
        for(int j=0; j<U-1-i; j++) {
            cout << " ";
        }
        // number 1
        for(int j=1; j<=i+1; j++) {                                         // {9}
            cout << j;
        }
        // number 2
        for(int j=i; j>0; j--) {
            cout << j;
        }

        cout<<endl;
    }

    return 0;
}