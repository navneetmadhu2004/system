#include<stdio.h>
#include<math.h>
void main(){
    int r[10],d,ini;
    printf("Enter the total number of disks:");
    scanf("%d",&d);
    printf("Enter the disk sequence:");
    for(int i=0;i<d;i++){
        scanf("%d",&r[i]);
    }
    int dir;
    int max,min=0;
    printf("Enter the max disk position:");
    scanf("%d",&max);
    printf("Enter the initial disk position:");
    scanf("%d",&ini);
    printf("Enter the movement direction(1 for left and 2 for right):");
    scanf("%d",&dir);
    int totalHeadMovement=0;
    if(dir=1){
        totalHeadMovement=(ini-min)+(r[d-1]-min);
    }
    else{
        totalHeadMovement=(max-ini)+(max-r[0]);
    }

     printf("The total head movement is %d\n",totalHeadMovement);
}