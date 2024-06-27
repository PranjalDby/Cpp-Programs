#include<iostream>
#include <vector>

//! introduction to "constexpr"
using namespace std;

constexpr double PI = 3.141593;
constexpr int product(int x, int b) {return x * b;};//! constexpr function

constexpr double ConvertDegreeToRadian(const double& dDgree) {
    
    return dDgree * (PI / 180);

}
constexpr long int fib(int n) {
    if(n<=1) 
        return n;

    return fib(n-1) + fib(n-2);
}
//! ---------------------------------- constexpr with constructors -------------------------------
class Rectangle {
    int width, height;
    public:
    constexpr Rectangle(int w, int h): width(w), height(h) {}
    constexpr int getArea() const {return width * height;}
};
int main(){
    constexpr int res = product(10,30); //! constexpr variable
    cout << res << endl;
    //! computing size of an array at compile time.
    int arr[product(2,3)] = {1,2,3,4,5,6}; 
    constexpr int arrSize = sizeof(arr) / sizeof(arr[0]);
    cout << "Size of array: " << arrSize << endl;
    for(int i = 0;i<arrSize;++i){
        cout << arr[i] << " ";
    }
    
    cout << endl;
    // Another example to convert the unit from one system to another
	auto radian = ConvertDegreeToRadian(90.0);
	cout << "Radian: " << radian << endl;
	//Example of performance improvement

    vector<int>dp(51, -1);	
    constexpr long int ans = fib(10);
    cout << "Fibonacci number: " << ans << endl;

    constexpr Rectangle r(10, 20);
    cout << "Area of rectangle: " << r.getArea() << endl;

	cout << "adding changes to the file to check the git diff command\n";
    //hwejklbfiwdiosdhnfilasdhdhlhilf
    return 0;
}