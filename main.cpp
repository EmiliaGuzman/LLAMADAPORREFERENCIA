#include <iostream>

using namespace std;

int squareByValue(int);
void squareByReference(int &);

int main()
{
    int x=2, z=4;

    cout << "x = " << x << " antes de squareByValue\n"
        << "valor devuelto por squareByValue: "
        << squareByValue(x) << endl
        << "x = " << x << " despues de squareByValue\n" << endl;

    cout << "z = " << z << " antes de squareByReference" << endl;
    squareByReference(z);
    cout << "z = " << z << " despues de squareByReference" << endl;

    return 0;
}

int squareByValue(int a)
{
    return a *=a;///EL ARGUMENTO DEL INVOCADOR NO SE MODIFICA
}

void squareByReference (int &cRef)
{
    cRef *= cRef;///EL ARGUMENTO DEL INVOCADOR SE MODIFICA
}
