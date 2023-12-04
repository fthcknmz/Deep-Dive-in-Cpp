
#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char S1[20] = "hello";
    cout << S1 << " " << strlen(S1) << endl;
    
    char S2[20];
    cin.getline(S2, 20);
    cout << S2 << " " << strlen(S2) << endl;
    
}
