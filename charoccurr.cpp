#include<vector>
#include<iostream>
using namespace std;
char highoccur(char input[]){
    int count[26];
    for(int i=0;i<26;i++){
        count[i]=0;
    }
    for(int i=0;input[i]!='\0';i++){
        char ch=input[i];
        int index=ch-'a';
        count[index]++;
    }
    int max=count[0];
    int index=0;
    for(int i=1;i<26;i++){
        if(count[i]>max){
            max=count[i];
            index=i;
        }
    }
    char ans=index+'a';
    return ans;
}
int main(){
    char input[100];
    cout<<"Enter the string: ";
    cin.getline(input,100);
    char ans=highoccur(input);
    cout<<"The highest occurring character is: "<<ans<<endl;
    return 0;
}
