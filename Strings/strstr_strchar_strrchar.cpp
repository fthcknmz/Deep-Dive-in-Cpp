#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char S1[20] = "programming";
    char S2[20] = "gram";
    
    cout << strstr(S1, S2) << endl;
    cout << strchr(S1, 'm') << endl;
    cout << strrchr(S1, 'm') << endl;
}
