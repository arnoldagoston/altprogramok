#include <iostream>

using namespace std;

void primek(int n, int& x, int& y) {
bool prim = true;
int szamlalo=0;
for (int i=n-1;i>=2;i--){
    prim=true;
    for (int oszto=2;oszto<i/2+1;oszto++) {
        if (i%oszto==0) {
            prim =false;
        }
    }
    if (prim) {
        if(szamlalo==0) {
            y=i;
        }
        if(szamlalo==1) {
            x=i;
        }
        szamlalo++;
    }
    }
}
int main()
{
    int n, x, y;
    cout << "n=";
    cin >> n;
    primek(n,x,y);
    cout << x << endl;
    cout << y << endl;
    return 0;
}
