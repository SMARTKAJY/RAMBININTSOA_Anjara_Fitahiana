#include <iostream>

using namespace std;

int main() {

    int age;

    cout << "Entrer votre age : ";
    cin >> age;

    if (age < 18) {
        cout << "Zazakely tss..." << endl;
    }
    else if (age <= 60) {
        cout << "Vous etes adulte." << endl;
    }
    else
    {
        cout << "Vous etes senior" << endl;
    }

    return 0;
}