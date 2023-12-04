
#include <iostream>
using namespace std;

int main(){
    
    int i = 0;
    for(;i<5;){
        cout << "loop is fine" << endl;
        i++;
    }
    
    i=0;
    for(;;){
        cout << "infinite loop";
        if(i==10) break;
        i++;
    }
    
}
