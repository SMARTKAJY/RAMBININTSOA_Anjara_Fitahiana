#include <iostream>
using namespace std;


int hypothenuse(int a, int b, int c);
void rectangleCheck(int a,int b,int c);

int main() {

    int a,b,c;

    cout << "Saisir les 3 longueurs des cotes d'un triangle" << endl;
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << "c : ";
    cin >> c;


    if ((a+b>c) && (a+c>b) && (b+c>a))
    {
        if ((a==b) && (b==c))
        {
            cout << "C'est un triangle equilateral" << endl;
        }
        else if ((a == b)|| (a == c) || (b == c))
        {
            cout << "C'est un triangle isocele" << endl;
        }
        else
        {
            cout << "C'est un triangle scalene" << endl;
        }

        rectangleCheck(a,b,c);
        
        
    }
    else
    {
        cout << "On ne peut pas construire un triangle avec ces cotes" << endl;
    }
    
    
    return 0;
}



int hypothenuse(int a, int b, int c) {
    int hypothenuse = a;
    
    if (hypothenuse < b)
    {
        hypothenuse = b;
    }
    if (hypothenuse < c)
    {
        hypothenuse = c;
    }
    
    return hypothenuse;
}

void rectangleCheck(int a,int b,int c) {
    int hyp, cote1, cote2;
    hyp = hypothenuse(a,b,c);

    if (hyp == a)
    {
        cote1 = b;
        cote2 = c;
    }
    else if (hyp == b)
    {
        cote1 = a;
        cote2 = c;
    }
    else
    {
        cote1 = a;
        cote2 = b;
    }

    if (hyp * hyp == cote1 * cote1 + cote2 * cote2)
    {
        cout << "C'est un triangle rectangle" << endl;
    }
    else
    {
        cout << "Ce n'est pas un triangle rectangle" << endl;
    }
        
}


