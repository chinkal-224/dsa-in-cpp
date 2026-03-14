#include<iostream>
using namespace std;
bool ispresent(int arr[][3],int target,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==target){
                return 1;
            }
        }
        
    }
    return 0;
}
//to print row wise sum
void printrowsum(int arr[][3],int row,int col){
    cout<<"printing row wise sum "<<endl;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        cout<<"sum of row "<<i<<" is "<<sum<<endl;
    }
}
int largestrowsum(int arr[][3],int row,int col){
    int maxi=INT_MIN;
    int rowindex=-1;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<3;col++){
            sum+=arr[row][col];
        }
        if(sum>maxi){
            maxi=sum;
            rowindex=row;
        }
    }
    cout<<"maximum sum is "<<maxi<<endl;
    return rowindex;
}
int main(){
    /*
    //row wise input hai yeh i=3 diya hai or j=4 diya he to 3 row or 4 column ka matrix banega
    */
    int arr [3][3]={3,4,11,12,2,1,7,8,7};
    /*for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/
    //yeh column waise loop hai jaha i =4 diya he j=3 diya he to 4 column or 3 row ka matrix banega
    /*for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin >> arr[i][j];
        }
    }*/

    // column-wise print
    for(int row=0;row<3;row++){        // row
        for(int col=0;col<3;col++){    // column
        cout << arr[row][col] << " ";
    }
    cout << endl;
}
cout<<"enter the element to search "<<endl;
int target;
cin>>target;
if(ispresent(arr,target,3,4)){
    cout<<"element is found"<<endl;
}else{
    cout<<"element not found"<<endl;
}
printrowsum(arr,3,3);
int ans=largestrowsum(arr,3,3);
cout<<"row with largest sum is "<<ans<<endl;
    
    return 0;
}