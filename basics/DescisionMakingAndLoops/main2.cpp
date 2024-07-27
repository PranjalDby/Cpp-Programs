#include <iostream>
#include<iomanip>
using namespace std;

// LOOPS in CPP
int main()
{
    // For-Loop
    // Type-1:without conditonal expr:Note u need to add conditional checking code in body of for-loop,otherwise it becomes a wild infinite for loop.
    for (int i = 0;; i++)
    {
        if (i == 100)
        {
            break;
        }
        cout << i << endl;
    }

    // Type-2 without updation expr:Note u need to add updation expr,otherwise it becomes a wild infinite for loop.
    for (int i = 0;i<10;)
    {
        cout << i << endl;
        i++; // update expr
    }
    // Type-3 without updation expr and conditional expr :Note u need to add updation expr and conditional expr,otherwise it becomes a wild infinite for loop.
    for (int i = 10;;)
    {   
        if(i < 0){
            break;
        }
        cout << i << endl;
        i--;
    }


    // ----------- While loops ---------------------------------------------------------------------

    int i =0;
    while(i < 10){
        cout << "While Loop" << "👺x" << endl;\

        i++;
    }

    // ----------- do-while loop --------------------------------------------------------------
    int j = 0;
    int res = 0;
    do{
        cout<< "j = " <<setfill(' ') << j << endl;
        j+=1;

        do{
            cout << setw(6) << " | " << res << endl;
            res +=1;
            break;
        }while(res < 4);
    }
    while(j<10);
}