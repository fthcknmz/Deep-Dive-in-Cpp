
#include <iostream>
using namespace std;
int main(){
    int A[] = {1,2,3,4,5,6,7,8,9,0,29,77,44,6,5,45,76,32};
    int key;
    cout << "enter key: ";
    cin >> key;
    for(int i=0; i<18; i++){
        if(key==A[i]) {
            cout<<"key found at " << i << endl;
            return 0;
        }
    }
    cout << "key cant found" << endl;
    return 0;
}
