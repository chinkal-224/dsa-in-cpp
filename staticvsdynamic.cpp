#include<iostream>
using namespace std;
void update(int &n){
    n++;
}
int main(){
    int i=5;
    int &j=i; // j is a reference to i
    cout<<"Before modification: "<<endl;
    cout<<"i = "<<i<<endl; // prints 5
    cout<<"j = "<<j<<endl; // prints 5
    i++;
    cout<<"After modifying i: "<<endl;
    cout<<"i = "<<i<<endl; // prints 6
    cout<<"j = "<<j<<endl;
    j++;
    cout<<"After modifying j: "<<endl;
    cout<<"j = "<<j<<endl; // prints 7
    cout<<"i = "<<i<<endl; // prints 7
    int n=5;
    cout<<"before" <<n<<endl;
    update(n);
    cout<<"after"<<n<<endl;
    return 0;
}