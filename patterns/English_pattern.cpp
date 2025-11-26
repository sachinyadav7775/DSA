#include<iostream>
using namespace std;
int main() {
    int n = 4;
    for(int i=0; i<n; i++) {
        char ch = 'A';
        for(int j=0; j<n; j++) {                                // A --> 65  {1}
            cout<< ch << " ";
            ch++;
        }
        cout<<endl;
    }
    cout<<endl;

    int m = 3;
    char cH = 'A';
    for(int i=0; i<m; i++) {
        for(int j=0; j<m; j++) {                                       // {2}   
            cout << cH << " ";
            cH++;
        }
        cout<<endl;
    }
    cout<<"after char = "<<cH<<endl;
    cout<<endl;

    // Triangle pattern 

    int N = 5;
    for(int i=0; i<N; i++) {
        char Ch = 'A'+i;
        for(int j=0; j<i+1; j++) {                                    // {3}
            cout<< Ch <<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    int M = 4;
    for(int i=0; i<M; i++) {
        char CH = 'A';
        for(int j=0; j<=i; j++) {        // for(int j=1; j<=i+1; j++)   {4}
            cout<< CH <<" ";
            CH++;
        }
        cout<<endl;
    }
    cout<<endl;

    // Reverse Triangle pattern 

    int d = 4 ;
    for(int i=0; i<d; i++) {
        char ch = 'A'+i-1;
        for(int j=i; j>0; j--) {                                         // {5}
            cout << ch <<" ";
            ch--;
        }
        cout<<endl;
    }
    cout<<endl;

    int r = 5;
    for(int i=0; i<r; i++) {
        char ch = 'A'+i;
        for(int j=i+1; j>0; j--) {                                        // {6}
            cout << ch <<" ";
            ch--;
        }
        cout<<endl;
    }
    cout<<endl;

    int u = 5;
    char ch = 'A';
    for(int i=0; i<u; i++) {
        for(int j=0; j<i+1; j++) {                                        // {7}
            cout << ch <<" ";
            ch++;
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

        // Numbers                                                        // {8}
        char ch = 'A'+i;
        for(int j=0; j<R-i; j++) {
            cout << ch;
        }
        cout<<endl;
    }
    cout<<endl;

    // Pyramid pattern

    int U = 6;
    for(int i=0; i<U; i++) {
        // spaces
        for(int j=0; j<U-1-i; j++) {
            cout << " ";
        }
        // word 1
        char ch = 'A';
        for(int j=1; j<=i+1; j++) {                                         // {9}
            cout << ch;
            ch++;
        }
        // word 2
        char Ch = 'A'+i-1;
        for(int j=i; j>0; j--) {
            cout << Ch;
            Ch--;
        }

        cout<<endl;
    }

    return 0;
}