#include<iostream>
#include<queue>
using namespace std;

int main() {
    cout << "Priority Queue" << endl;
    // priority_queue is a data structure in STL in C++ which is implemented using a vector data structure.
    // It is a max heap by default.root element is the maximum element in the heap.
    priority_queue<int>maxi;
    //min heap
    priority_queue<int, vector<int>, greater<int>>mini;
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);
    // while(!maxi.empty()){
    //     cout << maxi.top() << " ";
    //     maxi.pop();
    // }
    mini.push(10);
    mini.push(-2);
    mini.push(3);
    mini.push(4);
    while(!mini.empty()){
        cout << mini.top() << " ";
        mini.pop();
    }
}
