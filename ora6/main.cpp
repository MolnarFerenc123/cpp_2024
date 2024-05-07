#include <iostream>
#include <vector>

using namespace std;

int test()
{
    return 0;
}
int test(int a)
{
    return 1;
}
float test(double a)
{
    return 2;
}
int test(int a, double d)
{
    return 3;
}
/*int test(int b){
    return 4;
}*/
// nem jó, már létezik
/*double test(int b){
    return 5;
}*/
// még mindig nem jó

float absolute(float var)
{
    if (var < 0.0)
    {
        var *= -1;
    }
    return var;
}
int absolute(int var)
{
    if (var < 0.0)
    {
        var *= -1;
    }
    return var;
}

void kiir(int var)
{
    cout << "Integer: " << var << endl;
}
void kiir(double var)
{
    cout << "Double: " << var << endl;
}
void kiir(int var, double var2)
{
    cout << "Integer: " << var << endl;
    cout << "Double: " << var2 << endl;
}

void operator<<(vector<double> &v, double d)
{
    v.push_back(d);
}
vector<int> operator+(vector<int> v1, vector<int> v2)
{
    vector<int> res = {};
    for (int i : v1)
    {
        res.push_back(i);
    }
    for (int i : v2)
    {
        res.push_back(i);
    }
    return res;
}

vector<int>& operator<<(vector<int> &v, int x)
{
    v.push_back(x);
    return v;
}

void operator ++(vector<int> v){
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;
}
vector<int>& operator --(vector<int> &v){
    for(int& i : v){
        cout << --i << " ";
    }
    cout << endl;
    return v;
}

struct szemely{
    string nev;
    int kor;
};

ostream& operator << (ostream&, szemely sz){
    cout << sz.nev << " " << sz.kor << " éves.";
}

// túlterhelés, overload: azonos nevű függvények, eltérő paraméterekkel
int main()
{
    cout << test() << endl;
    cout << test(1) << endl;
    cout << test(1.2) << endl;
    cout << test(1, 2.3) << endl;
    kiir(1);
    kiir(1.2);
    kiir(1, 1.2);

    vector<double> vd = {0, 1, 2.2};
    vd.push_back(3.3);

    vd << 4.4;

    for (double d : vd)
    {
        cout << d << " ";
    }
    cout << endl;

    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2 = {5, 6, 7, 8};
    vector<int> o = v1 + v2;
    for (int i : o)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v3 = {1,2,3};
    v3 << 4 << 5 << 6;
    for (int i : v3)
    {
        cout << i << " ";
    }
    cout << endl;
    ++v3;


    ------v3;

    szemely sz1;
    sz1.nev = "János";
    sz1.kor = 30;

    szemely sz2;
    sz2.nev = "Kitti";
    sz2.kor = 25;

    cout << sz1 << " " << sz2 << endl;
}