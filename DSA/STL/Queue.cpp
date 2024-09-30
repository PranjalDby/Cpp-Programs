#include<iostream>
#include<queue>
using namespace std;

int main() {
    cout << "Queue" << endl;
    // queue is a FIFO data structure and a adapter class in STL in C++ which is implemented using a deque data structure.
    queue<const char *>qu;
    qu.push("Pranjal");
    qu.push("Dubey");
    qu.push("Hello");
    cout << "Front: " << qu.front() << endl;
    cout << "Back: " << qu.back() << endl;

    cout << "Removing elements from queue" << endl;
    qu.pop();
    cout << "Front: " << qu.front() << endl;
}
