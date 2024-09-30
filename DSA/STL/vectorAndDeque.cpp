#include<iostream>
#include<array>
#include<vector>
#include<deque>
using namespace std;
int main(){
     // array is a static contiguous container built on top of C-style array
     // array is a template class
     // array is a fixed size container

     int basics[4] = {1,2,3,4}; // c-style array
     array<int,4> arr = {9,20,10,45};

     //operations
     for(auto i : arr) {
          printf("element = [%d]\n",i);
     }

     cout << arr.size() << endl;
     cout << "first element = " << arr.front() << " last Element = " << arr.back() << endl;

     //vector is a dynamic array and it create a new array if the size is full and copy the elements to the new array.
     vector<int>v1 = {100,23,33,-1,2};
     cout << "Vector Size = " << v1.size() << endl;
     cout << "Vector Capacity = " << v1.capacity() << endl;
     v1.push_back(-101);
     cout << "Vector Size = " << v1.size() << endl;
     //capacity is the space assigned for elements
     cout << "Vector Capacity = " << v1.capacity() << endl;

     //pop_back()

     cout << "before pop" << endl;
     for(int i:v1) {
          cout << i<< endl;
     }
     cout << "After pop" << endl;
     v1.pop_back();
     for(int i:v1) {
          cout << i<< endl;
     }
     //clear() operation:only size of vector gets zero but capacity remains same
     cout << "Size before clear = " << v1.size()  << " Capacity = " << v1.capacity() << endl;
     v1.clear();
     cout << "Size after clear = " << v1.size() << " Capacity = " << v1.capacity() << endl;

     //vector with initial element and size

     vector<int>v2(5,1);
     cout << v2[1] << endl;

     //copying one vector into another
     vector<int>last(v2);
     // for(int i: v2){cout << i <<endl;}

     cout<<"---------------------------------- dequeue ------------------------------------------------" << endl;
     //de-queue or double ended queue(FIFO)
     deque<int> dq;
     dq.push_back(1);//insert element at the end of the queue
     dq.push_front(20);//insert element at the front of the queue
     // for(auto i:dq) {
     //      cout << i << endl;
     // }
     // dq.pop_front();
     // for(auto i:dq) {
     //      cout << i << endl;
     // }

     cout << "first element = " << dq.at(0) << endl;
     cout << "Before Erasing size = " << dq.size() << endl;
     dq.erase(dq.begin(),dq.begin()+1);
     cout << "After Erasing size = " << dq.size() << endl;


}