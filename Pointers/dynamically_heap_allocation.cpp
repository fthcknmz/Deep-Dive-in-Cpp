
#include <iostream>
using namespace std;

int main(){
    
    int *p = new int[5];
    p[0] = 11;
    p[1] = 5;
    
    cout<< p[1] << endl;

    delete []p;
    p = nullptr;
    
    int size;
    cout << "enter the size of the Array: ";
    cin >> size;
    int *pointer = new int[size];
    cout << sizeof *pointer << endl;
    
    cout << "enter the new size of the Array: ";
    cin >> size;
    delete []pointer;
    pointer = new int[size];
    cout << sizeof *pointer << endl;
    
    return 0;
}
