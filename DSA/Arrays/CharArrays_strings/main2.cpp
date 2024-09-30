#include <iostream>
#include <vector>
using namespace std;

string solve(string s, string part)
{
    while(s.length()!=0 && s.find(part) < s.length()) {
        s.erase(s.find(part),part.length());
    }
    return s;
}
int solve2(pmr::vector<char>&ch) {
    if(ch.size() == 1) {
        return ch.size();
    }
    string s = "";
    char current ;
    int count;
    for(int i = 0;i<ch.size()-1;i++) {
        current = ch[i];
        count = 1;
        //count the repetions
        while (current == ch[i+1]) {
            count++;
            i++;
        }
        //append the answer to the str
        s += current;
        if(count > 1) {
            s += to_string(count); // appenfing count to the string if it is a group

        }
    }
    ch.clear(); // clearing the ch to put the updated ans
    for(auto i:s) {
        ch.push_back(i);
    }
    return ch.size();
}
int main()
{
    string ss = "Coding Ninja is Great";
    for (int i = 0; i < ss.length(); i++)
    {
        if (ss[i] == ' ')
        {
            ss.replace(i, 1, "@40");
        }
    }
    cout << ss << endl;

    // Remove All Occurrences of a Substring
    // Medium
    //     Topics
    //         Companies
    //             Hint
    //                 Given two strings s and part,
    //     perform the following operation on s until all occurrences of the substring part are removed :

    //     Find the leftmost occurrence of the substring part and remove it from s.Return s after removing all occurrences of part.

    //     A substring is a contiguous sequence of characters in a string.
    string str = "daabcbaabcbc", part = "abc";
    cout << solve(str, part) << endl;

    // -------------------- implementation of find ----------------------------------------------------
    string hayStack("There are Two needles in this haystack. In needles");
    string needle("needles");

    int found = hayStack.find(needle);//postion of the first occurance from the left of the string.
    cout << found << endl;
    //second needle
    cout << "Position of second needle in haystack = " << hayStack.find(needle,found+1);


    // group length

    pmr::vector<char>chars = {'a','a','b','b','c','c'};
    solve2(chars);

}
