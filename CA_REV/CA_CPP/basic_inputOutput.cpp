#include <stdio.h>
#include <iostream>

using namespace std;

/**
 * @file basic_inputOutput.cpp
 * @brief This program demonstrates the use of cin.getline() to input strings with spaces.
 *
 * The program prompts the user to enter their name and address, which can include spaces.
 * It then outputs the entered name and address.
 *
 * Standard Input Stream Functions:
 * - std::cin.getline(char* buffer, std::streamsize count): Reads characters from the input stream into the buffer until count-1 characters are read or a newline character is encountered.
 * - std::cin >> var: Extracts formatted input from the input stream and stores it in the variable var.
 * - std::cin.get(char& ch): Reads a single character from the input stream and stores it in ch.
 * - std::cin.ignore(std::streamsize n = 1, int delim = EOF): Ignores characters in the input stream until n characters are ignored or the delimiter delim is encountered.
 * - std::cin.peek(): Returns the next character in the input stream without extracting it.
 * - std::cin.putback(char ch): Puts the character ch back into the input stream.
 * - std::cin.read(char* buffer, std::streamsize count): Reads count characters from the input stream into the buffer.
 * - std::cin.gcount(): Returns the number of characters extracted by the last unformatted input operation.
 * - std::cin.sync(): Discards unread characters from the input buffer.
 * - std::cin.eof(): Checks if the end of the input stream has been reached.
 * - std::cin.fail(): Checks if the last input operation failed.
 * - std::cin.clear(): Clears the error state of the input stream.
 */
int main()
{
    // cin.getline() to input the strings with spaces.
    char name[50];
    char address[100];

    cout << "Enter your name: ";
    cin.getline(name, 50);

    cout << "Enter your address: ";
    cin.getline(address, 100);

    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
}