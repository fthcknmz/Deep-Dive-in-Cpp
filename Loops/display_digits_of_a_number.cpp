
#include <iostream>
using namespace std;

int main(){
    
    int n = 1274, dig;
    
    while(n > 0){
        dig = n % 10;
        cout << dig << " ";
        n = n / 10;
    }
    return 0;
}
