#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
       if(i%2==0&&a[i]%2==1){
           cout<<a[i]<<" ";
       }
       if(i%2==1&&a[i]%2==0){
           cout<<a[i]<<" ";
       }
    }
    
    return 0;
}
