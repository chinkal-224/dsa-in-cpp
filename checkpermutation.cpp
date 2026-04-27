#include<iostream>
#include<cstring>
using namespace std;
bool isPermutation(char input1[], char input2[]) {
    int len1=strlen(input1);
    int len2=strlen(input2);
    if(len1!=len2){
        return false;
    }
    int freq[256]={0};

    for(int i=0;i<len1;i++){
        freq[input1[i]]++;
    }
    for(int j=0;j<len2;j++){
        freq[input2[j]]--;
    }
    for(int k=0;k<256;k++){
        if(freq[k]!=0){
            return false;
        }
    }
    return true;
}
