#include <iostream>
using namespace std;

void display(){
    cout << "displayed" << endl;
}

int main(){
    display();
    
    void (*fp)();
    fp = display;
    
    (*fp)();
}
