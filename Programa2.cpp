#include <iostream>
using namespace std;
int main()
{
    int opcion;
    while (opcion != 0)
    {
        cout << "====Menu==== " << endl;
        cout << "1) Torta " << endl;
        cout << "2) Palomitas " << endl;
        cout << "3) Agua " << endl;
        cout << "Seleccione el producto: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Torta:$35\n";
            break;
        case 2:
            cout << "Palomitas:$10\n";
            break;
        case 3:
            cout << "Agua:$25\n";
            break;
        default:
            break;
        }
    }

    return 0;
}