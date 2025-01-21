#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    string c;
    string d;
    string e;

    int aLength;
    int bLength;

    cin>>a;
    cin>>b;

    c = a + b;

    aLength = a.length();
    bLength = b.length();

    cout << aLength <<" " << bLength << endl;
    cout << c << endl;

    d = b[0] + a.substr(1, aLength);
    e = a[0] + b.substr(1,bLength);

    cout << d << " " << e << endl;

    return 0;
}