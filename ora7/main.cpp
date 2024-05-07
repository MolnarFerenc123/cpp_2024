#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int is_palindrome(const string s){
    for(int i = 0; i < s.length() / 2; i++){
        if(s[i] != s[s.length()-1-i]){
            return 0;
        }
    }
    return 1;
}

void ascii_table(){
    for(int i = 32; i <= 127; i++){
        cout << i << ": " << (char)i << endl;
    }
}

void mario_v3(int height){
    int blocks = 1;
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height-blocks; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < blocks; j++)
        {
            cout << "#";
        }
        cout << " ";
        for (int j = 0; j < blocks; j++)
        {
            cout << "#";
        }
        cout << endl;
        blocks++;
    }
    
}

/*void pozitiv(vector<int>& array){
    for(int i = 0; i < array.size(); i++){
        if(array[i] < 0){
            array[i] *= -1;
        }
    }
}*/

void pozitiv(int* t, int size){
    for(int i = 0; i < size; i++){
        if(t[i] < 0){
            t[i] *= -1;
        }
    }
}

int* sekelymasolat(int* t, int size){
    int* t2 = t;
    return t2;
}

int* melymasolat(int* t, int size){
    int* t2 = new int[size];
    for(int i = 0; i < size; i++){
        t2[i] = *(t+i);
    }
    return t2;
}

int char_count(string s, char to_search){
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == to_search){
            count++;
        }
    }
    return count;
}

void tombfeltolt(char* ct){
    for(int i = 0; i < 26; i++){
        *(ct+i) = (char)(i+97);
        cout << (char)(i+97) << endl;
    }
}

int main(){
    /*
    int t1[5] = {-1,2,-3,4,-5};
    pozitiv(t1, 5);
    for (int i = 0; i < 5; i++)
    {
        cout << t1[i] << " ";
    }
    */
    /*int a = char_count("Abba",'x');
    cout << a;
    ascii_table();*/
    char abc[26] = {};
    tombfeltolt(abc);
}