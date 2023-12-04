#include <iostream>
using namespace std;

int main(){
    
    int n = 153, dig, sum=0;
    int m = n;
    
    while(n > 0){
        dig = n % 10;
        n = n / 10;
        sum = sum + (dig*dig*dig) ;
    }
    if (m == sum) cout << "armstrong number"<<endl;
    else cout << "NOT"<<endl;
    
    return 0;
}
