#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "programming";
    
    cout << str.replace(3,4,"kk") << endl;
    str.erase();
    
    string str1 = "AAA";
    string str2 = "BBB";
    cout << str1 << " " << str2 << endl;
    str1.swap(str2);
    cout << str1 << " " << str2 << endl;
}
