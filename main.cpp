#include <iostream>
#include "Par.h"

using namespace std; <iostream>
#include "20141020cab.h"

using namespace std;
using namespace std;

int main()
{
    cout << "Clase PAR" << endl;
    Par P1;
    P1.ver();
    P1.SetPar(2,3);
    P1.ver();

    Par R;
    R.SetPar(5,6);
    R.ver();

    cout << "Par x : " << P1.GetParX() << endl;
    cout << "Par y : " << P1.GetParY() << endl;

    return 0;
}
