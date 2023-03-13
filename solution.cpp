#include <iostream>

using namespace std ;

int main ()
{
    float a ;
    cin >> a ;
    if(a >= 3.6 && a <=4 )
    {
        cout << "xuat sac" ;
    }
    else if(a >= 3.2 && a < 3.6)
    {
        cout << "kha" ;
    }
    else if(a >= 2.6 && a < 3.2)
    {
        cout << "kha" ;
    }
     else if(a >= 2 && a < 2.6)
    {
        cout << "trung binh" ;
    }
    else if(a < 2 && a >= 0 )
    {
        cout << "yeu" ;
    }
    else
    {
        cout << "nhap lai so diem" ;
    }
return 0 ;
}