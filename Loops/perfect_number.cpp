
#include <iostream>
using namespace std;

int main(){
    
    int n, fact=1, sum = 0;
    cout << "enter n: ";
    cin >> n;
    
    cout << "factors of " << n << " is/are ";
    for(int i=1; i<=n; i++){
        if(n % i == 0) {
            cout << i << " ";
            sum = sum + i;
        }
    }
    if (n*2 == sum) cout << endl << "the number is perfect" << endl;
    else cout << endl << "the number is NOT perfect" << endl;
    
    return 0;
}
