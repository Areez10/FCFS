#include<stdio.h>
#include<conio.h>
void main()
{
int q[20],n,head,x,y,k,seek=0,range,difference;
float seektime;
printf("enter the range of disk");
scanf("%d",&range);
printf("enter the size of queue request");
scanf("%d",&n);
printf("enter the queue");
for(x=1;x<=n;x++)
{
scanf("%d",&q[x]);}
printf("enter the initial head position");
scanf("%d",&head);
q[0]=head;
for(y=0;y<=n-1;y++)
{
difference=abs(q[y+1]-q[y]);
seek+=difference;
printf("move is from %d to %d with seek %d\n",q[y],q[y+1],difference);
}
printf("total seek time is%d\n",seek);
seektime=seek/(float)n;
printf("avrage seek time is %f\n",seektime);
}
