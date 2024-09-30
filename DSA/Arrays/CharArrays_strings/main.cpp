#include<iostream>
#include<vector>
#include<map>

using namespace std;
int getLength(char name[]) {
    int count = 0;
    // char *ptr = name;
    // while(*ptr != '\0') {
    //     count++;
    //     ptr++;
    // }
    for(int i = 0;name[i]!='\0';i++) {
        count++;
    }
    return count;
}
int getLengthV(vector<char>&name) {
    int count = 0;
    // char *ptr = name;
    // while(*ptr != '\0') {
    //     count++;
    //     ptr++;
    // }
    for(int i = 0;name[i]!='\0';i++) {
        count++;
    }
    return count;
}
void reverseName(char name[]) {
    int i = 0,j = getLength(name)-1;
    while(i<=j) {
        swap(name[i],name[j]);
        i++;j--;
    }
}
void reverseNameRecur(vector<char
    >&name,int i,int j) {
    if(i>j) {
        return;
    }
    //swap last time
    swap(name[i],name[j]);
    i++;j--;
    reverseNameRecur(name,i,j);
};
bool isPalindrome(string s,int i,int j) {
    if(s[i] != s[j]) {
        return false;
    }
    if(i>=j){
        return true;
    }
    if(s[i] == s[j]){
        i++;j--;
        return isPalindrome(s,i,j);
    }
    return true;
}
char toLowerCase(char ch) {
    if((ch >='a' && ch <='z') || (ch>='0' && ch <='9')) {
        return ch;
    }
    else {
        char t = ch - 'A' + 'a';
        return t;
    }
}
//best-code in T.C = O(n) and S.C = O(1)
bool isPalindromic(string str){
    int s = 0;
    int e = str.length()-1;
    cout << e << endl;
    while(s<=e){
        if(!isalnum(str[s]) ){
            s++;
        }
        else if(!isalnum(str[e])) {
            e--;
        }
        else {
            cout << "Is Alpha numeric"<< endl;
            char l1 = toLowerCase(str[s]);
            char l2 = toLowerCase(str[e]);
            if(l1 != l2){
                cout << "Not equal to";
                return false;
            }
            s++;e--;
        }
    }
    return true;
}
//Reverse Words in a string II:we have to reverse the order of words
/*
 *Words are defined as sequence of non-space characters.The Words in 's' will be seperated by a single space
 */
string reverseStr(string &s) {
    int i = 0;
    int j = s.length()-1;
    while(i<=j) {
        swap(s[i],s[j]);
        i++;j--;
    }
    cout << s << endl;
    return s;
}
int main()
{
    vector<char> ss = {'t','h','e',' ','s','k','y',' ','i','s',' ','b','l','u','e'};
    reverseNameRecur(ss,0,ss.size()-1);
    //reverse each of the words
    int l = 0;
    int r = 0;
    int spaceIndex= 0;
    while(r < ss.size()) {

        //to-track the space
        if(ss[r] != ' ') {
            //if char is not a space
            r++;
        }
        else {
            //reverse all the elements before space
            spaceIndex = r;
            r-=1;
            while(l<=r) {
                swap(ss[l],ss[r]);
                l++;r--;
            }
            r = spaceIndex+1;
            l = r;
        }
    }
    //we have to reverse the last element
    r = ss.size()-1;
    while(l<=r) {
        swap(ss[l],ss[r]);
        l++;r--;
    }

    // //does string in c++ has null terminated character
    // string companyName = "Microsoft Corporation";
    // //loop through the element until it founds the null terminated element
    // for(int i  = 0;companyName[i]!= '\0';i++) {
    //     cout << companyName[i] << " ";
    // };

    // maximum occuring character

    string st = "testsample";
    map<char,pair<int,int>>hashMap;
    int maxi= -1;
    // for(auto i:st) {
    //     hashMap[i] = {0,int(i)};
    // }
    //
    // //counting
    // for(auto i:st) {
    //     hashMap[i].first+=1;
    // }
    // for(auto i : hashMap) {
    //     cout << i.first << endl;
    //     cout << i.second.first << endl;
    // }
    //
    // //getting element with maximum ascii values
    // int mini = INT_MAX;
    // char res;
    // for(auto i : hashMap) {
    //     if(maxi < i.second.first || mini > i.second.second) {
    //         maxi = i.second.first;
    //         mini = i.second.second;
    //         res = i.first;
    //     }
    // }
    // cout << res << endl;

    //more space optimized approach
    int arr[26] = {0};//to store all the alphabetical letters
    for(auto i : arr) {
        cout << i << endl;;
    }
    for(int i =0;i<st.length();i++) {
        char ch = st[i];
        int n = 0;
        if(ch>= 'a' && ch <='z'){
            //small case letter
            n = ch - 'a';
        }
        else {
            //capital-letter case
            n = ch - 'A';
        }
        arr[n] += 1;
    }
    //getting maximum element
    int ans = -1;
    for(int i = 0;i<st.length();i++) {
        if(maxi < arr[i]) {
            maxi = arr[i];
            ans = i;
        }
    }
    char res=  'a' + ans;
    cout << res << endl;
    // ------------------------- taking input as a stream from console using c++ getline(istream&i,str,delim)-----------------------------------

    cout << "Enter your Bio:?" << endl;
    string bio;
    // cin>>bio; // this input stream terminates stream when it find the null terminator like space,tab or new line(enter)
    // cout <<"Your bio is = " << bio << endl;

    // ------------- using getline()-------------------------------- function
    /*
     *1-param tell the function where to take the input from
     *2-param is a string object which stores the input in it.
     *3-delim: by default the character is a newline character('\n') which stops the reading from the stream.
     */
    // getline(cin,bio);//without using explicit delimiter
    getline(cin,bio,',');//with using explicit delimiter
    cout << "your bio is = " << bio << endl;
    string isYour = "Python is My Language";
    const int isTrue = isYour.compare(bio); // if == 0 means they are equivalent,other than 0 means they are not equivalent
    cout << "Is Correct Bio = " << isTrue << endl;

}
