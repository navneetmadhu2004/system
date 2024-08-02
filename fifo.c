#include<stdio.h>
void main(){
    int n,f,a[100];
    printf("Enter the total number of pages:");
    scanf("%d",&n);
    printf("Enter the frame size:");
    scanf("%d",&f);
    printf("Enter the string sequence:");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int b[f];
    int hit=0;
    int miss=0;
    int track=0;
    int found=0;
    for(int i=0;i<n;i++){
        found=0;
        for(int j=0;j<f;j++){
            if(a[i]==b[j]){
                found=1;
                hit++;
                break;
            }
        }
        if(found==0){
        b[track]=a[i];
        track=(track+1)%f;
        miss++;
        }
    }
    printf("Total miss is:%d\n",miss);
    printf("Total hit is:%d",hit);
}