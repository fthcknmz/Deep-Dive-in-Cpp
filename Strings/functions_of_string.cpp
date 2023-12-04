#include <iostream>
#include <string>

using namespace std;

int main(){
    string str = "Hello";
    
    cout << str.length() << endl;
    cout << str.size() << endl;
    cout << str.capacity() << endl;
    str.resize(30);
    cout << str.size() << endl;
    cout << str.max_size() << endl;
    str.clear();
    cout << str << endl;
    cout << str.empty() << endl;

}
