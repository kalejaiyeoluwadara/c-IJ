#include <stdio.h>
using namespace std;
double Sl(double bs)
{
    double TA, PA, Tax, Gp, Np;
    bs = 200000;
    TA = 50000;
    PA = 100000;
    Gp = bs + TA + PA;
    Tax = 0.1 * Gp;
    Np = Gp - Tax;
    cout << "\n\nSenior Lecturer salary\n";
    cout << "Bs  = " << bs << endl;
    cout << "Gp  = " << Gp << endl;
    cout << "Np  = " << Np << endl;
    return (Np,Gp);
}
