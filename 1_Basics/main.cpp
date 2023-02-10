#include <iostream> // a header file also called library, allows using input and output command
using namespace std; // this line frees us to write std:: part every time
int main()
{
    std::cout << "Hello World!\n"; // will print output to console "hello world" string
    
    std::cout << "My name is Fethi" << std::endl; // << std::endl does the same job \n does 

    cout << "From now on we don't have to write 'std::'" << endl;

    system("pause>0"); // enables us to get rid of the additional text at the end of console till pressing any key
}

// To execute the cpp file we built
// 1) click the Local Windows Debugger button up there
// 2) i.find the folder we have created
//    ii. go to Debug folder and find the executable file (Application file)
//    iii. if you cannot see the same output version as you see in visual studio, try Build -> Build Solution