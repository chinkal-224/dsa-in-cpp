#include<iostream>
using namespace std;
int main() {
	int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<1;
        for(int j=1;j<=i-2;j++){
            cout<<2;
        }
        if(i>1){
            cout<<1;
        }
        cout<<endl;
    }
    return 0;
}