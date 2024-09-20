#include <iostream>
using namespace std;

int main(){
    int age;
    string name;
    string fullName;

    cout<< "Enter your age:" <<endl;
    cin>> age;
    cout<< "Enter your name:" <<endl;
    cin>> name;

    //consume the newline character from previous cin
    cin.ignore();

    cout<< "Enter full name:" <<endl;
    getline(cin, fullName);

    cout<< age <<endl;
    cout<< name <<endl;
    cout<< fullName;
    return 0;
}