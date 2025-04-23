#include<stdio.h>//update
int main(){
    int arr[5]={10,20,30,40,50};
    int index=2;
    int newvalue=99;
    arr[index]=newvalue;
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
}
