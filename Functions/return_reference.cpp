
#include <iostream>
using namespace std;

int& returnreference(int &a){
    cout << a << endl;
    return a;
}

int main(){
    int x = 5;
    
    returnreference(x) = 25;
    
    cout << x << endl;

}
