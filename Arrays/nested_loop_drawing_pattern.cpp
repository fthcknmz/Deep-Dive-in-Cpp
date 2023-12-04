#include <iostream>
using namespace std;

int main(){
    cout << "PATTERN-1" << endl;
    
    int count = 1;
    for(int i = 0; i < 4; i++){
        for(int j=0; j<4; j++){
            cout << count << "  ";
            count++;
        }
        cout << endl;
    }
    
    cout << endl << "PATTERN-2" << endl<<endl;
    
    for(int i = 0; i < 4; i++){
        for(int j=0; j<4; j++){
            if(i >= j) cout << "*";
        }
        cout << endl;
    }
    
    cout << endl << "PATTERN-3" << endl<<endl;
    
    for(int i = 0; i < 4; i++){
        for(int j=0; j<4; j++){
            if(i > j) cout << " ";
            else cout << "*";
        }
        cout << endl;
    }
}
