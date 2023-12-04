
#include <iostream>
using namespace std;
   
int add(int x, int y, int z = 0){
        return x + y + z;
    }

int max(int a = 0, int b = 0, int c = 0){
    return a>b && a>c ? a : b>c?b : c;
}

int main(){

    cout << add(4, 2) << endl;
    cout << add(4, 2, 5) << endl;
    
    cout << max(12,13,14) << endl;
    cout << max(12,13) << endl;
    
    return 0;
}
