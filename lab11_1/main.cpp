#include <iostream>
#include <stdlib.h>
using namespace std;

void lenullaz(int v[100], int n) {
    int i;
 for(i=0;i<n;i++) {
    v[i]=0;
 }
}
void feltolt(int v[], int n){
for(int i=0;i<n;i++) {
    v[i]=rand()%100;
}
    }
void rendez(int v[100],int n) {
for (int i=0;i<n;i++) {
    for(int j=i+1;j<n;j++) {
        if(v[i]>v[j]) {
            swap(v[i],v[j]);
        }
    }
}
     }
void kiir(int v[100], int n) {
  for(int i=0;i<n;i++) {
    cout << v[i] << " ";
  }
  cout << endl;
     }

int main()
{
    int v[100], n;
    cout << "n=";
    cin >> n;
    kiir (v,n);
    lenullaz(v,n);
    kiir (v,n);
    feltolt(v,n);
    kiir (v,n);
    rendez (v,n);
    kiir(v,n);
    return 0;
}
