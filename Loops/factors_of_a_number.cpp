
#include <iostream>
using namespace std;

int main(){
    
    int n, fact=1;
    cout << "enter n: ";
    cin >> n;
    
    cout << "factors of " << n << " is/are ";
    for(int i=1; i<=n; i++){
        if(n % i == 0) cout << i << " ";
    }
    return 0;
}
