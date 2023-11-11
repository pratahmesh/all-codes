#include <iostream>
using namespace std;
int getMax(int num[],int n){
    int maxi;
maxi=INT32_MIN;
    
    for (int i=0;i<=n;i++){
        maxi = max (maxi,num[i]);
        // if(num[i]>max){
        //     max=num[i];
        }
        
   
    return maxi;
}
int getMin(int num[],int n){
    int mini=INT32_MAX;
    for (int i=0;i<=n;i++){
        mini=min(mini,num[i]);
        // if(num[i]<min){
        //     min=num[i];
        }
    
    return min;
}

int main(){
    int size;
    cin>>size;
    int num[100];

    for(int i=0;i<=size;i++){
        cin>>num[i];
    }
cout<<"Maxmium Value is: "<<getMax(num,size)<<endl;
cout<<"Minimun Value is: "<<getMin(num,size)<<endl;

    return 0;
}