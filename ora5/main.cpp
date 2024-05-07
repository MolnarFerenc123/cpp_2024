#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


void csere_2(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void csere(int a, int b){
    int tmp = a;
    a = b;
    b = tmp;
}

void csere_3(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    vector<int> v;
    for(int i = 0; i <= 10; i++){
        v.push_back(i*10);
        cout << v[i] << " " << v.at(i) << endl;
    }
    cout << v.at(2) << endl; //visszaszól, hogyha rossz indexet hívok meg
    cout << v.size() << " " << v.capacity() << endl;

    int* pos = v.data();
    cout << pos << endl;

    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    pos = v.data();
    cout << pos << endl;

    cout << v.front() << " " << v.back() << endl;

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    cout << v.size() << " " << v.capacity() << endl;

    v.shrink_to_fit();

    cout << v.size() << " " << v.capacity() << endl;

    cout << v.back() << endl;

    v = {3,6,342,673,1,5,7,3,5,7,2,0,12,4,6};

    sort(v.begin(), v.end());

    for(int i: v){
        cout << i << " ";
    }
    cout << endl;

    int x = 10;
    int y = 20;

    cout << x << " " << y << endl;

    csere_2(x,y);

    cout << x << " " << y << endl;

     csere_3(&x,&y);

    cout << x << " " << y << endl;

}