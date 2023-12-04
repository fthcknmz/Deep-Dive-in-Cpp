
#include <iostream>
using namespace std;

void passbyvalue(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "passbyvalue a and b: " << a << " " << b << " ---- ";
}

void passbyaddress(int* a, int* b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "passbyaddress a and b: " << *a << " " << *b << " ---- ";
}

void passbyreference(int& a, int& b){
    int temp;
    temp = a;
    a = b;
    b = temp;
    cout << "passbyreference a and b: " << a << " " << b << " ---- ";
}

int main(){
    int x = 11, y =22;
    
    passbyvalue(x, y);
    cout << "actual x and y: " << x << " " << y << endl;
    
    passbyaddress(&x, &y);
    cout << "actual address x and y: " << x << " " << y << endl;
    
    passbyreference(x, y);
    cout << "actual x and y: " << x << " " << y << endl;
    
    return 0;
}
