#include<stdio.h>//sort
int main(){
    int arr[4]={30,10,50,20,};
    int size=4;
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }

        }
    }
    for(int i=0;i<size;i++){
        printf("%d",arr[i]);
    }
}

