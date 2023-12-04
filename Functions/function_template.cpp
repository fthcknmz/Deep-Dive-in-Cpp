
#include <iostream>
using namespace std;

    template <class T>
    T add(T x, T y){
        return x + y;
    }

int main(){

    cout << add(4.2, 2.2) << endl;
    
    cout << add(4, 2) << endl;
    
    cout << add(4.2f, 2.2f) << endl;
    
    return 0;
}
