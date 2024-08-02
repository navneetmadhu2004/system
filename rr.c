#include<stdio.h>
	struct p{
	int pid;
	int bt;
	int tat;
	int wt;
	int temp_bt;
	}a[10];
void  main(){
	int n;
	printf("Enter the total number of processes:");
	scanf("%d",&n);
	printf("Enter the process id and the burst time:");
	for(int i=0;i<n;i++){
	scanf("%d%d",&a[i].pid,&a[i].bt);
	a[i].temp_bt=a[i].bt;
	}
	int qt;
	printf("Enter the quantum time:");
	scanf("%d",&qt);
	int i=0;
	int x=0;
	int y=0;
    while(1){
		if(a[i].bt>0){
			if(a[i].bt>qt){
				a[i].bt=a[i].bt-qt;
				x=x+qt;
			}
			else{
				x=x+a[i].bt;
				a[i].tat=x;
				a[i].bt=0;
				a[i].wt=a[i].tat-a[i].temp_bt;
				y++;
				if(y==n){
					break;
				}
			}
		}
		if(i==n){
			i=0;
		}
		else{
			i++;
		}
	}
	printf("PID\tBT\tTAT\tWT\n");
	for(int i=0;i<n;i++){
		printf("%d\t%d\t%d\t%d\n",a[i].pid,a[i].temp_bt,a[i].tat,a[i].wt);
	}

}