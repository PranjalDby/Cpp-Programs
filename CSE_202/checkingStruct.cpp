#include <iomanip>
#include<iostream>
using namespace std;

union AccountData{
    struct {
        int accountNumber;
        double balance;
        char name[50];
    }data;
};
int main() {
    // int n;
    // cin >> n;
    //
    // //count numbers;
    // int count = 0;
    // int temp = n;
    // while(temp!=0){
    //     count++;
    //     temp/=10;
    // }
    // int arr[10];
    // std::fill_n(arr,10,0);
    // cout << count << endl;
    // temp = n;
    // int kk = count;
    // while(kk != 0) {
    //     int r = temp % 10;
    //     arr[r] += 1;
    //     temp /= 10;
    //     kk --;
    // }
    //
    // for(int i = 0;i<std::size(arr);i++){
    //     if(arr[i] != 0){
    //         cout << "Digit " << i << ":" << setw(2) << arr[i] << " times" << endl;
    //     }
    // ]

    AccountData account_data;
}
