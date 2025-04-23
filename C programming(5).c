# include<stdio.h>//search
int main(){
    int arr[5]={30,10,50,20,40};
    int size=5;
    int terget=20;
    int found=0;
    for(int i=0;i<size;i++){
        if(arr[i]==terget){
            printf("Element found at index %d/n",i);
            found= 1;
            break;
        }
    }
    if(!found){
        printf("Element not found/n");
    }
}
