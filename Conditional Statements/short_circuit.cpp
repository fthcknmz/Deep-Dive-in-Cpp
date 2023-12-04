#include <iostream>
using namespace std;
int main(){
    
    int a = 5, b = 4, i = 8;
    
    if(a<b && ++i<b){ //-10 is taken as True
        cout << "inside";
    }
    cout << i << endl;
    
    if(a>b && ++i<b){ //-10 is taken as True
        cout << "inside";
    }
    cout << i << endl;
    
}
