#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName, course, birthday, motto;

    // Input section
    cout << "Enter Full Name: ";
    getline(cin, fullName);

    cout << "Enter Course, Yr. & Sec.: ";
    getline(cin, course);

    cout << "Enter Birthday: ";
    getline(cin, birthday);

    cout << "Enter Motto/Motivation in Life: ";
    getline(cin, motto);

    // Output section
    cout << "\nHi! I'm " << fullName << " of " << course 
         << ". Welcome to Data Structures and Algorithm!" << endl;

    cout << "My Birthday is on " << birthday 
         << " and my motto/motivation in life is " << motto << endl;

    return 0;
}

// DONE