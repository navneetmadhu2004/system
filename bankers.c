 //BANKERS ALGORITHM
#include<stdio.h>
#include<stdbool.h>
struct bank
{
    int max,alloc,need;
};
int main()
{
    int n,r;
    printf("Enter the no. of pros:");
    scanf("%d",&n);
    printf("Enter the number of resources:");
    scanf("%d",&r);
    struct bank a[10][10];
    printf("Enter the max matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<r;j++)
        {
            scanf("%d",&a[i][j].max);
        }
        printf("\n");
    }
    printf("Enter the allocation matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<r;j++)
        {
            scanf("%d",&a[i][j].alloc);
        }
         printf("\n");
    }
    int avail[10];
    printf("Enter the available resources:\n");
        for(int j=0;j<r;j++)
        {
            scanf("%d",&avail[j]);
        }
         printf("\n");
    
    //calculating need matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<r;j++)
        {
            a[i][j].need=a[i][j].max-a[i][j].alloc;
        }
    }
    printf("Need Matrix:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<r;j++)
        {
          printf("%d\t",a[i][j].need);
        }
        printf("\n");
    }
    int count=0,y=0,pro[5];
    bool cmplt[5] = {false, false, false, false, false};
 while(y<n)
 {
   for(int i=0;i<n;i++)
   {
    if(cmplt[i])
    {
        continue;
    }    
        count=0;
        for(int j=0;j<r;j++)
        {
          if(a[i][j].need<=avail[j])
          {
            count++;
          }
        }
        if(count==r)
        {
            cmplt[i]=true;
            pro[y++]=i;
                for(int j=0;j<r;j++)
                {
                  avail[j]=avail[j]+a[i][j].alloc;             
              }
        }
   }
 }
 printf("Sequence is :\n");
 for(int i=0;i<n;i++)
 {
    printf("P%d->",pro[i]);
 }
 printf("\nFinal available matrix:\n");
 for(int i=0;i<r;i++)
 {
    printf("%d\t",avail[i]);
    
 }
 return 0;
}
