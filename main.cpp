#include <iostream>

using namespace std;

int giveMeTwelve(){
    return 12;
}

int main() {
    cout << "Hello, World!" << std::endl;
    cout << "Hello, World!2" << std::endl;
    cout << "Hello, World!3" << std::endl;
    cout << "Hello, World!4" << std::endl;
    string s = "numero: ";
    int numero12 = giveMeTwelve();

    string finalString = s + to_string(numero12);

    cout << "finalString is: " << finalString << endl;

    cout << "numero: " << numero12 << endl;
    return 0;
}

