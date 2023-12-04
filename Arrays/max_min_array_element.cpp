
#include <iostream>
using namespace std;
int main(){
    int A[] = {33,4,5,6,7,8,9,11};
    int max=A[0], min=A[0];
    
    for(auto x:A){
        if(max<x) max=x;
        else if(min>x) min=x;
        
    }
    cout<<"min is: " << min<<endl;
    cout<<"max is: " << max<<endl;
return 0;
}
