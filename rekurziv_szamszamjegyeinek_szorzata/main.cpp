#include <iostream>

using namespace std;

int szorzat(int n) {

if (n==0) {return 1;}
return n%10*szorzat(n/10);
}
int main()
{
    int n;
    cin >> n;
    cout << szorzat(n);
    return 0;
}
