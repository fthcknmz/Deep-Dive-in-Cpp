
#include <iostream>
using namespace std;

void display(){
    cout << "display" << endl;
}

float add(float x, float y){
    float z = x + y;
    return z;
}

int main(){
    
    display();
    
    float x = 4.2, y = 2.2, c;
    c = add(x,y);
    cout << c << endl;
    
    
    return 0;
}
