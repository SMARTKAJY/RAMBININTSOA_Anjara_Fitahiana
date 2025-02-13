#include <iostream>

using namespace std;


int main () {
    int random_number,user_number,min,max;
    srand(time(0));

    max = 100, min = 1;

    random_number = (rand() % (max - min + 1)) + min;

    do
    {
        cout << "Deviner le nombre mystere entre "<< min << " et " << max << " : "; 
        cin >> user_number;

        if (user_number < random_number)
        {
            cout << "Trop petit !" << endl;
        }
        else if (user_number > random_number)
        {
            cout << "Trop grand !" << endl;
        }
        else
        {
            break;
        }

    } while (user_number != random_number);

    cout << "Félicitations, vous avez deviné le nombre !" << endl;

    return 0;
}