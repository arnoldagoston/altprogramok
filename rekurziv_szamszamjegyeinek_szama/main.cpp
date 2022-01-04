#include <iostream>

using namespace std;
int szamlalo;
int S(int n) {
if (n==0) {return 0;}
int szam=10*S(n/10)+n%10;
szamlalo++;
return szamlalo;
}
int main()
{
    int n;
    cin >> n;
    cout << S(n);
    return 0;
}
