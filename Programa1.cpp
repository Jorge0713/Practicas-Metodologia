#include <iostream>
using namespace std;
int main()
{
    int opcion;
    while (opcion != 0)
    {
        cout << "====Menu====" << endl;
        cout << "1) Torta" << endl;
        cout << "2) Palomitas" << endl;
        cout << "3) Agua" << endl;
        cout << "Seleccione el producto: ";
        cin >> opcion;
        if (opcion == 1)
        {
            cout << "Torta:$35\n";
        }
        else if (opcion == 2)
        {
            cout << "Palomitas:$10\n";
        }
        else
        {
            cout << "Agua:$25\n";
        }
    }

    return 0;
}