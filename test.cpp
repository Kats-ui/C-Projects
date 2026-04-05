#include <iostream>
using namespace std;

int main() {
    
    string firstName, lastName, fullName;

    cout << "Whats your first name? " << endl;
    cin >> firstName;
    cout << "Whats your last name? " << endl;
    cin >> lastName;

    fullName = firstName + " " + lastName;
    cout << "Your full name is " << fullName << " " << endl;

    return 0;
}