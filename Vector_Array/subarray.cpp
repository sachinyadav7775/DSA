#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main() {
    int n = 6;
    int arr[] = {1, 2, 3, 4, 5, 6};
    for(int st=0; st<n; st++) {
        for(int end=st; end<n; end++) {
            for(int i=st; i<=end; i++) {
                cout << arr[i];
            }
            cout << " ";
        }
        cout<<endl;
    }

    // Maximum Subarray Sum [ Brute Force Approach ]
    int N = 7;
    int Arr[] = {1, -2, 3, -4, 5, 6, -8};
    int maxSum = INT_MIN;
    for(int st=0; st<N; st++) {
        int currSum = 0;
        for(int end=st; end<N; end++) {
            currSum += Arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "max subarray sum = "<< maxSum << endl;

    // Maximum Subarray Sum [ Kadane's Algorithm ]
    int m = 8;
    int ARR[] = {1, -2, 3, 7, 4, 5, 6, -8};
    int MaxSum = INT_MIN;
    int currsum = 0;
    for(int i=0; i<m; i++) {
        currsum += ARR[i];
        MaxSum = max(currsum,MaxSum);
        if(currsum < 0) {
            currsum = 0;
        }
    }
    cout << "max subarray sum = "<< MaxSum << endl;

    return 0;
}