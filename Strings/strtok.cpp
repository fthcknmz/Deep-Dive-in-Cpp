#include <iostream>
#include <cstring>

using namespace std;

int main(){

    char S1[20] = "x=10;y=20;z=5";
    
    char* token = strtok(S1,"=;");
    
    while(token != NULL){
        cout << token << endl;
        token = strtok(NULL,"=;");
    }
    
}
