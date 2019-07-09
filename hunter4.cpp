#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    int s;
    cin>>s;
    for(int i=1;i<n;i++){
        cin>>a[i];
        s=s^a[i];
    }
    cout<<s;
    return 0;
}
