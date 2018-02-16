//Miko³aj Brycki
#include <iostream>
#include <math.h>
double sin( double );
double cos( double );
double tan( double );
double stopien;
double radian;
double x;
using namespace std;

int main()
{
    cout<< "Jesli chcesz sinusa wpisz 1"<<endl;
    cout<< "Jesli chcesz cosinusa wpisz 2"<<endl;
    cout<< "Jesli chcesz tangensa wpisz 3"<<endl;
    cout<< "Wpisz liczbe 1,2 lub 3: ";
    cin>>x;
    cout<< ""<<endl;
    cout<< "Podaj kat: ";
    cin>>stopien;
    if(x==1)
    {
       double radian =( stopien * M_PI ) / 180.0f;
    cout<< ""<<endl;
    cout << "sin(" << stopien << ")=" << sin( radian ) << endl;
    }
    if(x==2)
    {
         double radian =( stopien * M_PI ) / 180.0f;
    cout<< ""<<endl;
    cout << "cos(" << stopien << ")=" << cos( radian ) << endl;
    }
    if(x==3)
    {
        double radian =( stopien * M_PI ) / 180.0f;
    cout<< ""<<endl;
    cout << "tan(" << stopien << ")=" << tan( radian ) << endl;
    }
    return 0;
}
