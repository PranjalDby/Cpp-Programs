#include<iostream>
#include<istream>
#include <iomanip>
#include<exception>
using namespace std;

void printSumN(int n){
    int sums = 0;
    int i = 0;
    int percent = 0;
    cout << "Processing......"<<  endl;
    target:
        percent = (i/10) * 100;
        cout << percent <<" %" << endl;
        i++;
        if(i<=n){
            sums += i;
            goto target;
        }

    cout << "Sum = " << sums << endl;


}
int main(){

    // conditional-statements
    int age;
    cout << "Enter your age: " << endl;
    cin>> ws >> age;
    cout << "Your Age" << setw(6) << age << endl;

    // if-else statement

    if(age > 10 && age < 18){
        cout << "You're a child.🧒🏿" << endl;
    }
    else{
        cout << "I don't programmed yet. 🙊" << endl;
    }

    //nested-if

    if(age>2){
        //if you're in b/w 5-10.
        if(age >= 5 && age <=10){
            cout << "did you get you'r polio drops.💉" << endl;
        }
        else{
            cout<<"continuing to next section." << endl;
        }
    }

    //if-else if-else ladder

    if(age == 18){
        cout <<"You're a teenager. 👦🏻" << endl;
    }
    else if(age > 18 && age < 30){
        cout << "So you're a grown Young Man. 👨🏻" << endl;
    }
    else if(age >= 30 && age < 45){
        cout << "Do You Married Man. How Many kids Do you Have.😊 🧔🏻‍♂️" <<endl;
    }
    else{
        cout << "Do you get Your Checkup?. 🤔" << endl;
    }

    // goto-statement

    // int i = 0;
    // int res = 0;

    // while(i<=10){
    //     if(i==5){
    //         goto e;
    //     }
    //     cout << "Continuing Loop" <<endl;
    //     res += i;
    //     i+=1;
    // }

    // e:
    //     cout << "Answer = "<<res <<endl;

    // Example sum of ten numbers using goto statement
    printSumN(10);
}
