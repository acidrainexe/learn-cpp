#include <iostream>
using namespace std;

int main(){
    string name = "Naeem Islam";
    cout << name.length() <<endl;
    cout << name.find('a') <<endl;

    string firstName = name.substr(0,5);
    cout << firstName <<endl;
    return 0;
}
