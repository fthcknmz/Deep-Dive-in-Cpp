
#include <iostream>
using namespace std;

int main(){
    
    int x = 5;
    int &y = x;
    
    cout << x << endl;
    x++;
    cout << y << endl;
    
    cout << &x << endl;
    cout << &y << endl;
    
    y++;
    cout << x << endl;
    
    return 0;
}
