#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char S1[20] = "235";
    char S2[20] = "53.70";
    
    long int l_i = strtol(S1, NULL, 10);
    float f = strtof(S2, NULL);
    cout << l_i << " " << f << endl;
}
