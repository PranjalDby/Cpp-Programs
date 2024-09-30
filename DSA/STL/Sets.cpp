#include<iostream>
#include<set>
using namespace std;

int main() {
    cout << "Sets" << endl;
    //sets are a type of associative containers in which each element has to be unique.and the elements are inserted in a sorted order.
    //set is implemented using a balanced binary search tree or AVL trees.
    //immutable data structure
    set<int>s;
    s.insert(5);
    s.insert(1);
    s.insert(3);
    s.insert(-1);
    s.insert(0);

    for(int i:s) {
        cout << i << " ";
    }
}
