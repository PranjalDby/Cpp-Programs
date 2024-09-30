#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // ofstream for writting the data from program to external file.
    ofstream file1 = ofstream("file1_lpu.txt"); // by defualt it is in write mode.
    file1 << "Hello 😊 Pranjal";
    cout << "File created Successfully" << endl;
    cout << "We writted into the file:\n";
    file1.close();
    cout << "opening the file for reading:\n";
    ifstream read_f1 = ifstream("file1_lpu.txt");
    char buffer[1024];
    read_f1.read(buffer, 1024); // reading file content into buffer
    read_f1.close();
    cout << buffer << endl;

    cout << "********************** FILE CREATION *****************************************************\n";
    string fileName;
    std::getline(cin, fileName);
    ofstream file = ofstream(fileName);
    char name[50], city[50];
    int roll;
    double cgpa;
    cout << "Enter your Name: " << "\n"
         << "Roll No: " << "\n"
         << "CGPA" << "\n"
         << "City: " << endl;

    cin.getline(name, 50);
    cin >> roll >> cgpa;
    cin.getline(city, 50);
    file << name << "\n"
         << roll << "\n"
         << cgpa << "\n"
         << city;
    file.close();

    cout << "What is In ." << endl;
    ifstream out = ifstream(fileName);
    out >> name >> roll >> cgpa >> city;
    out.close();
    cout << "Name: " << name << "\n"
         << "CGPA: " << cgpa << "\n"
         << "Roll No: " << roll << "\n"
                                   "City: "
         << city << endl;

    // write a program to ask user: name,roll,cgpa and city and store this data in a file, the display a message that your info is saved successfully. and then display that information to user.
    return 0;
}