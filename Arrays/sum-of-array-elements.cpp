
#include <iostream>
using namespace std;
int main(){
    int A[] = {4, 7, 9 ,6, 4, 2};
    int sum = 0;
    for(int x:A){
        sum = sum + x;
    }
    cout << "sum is: " << sum << endl;
    return 0;
}
