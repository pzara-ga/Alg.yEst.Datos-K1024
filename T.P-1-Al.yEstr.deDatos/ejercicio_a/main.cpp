#include <iostream>

using namespace std;

int main()
{
   float Vkmhr;
   float Vmtsseg;

   cout << " Ingrese velocidad " << endl;
   cin >> Vkmhr;
     Vmtsseg = (Vkmhr* 10/36);
   cout << " la velocidad en m/s es " << Vmtsseg << endl;

    return 0;
}





