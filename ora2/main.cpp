#include <iostream>

using namespace std;

int main()
{
    cout << (6 == 7) << endl;
    cout << (true || false) << endl;
    cout << (true && false) << endl;

    // Bit múveletek
    //             &   |   ^       <<             >>
    // bitenkénti és vagy XOR eltolás_balra eltolás_jobba
    int a = 60;
    int b = 13;
    cout << (a & b) << endl;
    cout << (a << 2) << endl;

    // értékadó operátorok
    //= += -= *= /= %= <<= >>= &= ^= |=
    a = 10;
    a += 5; // 15
    a -= 5; // 10
    a *= 5; // 50
    a /= 5; // 10
    a %= 5; // 2
    // a <<= 5 ==== a = a << 5

    char s[] = "Hello world";
    string str = "szia";
    cout << str << endl;

    int num = 10;
    double d;
    d = num;
    d += 10.1;
    cout << d << endl;

    double d_num = 10.99999999;
    int int_num;
    int_num = d_num;
    cout << int_num << endl;

    float f = 10.1;
    int_num = f;
    cout << int_num << endl;

    // explicit típuskonverzió

    int z = 20;
    double zs;
    zs = double(z);
    cout << zs << endl;

    if (20 > 10)
    {
        cout << "igaz" << endl;
    }

    int cif = 10 > 9 ? 1 : 0;
    cout << cif << endl;

    int x1 = 9;
    int y1 = 10;
    string eredmeny;

    eredmeny = (x1 == y1) ? "egyenló" : ((x1 > y1) ? "nagyobb"
                                                  : "kisebb");
    cout << eredmeny << endl;

    int nap = 6;
    string nap_nev = "";
    switch (nap)
    {
    case 1:
        nap_nev = "Hétfő";
        break;
    case 2:
        nap_nev = "Kedd";
        break;
    case 3:
        nap_nev = "Szerda";
        break;
    case 4:
        nap_nev = "Csütörtök";
        break;
    case 5:
        nap_nev = "Péntek";
        break;
    case 6:
        nap_nev = "Szombat";
        break;
    case 7:
        nap_nev = "Vasárnap";
        break;
    default:
        cout << "túl nagy a szám";
        break;
    }
    cout << nap_nev << endl;

    
}