#include <iostream>

using namespace std;

int divPrim(int n) {
int oszto=2;
int S=0;
while (n>1) {
    int szamlalo=0;
    while(n%oszto==0) {
        n/=oszto;
        szamlalo++;
    }
    if (szamlalo%2>0) {
        S+=oszto;
    }
    oszto++;
}
return S;
}
int main()
{
    int n;
    cout << n;
    cin >>n;
    int S=divPrim(n);
    cout << S << endl;
    return 0;
}
