
#include <iostream>
using namespace std;

int main(){
    int A[] = {1,2,3,4,5,6,7,8,9,11,13,14,15,26,46,68,79,89,97};
    int low=0, high=18, mid;
    int key;
    cout << "enter key: ";
    cin >> key;
    while(low <= high){
        mid = (low+high)/2;
        if (key == A[mid]){
            cout << "key found at " << mid<<endl;
            return 0;
        }
        else if(key>A[mid]) low = mid+1;
        else high = mid-1;
    }
    return 0;
}
