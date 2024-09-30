#include <iostream>
#include <ios>
#include <fstream>
using namespace std;

int main()
{
    // ofstream file1("country.txt", ios::out);
    // file1.open("country.txt");
    // char buffer[1025];
    // file1 << "India\n";
    // file1 << "USA\n";
    // file1 << "JAPAN\n";
    // file1 << "Korea\n";
    // file1.close();
    // ofstream file2;
    // file2.open("capital.txt");
    // file2 << "Delhi" << "\n"
    //       << "W.DC\n"
    //       << "Tokyo\n"
    //       << "SEOUL";
    // file2.close();

    // // Using open function
    // cout << "Data in country.txt:\n";
    // ifstream file3;
    // file3.open("country.txt");
    // while (!file3.eof())
    // {
    //     file3.read(buffer, 1025);
    // }
    // file3.close();
    // cout << buffer << endl;
    // cout << "Data in capital file.\n";
    // file3.open("capital.txt");
    // while (!file3.eof())
    // {
    //     file3.read(buffer, 1025);
    // }
    // cout << buffer << endl;
    // file3.close();
    // file1.open("state.txt");
    // char states[50];
    // cin.getline(states, 50);
    // file1.write(states, 50);
    // file1.close();
    // file3.open("state.txt");
    // cout << "States\n";
    // while (!file3.eof())
    // {
    //     file3.read(buffer, 1025);
    // }
    // cout << states;
    // file3.close();
    fstream file;
    file.open("myfile.txt", ios::out);
    file << "GOOD LEADER IS A KINGMAKER ";
    cout << "The current position of the pointer is: " << file.tellp();
    file.close();
    file.open("myfile.txt", ios::in);
    file.seekg(3);
    char r[3];
    file >> r;
    cout << r << endl;
    file.close();
    char buffer[] = {'x', 'y', 'z'};
    ofstream file4("myfile.txt", ofstream::binary);
    if (!file4)
    {
        cout << "Error opening file4" << endl;
    }
    else
    {
        file4.write(buffer, sizeof(buffer));
        file4.close();
    }
    ifstream file5("myfile.txt", ios::binary);
    if (!file5)
    {
        cerr << "Error opening file5" << endl;
    }
    else
    {
        file5.seekg(0, ios::end);
        long size = file5.tellg();
        file5.close();
        cout << size << endl;
    }
    return 0;
}