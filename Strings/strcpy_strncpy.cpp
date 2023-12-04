#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char S1[20];
    char S2[20] = "world";
    
    strcpy(S1, S2);
    cout << S1 << endl;
    
    char S3[20];
    char S4[20] = "world";
    
    strncat(S3, S4,3);
    cout << S3 << endl;

}
