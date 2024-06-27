#include<iostream>

using namespace std;
int main(){
    // if statements

    // int a;
    // cin >> a; //cin doesn't read " ","/t",

    // //if a is positive
    // if(a == 9){
    //     cout << "Niney";
    // }
    // if(a > 0){
    //     cout << "A is +ve" << endl;
    // }
    // else{
    //     cout  << "Negative";
    // }

    // int b = a+1;
    // if((a=3)==b){
    //     cout <<a;
    // }
    // else{
    //     cout << "incremenented a"<< a+1;
    // }

    // input character

    char c;
    // c = cin.get();
    if(c != ' ' || c != '\n' || c != '\t'){
        int castedC = static_cast<int>(c);
        cout << castedC << endl;
        if(castedC >= 65 && castedC <=90){
            // capital-letters
            cout << c << " lies in b/w A-Z" << endl;
        }
        else if(castedC >= 97 && castedC <= 122){
            cout << c << " lies in b/w a-z" << endl;
        }
        else if(castedC >= 48 && castedC <= 57){
            cout << c << " lies in b/w 0-9" << endl;
        }

    }else{
        cout << "Invalid Character" << endl;
    }


    // while loop
    long long int n = 1;
    // cout << "printing the sum of elements from 1 to 1000" << endl;

    // long long int sum = 0;
    // while (n <= 1000000000)
    // {   
    //     sum += n;
    //     n+=1;
    // }
    
    long long int directSum = (10/2) * ((2 * 1) + (10-1) * 1); // using Ap's sum of 'n' terms
    cout << "Direct Sum = " << directSum << endl; 
    // cout << "sum = " << sum << endl;

    int input;
    // cin >> input;
    int i = 0;
    int sum = 0;
    while (i <= input)
    {
        if(i % 2 == 0){
            sum += i;
        }
        i+=1;
    }
    
    cout << "Sum of all even = " << sum << endl;

    cout << "Fahrenheit to Celsius Table " << endl;

    float fahrenheit = -47.2f;
    float celsius = 0.0f;

    // while (fahrenheit <= 109.4f)
    // {
    //     celsius = ((fahrenheit - 32) * 5)/9;
    //     printf("°F = %1.2f || °C = %1.2f\n",fahrenheit,celsius);
    //     fahrenheit += 2.8f;
    // }

    int a = 0;
    int b = 1;
    cin >> n;
    
    while (a * b > n)
    {
        if (a * b == n && a != 1){
            cout << n << " is a composite number";
            break;
        }
        a+=1;
        b+=1;
    }
    
    
}