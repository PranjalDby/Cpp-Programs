#include<iostream>
#include<stack>
using namespace std;

int main() {
    cout << "Stacks in template library" << endl;
    /*
     *stack is a container adapter that gives the programmer the functionality of a stack - specifically, a LIFO (last-in, first-out) data structure.
     */

    stack<string>st;
    st.push("Pranjal"s);
    st.push("Is"s);
    st.push("Good"s);

    cout << "Top element = " << st.top() << endl;
    //removing top most element
    st.pop();
    cout << "Top element after pop = " << st.top() << endl;
    cout << "Size of stack = " << st.size() << endl;
    cout << "Is stack empty? " << st.empty() << endl;
}
