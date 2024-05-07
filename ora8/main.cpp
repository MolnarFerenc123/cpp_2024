#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct Allat
{
    string nev;
    int kor;
};

istream& operator>>(istream &i, Allat &a){
    i >> a.nev >> a.kor;
    return i;
}

void operator<<(ofstream &of, Allat &a)
{
    of << a.nev << " " << a.kor << endl;
}

int main()
{
    /*
    int x, y;

    cout << "Adjon meg egy egész számot!" << endl;
    cin >> x;

    cout << "Adjon meg egy egész számot!" << endl;
    cin >> y;

    cout << "Összegük: " << x+y << endl;
    */
    /*
    Allat kutya1;
    cin >> kutya1;
    cin >> kutya1.nev >> kutya1.kor;

    cout << kutya1.nev << " " << kutya1.kor << endl;
     */

    vector<Allat> kutyak;
    /*{
        int n;
        cin >> n;
        Allat kutya;
        for (int i = 0; i < n; i++)
        {
            cin >> kutya;
            kutyak.push_back(kutya);
        }
    }*/

    /*
    Fájlkezelés
    ofstream - output file stream - kiírás fileba, létrehozni filet
    ifstream - input file stream - olvasás fileból
    fstream - file stream - képes mindegyikre
    */

    /*ofstream outfile("elso.txt"); //virtuális állomány létrehozása
    //összerendelés (fizikiai és virtuális összerendelése)
    //megnyitás

    outfile << "Megnyitottam az állományt írásra" << endl; //feldolgozás
    outfile.close(); //bezárás

    ifstream infile("elso.txt");
    string sor;
    while(getline(infile, sor)){
        cout << sor << endl;
    }
    infile.close();*/

    /*
    string nev;
    cout << "Add meg a neved: ";
    cin >> nev;
    ofstream outfile("felhasznalo.txt");
    outfile << nev;
    outfile.close();
    ifstream infile("felhasznalo.txt");
    string sor;
    while(getline(infile, sor)){
        cout << sor << endl;
    }
    infile.close();
    */

    /*
        Állomány megnyitási müdok:
        ios::app - append - hozzáfűzés
        ios::in - olvasás
        ios::out - írásra
        oit::trunc - ha létezik, törli a tartalmát, és újat ír bele
    */

    ofstream outfile;
    outfile.open("elso.txt", ios::out | ios::trunc);
    outfile.close();

    fstream ffile;
    ffile.open("elso.txt", ios::out | ios::trunc);
    ffile.close();

    /*ofstream allatoutfile("allatok.txt");

    for (int i = 0; i < kutyak.size(); i++)
    {
        allatoutfile << kutyak[i].nev << " " << kutyak[i].kor << endl;
    }
    allatoutfile.close();
    */

    ifstream allatinfile("allatok.txt");
    string sor;
    Allat kutya;
    while (allatinfile >> kutya)
    {
        kutyak.push_back(kutya);
    }
    allatinfile.close();

    int max = kutyak[0].kor;
    int maxind = 0;

    for (int i = 1; i < kutyak.size(); i++)
    {
        if (kutyak[i].kor > max)
        {
            max = kutyak[i].kor;
            maxind = i;
        }
    }
    cout << "legidősebb kutya: " << kutyak[maxind].nev << endl;
}