#include <iostream>
#include<cstdlib>
using namespace std;

int main() {
    int a, b;
    int *ptr_a = &a;
    int *ptr_b = &b;
    
    cin >> *ptr_a >> *ptr_b;
    
    cout << *ptr_a + *ptr_b <<endl;
    cout << abs(*ptr_a - *ptr_b) <<endl;
    
    return 0;
}