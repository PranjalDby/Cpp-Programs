#include<iostream>
#include<list>

using namespace std;

int main() {
    cout << "List in STL" << endl;
    /*
    * A list in the C++ Standard Template Library (STL) is a sequence container that allows non-contiguous memory allocation. It is implemented as a doubly linked list, which means that each element in the list contains pointers to the next and previous elements. This allows for efficient insertion and deletion of elements at both ends and in the middle of the list.
    Key Characteristics of list:
    Doubly-Linked list
    Dynamic Size: The size of the list can grow or shrink dynamically.
    Bidirectional Iteration: Supports bidirectional iteration.
    Efficient Insertions/Deletions: Insertions and deletions are efficient, especially in the middle of the list.
    Non-Contiguous Storage: Elements are not stored in contiguous memory locations.
    Common Operations:
    push_back(): Adds an element to the end of the list.
    push_front(): Adds an element to the front of the list.
    pop_back(): Removes the last element of the list.
    pop_front(): Removes the first element of the list.
    insert(): Inserts elements at a specified position.
    erase(): Removes elements from a specified position.
    size(): Returns the number of elements in the list.
    clear(): Removes all elements from the list.
     */

    list<int>ll;
    ll.push_back(20);
    ll.push_front(100);
    for(int i:ll) {
        cout <<i << " ";
    }
    cout << "\n" ;
    cout << "size of list = " << ll.size() << endl;

    //copying into new list
    list<int>n(ll);
}
