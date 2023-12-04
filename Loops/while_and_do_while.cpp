
#include <iostream>
using namespace std;

int main(){
    int n=10, i=1, k=1;
    
    while(i<=n){
        cout << i << " ";
        i++;
    }
    
    cout << endl;
    
    do {
        cout << k << " ";
        k++;
    } while (k<=n);
}
