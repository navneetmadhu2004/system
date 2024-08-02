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
    printf("Enter the initial disk position:");
    scanf("%d",&ini);
    int totalHeadMovement=0;
     for(int i=0;i<d;i++){
        totalHeadMovement=totalHeadMovement+abs(ini-r[i]);
        ini=r[i];
     }
     printf("The total head movement is %d\n",totalHeadMovement);
}