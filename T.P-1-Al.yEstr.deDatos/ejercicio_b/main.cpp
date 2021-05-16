#include <iostream>

using namespace std;

int main()
{
    float m1, m2, b1;
    float b2, y, x;
    cout << "Ingrese pendiente 1" << endl;
    cin >> m1;
    cout << "Ingrese pendiente 2" << endl;
    cin >> m2;
    cout << "Ingrese ordenada 1" << endl;
    cin >> b1;
    cout << "Ingrese ordenada 2" << endl;
    cin >> b2;

    if (m1=m2)
    {
        if (b1=b2)
         {
             cout << "Rectas iguales" << endl;
         }
          else
            {
                cout << "Rectas paralelas" << endl;
            }
    }
    else
    {
        x = ((b1-b2)/(m1-m2));
        y = (m1* x + b1);
    }
       cout << "x valdria:" << x << endl;
       cout << "y valdria:" << y << endl;

    return 0;
}
