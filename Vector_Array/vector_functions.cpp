#include<iostream>
#include<vector>
using namespace std;
int main() {
    // vector < char > vec = {'a', 'b', 'c', 'd', 'e', 's'};
    // for(char val : vec) {
    //     cout << val <<endl;
    // }
    // cout << "size = " <<vec.size() <<endl;
    // cout<<endl;

    vector<int>vec;
    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    cout <<vec.size()<<endl; // 5
    cout <<vec.capacity()<<endl;  // 8

    return 0;
}