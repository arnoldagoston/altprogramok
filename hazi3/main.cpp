#include <iostream>

using namespace std;

int hatvanyfgv(int n, int tomb[100]) {
    int oszto=2, S=0, p=0, min, i;
while (n>1) {
    int szamlalo=0;
    while (n%oszto==0) {
        n=n/oszto;
        szamlalo++;
    }
    //cout << n << endl;
if (szamlalo%2>0) {
    S=S+oszto;
    tomb[p]=oszto;
    p++;
}
oszto++;

}
min=tomb[0];
for (i=0;i<oszto;i++) {
    if (tomb[i]<min) {
        if (tomb[i]!=0) {
            min=tomb[i];
       }
    }
}
    return min;
}
int main()
{
    int n, tomb[100];
    cout << "n=";
    cin >> n;
    cout << hatvanyfgv(n,tomb) << endl;
    return 0;
}
