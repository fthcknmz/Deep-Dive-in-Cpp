#include <iostream>
using namespace std;

int global_v = 0;

void func(){
    static int static_v = 0;
    int a = 5;
    global_v = global_v + a;
    static_v = static_v + a;
    cout << global_v << " - " << static_v << endl;
}

int main(){
    func();
    func();
    func();
    func();
}
