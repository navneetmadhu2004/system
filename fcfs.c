#include<stdio.h>
	struct p{
	int pid;
	int bt;
	int tat;
	int wt;
	}a[10];
void  main(){
	int n;
	printf("Enter the total number of processes:");
	scanf("%d",&n);
	printf("Enter the process id and the burst time:");
	for(int i=0;i<n;i++){
	scanf("%d%d",&a[i].pid,&a[i].bt);
	}
	a[-1].tat=0;
	for(int i=0;i<n;i++){
		a[i].tat=a[i-1].tat+a[i].bt;
		a[i].wt=a[i].tat-a[i].bt;
	}
	printf("PID\tBT\tTAT\tWT\n");
	for(int i=0;i<n;i++){
		printf("%d\t%d\t%d\t%d\n",a[i].pid,a[i].bt,a[i].tat,a[i].wt);
	}
}	


	
	
	
	
	
	
	
	
