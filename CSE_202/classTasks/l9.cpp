#include <iostream>
using namespace std;

int main()
{
    string s1{"12345"};
    string s2{"abcde"};
    cout << "after appending the string = " << endl;
    s1.append("7689");
    cout << s1 << endl;
    s1.append(s2, 1, 2);
    s1.replace(3, 2, "WRT");
    cout << s1 << endl;
    s1.erase(2, 3); // removeing three characters from index 2;
    cout << s1;

    // write a program to ask user to enter a value of string s1 variable Lovely Professional University,
    //  s2 value `welcome` and perform the following ops:concat,insert s2 in s1 after lovely.
    // replace s1 value professional with s2 and then concat s1 and s2;

    string str1 = "Lovely Professional University";
    // cin >> str1;
    string str2 = "Welcome";
    // concat
    cout << endl;
    string s3 = str1 + str2;
    // cout << s3 << endl;
    for (int i = 0; i < str2.size(); i++)
    {
        str1.insert(7 + i, 1, str2[i]);
    }
    cout << str1 << endl;
    int start = -1;
    string find = "Professional";
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1.substr(i, find.size()) == find)
        {
            start = i;
            break;
        }
    }
    cout << "Index = " << str1.substr(14, find.size()) << endl;
    return 0;
}