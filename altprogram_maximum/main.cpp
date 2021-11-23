#include <iostream>
using namespace std;

int max(int v[100],int n) {
    int i;
    int max=v[0];
    for (int i=1;i<n;i++) {
        if(v[i]>max) {
            max=v[i];
        }
    }
    return max;
    }

int main()
{
    int v[100],n;
    cin >> n;
    for (int i=0;i<n;i++) {
        cin >> v[i];
    }
    cout << max(v[100],n);
    return 0;
}
