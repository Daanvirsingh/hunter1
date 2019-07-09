
#include<iostream>
using namespace std;


int main(){
    int n,m=0;
    int a[n];
    for(int i=0;i<n;i++){
        if(m<a[i]){
            m=a[i];
        }
    }
    int c[m];
    for(int i=0;i<n;i++){
        c[a[i]]++;
        if(c[a[i]]==2){
            cout<<a[i]<<" ";
        }
    }
}