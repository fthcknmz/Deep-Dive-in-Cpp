
#include <iostream>
using namespace std;

int main(){
    
    char S1[10] = "string 1";
    char S2[] = "string 2";
    char S3[] = {'h','e','l','l','o','\0'};
    char S4[] = {65,66,67,68,'\0'};
    
    string S= "string";
    
    cout << S1 << endl;
    cout << S2 << endl;
    cout << S3 << endl;
    cout << S4 << endl;
    
    cout << S << endl;
}
