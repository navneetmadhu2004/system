#include<stdio.h>
	struct p{
	int pid;
	int bt;
	int tat;
	int wt;
	int prio;
	}a[10];
void  main(){
	int n;
	printf("Enter the total number of processes:");
	scanf("%d",&n);
	printf("Enter the process id and the burst time and priority of each process:");
	for(int i=0;i<n;i++){
	scanf("%d%d%d",&a[i].pid,&a[i].bt,&a[i].prio);
	}
	struct p temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(a[j].prio>a[j+1].prio){
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	a[-1].tat=0;
	for(int i=0;i<n;i++){
		a[i].tat=a[i-1].tat+a[i].bt;
		a[i].wt=a[i].tat-a[i].bt;
	}
	printf("PID\tBT\tPRIO\tTAT\tWT\n");
	for(int i=0;i<n;i++){
		printf("%d\t%d\t%d\t%d\t%d\n",a[i].pid,a[i].bt,a[i].prio,a[i].tat,a[i].wt);
	}
}	


	
	
	
	
	
	
	
	
