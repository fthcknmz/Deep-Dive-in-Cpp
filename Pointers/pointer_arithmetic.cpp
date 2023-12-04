
#include <iostream>
using namespace std;

int main(){
    int A[5] = {11,22,33,44,55};
    int *p = A;
    cout << *p << endl;
    p++;
    cout << *p << endl;
    int *q = &A[4];
    cout << *q << endl;
    
    cout << q-p << endl;
    
    for(int i=0; i<5; i++){
        cout << i[A] <<endl;
    }
    
    for(int i=0; i<5; i++){
        cout << *(A+i) <<endl;
    }
    
    
}
