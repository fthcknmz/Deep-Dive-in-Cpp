#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char S1[20] = "Hello";
    char S2[20] = "Hello";
    char S3[20] = "hello";
    
    cout << strcmp(S1, S2) << endl;
    cout << strcmp(S1, S3) << endl;
}
