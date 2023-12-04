
#include <iostream>
using namespace std;

int global = 0;

void func(){
    int local_1 = 1;
    
    cout << global << endl;
    cout << local_1 << endl;
    
    global = global + 9;
}

int main(){
    int local_2 = 2;
    
    func();

    cout << global << endl;
    cout << local_2 << endl;
}
