#include <iostream>

using namespace std;

int main(){
    string st = "narancs";
    string& gyumolcs = st;
    cout << st << " " << gyumolcs << endl;
    cout << &st << " " << &gyumolcs << endl;
    st = "alma";
    cout << st << " " << gyumolcs << endl;
}