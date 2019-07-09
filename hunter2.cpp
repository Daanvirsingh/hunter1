#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n=5;
    int a[n]={1,8,3,4,7};
    sort(a,a+n);
    while(n--){
        cout<<a[n];
    }
    return 0;
}
