#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "programming";
    
    char des[10];
    
    str.copy(des, str.length());
    des[str.length()] = '\0';
    
    cout << str << endl;
    cout << des << endl;
    
    cout << endl << str.find("mm") << endl;
    
    return 0;
}
