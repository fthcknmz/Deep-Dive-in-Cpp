
#include <iostream>
using namespace std;

int main(){
    
    int n = 1274, dig;
    int r_n=0;
    
    while(n > 0){
        dig = n % 10;
        cout << dig << " ";
        n = n / 10;
        r_n = (r_n*10) + dig;
    }
    cout <<endl<< "reversed: " << r_n<<endl;
    return 0;
}
