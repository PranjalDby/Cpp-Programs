#include <iostream>
#include <sstream>
#include <string>
#include <limits>
#include <cassert>
using namespace std;

void test_main()
{
    // Redirect cin and cout to string streams for testing
    stringstream input, output;
    streambuf *cinbuf = cin.rdbuf();
    streambuf *coutbuf = cout.rdbuf();
    cin.rdbuf(input.rdbuf());
    cout.rdbuf(output.rdbuf());

    // Test case 1: Normal input
    input.str("John Doe\n25\nHello world\n");
    main();
    string expected_output = "Enter your Name: \nName = 0\n\nCity = \nReading the input stream using cin.read(): \nEnter Your Age: Your age = 25 Your Name = Hello world\n11\n2\n2";
    assert(output.str() == expected_output);

    // Test case 2: Input with multiple spaces
    input.str("Jane Doe\n30\nThis is a test\n");
    output.str("");
    main();
    expected_output = "Enter your Name: \nName = 0\n\nCity = \nReading the input stream using cin.read(): \nEnter Your Age: Your age = 30 Your Name = This is a test\n14\n3\n3";
    assert(output.str() == expected_output);

    // Test case 3: Empty input
    input.str("\n0\n\n");
    output.str("");
    main();
    expected_output = "Enter your Name: \nName = 0\n\nCity = \nReading the input stream using cin.read(): \nEnter Your Age: Your age = 0 Your Name = \n0\n0\n0";
    assert(output.str() == expected_output);

    // Restore original cin and cout
    cin.rdbuf(cinbuf);
    cout.rdbuf(coutbuf);

    cout << "All tests passed!" << endl;
}

int main()
{
    test_main();
    return 0;
}