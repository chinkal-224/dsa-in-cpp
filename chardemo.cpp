#include<iostream>
using namespace std;
bool ispalindrome(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(name[s]!=name[e]){
            return 0;
        }
        s++;
        e--;
    }
    return 1;
}
void reverse(char name[],int n){
    int s=0;
    int e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getlenghth(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];
    cout<<"enter your name: "<<endl;
    cin>>name;
    cout<<"your name is :";
    cout<<name<<endl;
    int len=getlenghth(name);
    cout<<"length of your name is :"<<len<<endl;
    reverse(name,len);
    cout<<"your name after reverse is :"<<name<<endl;
    if(ispalindrome(name,len)){
        cout<<"your name is palindrome"<<endl;
    }else{
        cout<<"your name is not palindrome"<<endl;
    }
    
    return 0;

}
