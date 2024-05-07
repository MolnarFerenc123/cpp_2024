#include <vector>
#include <iostream>
#include <algorithm>

int fl(int n){
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}

int main(){
    std::cout << fl(5);
}