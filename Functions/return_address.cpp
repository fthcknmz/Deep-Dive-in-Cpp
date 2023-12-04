
#include <iostream>
using namespace std;

int* returnaddress(int size){
    int *p = new int[size];
    for(int i = 0; i< size; i++){
        p[i] = (i+1)*5;
    }
    return p;
}

int main(){
    int size = 5;
    
    int* ptr = returnaddress(size);
    
    for(int i = 0; i< size; i++){
        cout << ptr[i] << endl;
    }
    
}
