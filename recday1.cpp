#include <iostream>
using namespace std;
void reachhome(int src,int dest){
    cout<<"source"<<src<<"destination"<<dest<<endl;
    if(src==dest){ //base case
        cout<<"pohoch gaya"<<endl;
        return;
    }
    src++;
    reachhome(src,dest);
}
int main(){
    int src=1;
    int dest=10;
    reachhome(src,dest);
    return 0; //code by love babbar
}