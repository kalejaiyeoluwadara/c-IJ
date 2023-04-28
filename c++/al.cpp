#include <stdio.h>
using namespace std;
void Al()
{
    double bs, TA, PA, Tax, Gp, Np;
    bs = 200000;
    TA = 100000;
    PA = 200000;
    Gp = bs + TA + PA;
    Tax = 0.1 * Gp;
    Np = Gp - Tax;
    cout << "Assistant Lecturer salary\n";
    cout << "Bs  = " << bs << endl;
    cout << "Gp  = " << Gp << endl;
    cout << "Np  = " << Np << endl;
}