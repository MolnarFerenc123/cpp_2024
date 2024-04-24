#include <iostream>
#include <map>
#include <vector>
#include <fstream>

using namespace std;

struct labda{
    int meret;
    string szin;
};

struct lotto{
    int n;
    int column;
};

int fv1(int n){
    int dividers = 0;
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            dividers++;
        }
        
    }
    return dividers;
}

int fv2(int arr[10]){
    int biggest = arr[0];
    int biggestIndex = 0;
    for (int i = 1; i < 10; i++)
    {
        if (arr[i] > biggest)
        {
            biggest = arr[i];
            biggestIndex = i;
        }
        
    }
    return biggestIndex;
}

int fv3(int arr[10]){
    map<int, int> occurs = {}; 
    for(int i = 0; i < 10; i++){
            if (occurs.count(arr[i]) == 0)
            {
                occurs.insert({arr[i],1});
            }else{
                occurs[arr[i]] ++;
            }
    }
    int mostOften = 0;
    int mostOftenCount = 0;
    for (auto i: occurs)
    {
        if (i.second > mostOftenCount)
        {
            mostOften = i.first;
            mostOftenCount = i.second;
        }
    }
    return mostOften;
}

void fv4(int *a, int b, int *c){
     *a = b;
     b = *c;
     *a++;
     b--;
}

int main(){
    cout << fv1(12) << endl;
    int arr[10] = {0,1,1,1,4,5,8,8,8,8};
    cout << fv2(arr) << endl;
    cout << fv3(arr) << endl;
    int x = 1;
    int y = 2;
    int z = 3;
    fv4(&x,y,&z);
    cout << x << " " << y << " " << z << endl;
    /*
    vector<labda> pirosLabdak = {};
    vector<labda> nemPirosLabdak = {};
    for (int i = 0; i < 5; i++)
    {
        labda labdaIn;
        cin >> labdaIn.meret >> labdaIn.szin;
        if(labdaIn.szin == "piros"){
            pirosLabdak.push_back(labdaIn);
        }else{
            nemPirosLabdak.push_back(labdaIn);
        }
    }
    for (int i = 0; i < pirosLabdak.size(); i++)
    {
        cout << "Labda színe: " << pirosLabdak[i].szin << ", mérete: " << pirosLabdak[i].meret << endl;
    }
    for (int i = 0; i < nemPirosLabdak.size(); i++)
    {
        cout << "Labda színe: " << nemPirosLabdak[i].szin << ", mérete: " << nemPirosLabdak[i].meret << endl;
    }

    map<int,int> numbersOccurrence = {};
    ifstream infile;
    infile.open("lotto.txt");
    int t;
    while(infile >> t){
        if(numbersOccurrence.count(t) == 0){
            numbersOccurrence.insert({t,1});
        }else{
            numbersOccurrence[t]++;
        }
    }
    infile.close();
    int mostOccured = 0;
    int mostOccuredCount = 0;
    for (auto i: numbersOccurrence)
    {
        if(i.second > mostOccuredCount){
            mostOccured = i.first;
            mostOccuredCount = i.second;
        }
    }
    cout << mostOccured << " " << mostOccuredCount;
    ofstream ofile("gyakorisag.txt");
    for (auto i : numbersOccurrence)
    {
        ofile << i.first << " " << i.second;
    }
    ofile.close();*/

    vector<lotto> szamok = {};
    ifstream infile;
    infile.open("lotto.txt");
    int t;
    int column = 1;
    while(infile >> t){
        lotto szam;
        szam.column = column;
        szam.n = t;
        szamok.push_back(szam);
        column++;
        if(column > 5){
            column = 1;
        }
    }
    infile.close();
    
    int maxByColumn[5] = {0,0,0,0,0};
    for (int i = 0; i < szamok.size(); i++)
    {
        if(szamok[i].n > maxByColumn[szamok[i].column-1]){
            maxByColumn[szamok[i].column-1] = szamok[i].n;
        }
    }
    cout << "1. oszlop max: " << maxByColumn[0] << endl;
    cout << "2. oszlop max: " << maxByColumn[1] << endl;
    cout << "3. oszlop max: " << maxByColumn[2] << endl;
    cout << "4. oszlop max: " << maxByColumn[3] << endl;
    cout << "5. oszlop max: " << maxByColumn[4] << endl;
}