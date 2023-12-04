
#include <iostream>
using namespace std;

int main(){
    
    int sum=0, n, i=1;
    cout << " enter the number of natural numbers: ";
    cin >> n;
    
    for(;i<=n;i++){
        sum = sum + i;
        cout << i << endl;
    }
    cout << "sum is: " << sum;
}
