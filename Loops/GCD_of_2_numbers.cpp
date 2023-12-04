
#include <iostream>
using namespace std;

int main(){
    int m=30, n= 21;
    
    while(1){
        if(m>n) m = m - n;
        else if(m<n) n = n-m;
        else{
            cout << "GCD is: " << m <<endl;
            return 0;
        }
    }
}
