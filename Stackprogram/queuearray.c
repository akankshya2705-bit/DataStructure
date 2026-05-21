#include<stdio.h>
#include<stdlib.h>
#define max 5
int front=-1,rear=-1;
int arr[max];
void enque(int ele)
{
	if(rear==max-1)
	{
		printf("q overflow");
		return;
	}
	if (front==-1)
	{
		front=0;
	}
	rear++;
	arr[rear]=ele;
	printf("%d data insert\n",ele);
}
void deque()
{
	if(front==-1)
	{
		printf("no element\n");
		return;
	}
	printf("delete element=%d\n",arr[front]);
	if(front==rear)
	{
		front=-1;
		rear=-1;
		return;
	}
	front++;
}
void peek()
{
	if(front==-1)
	{
		printf("no element\n");
		return;
	}
	printf("top element=%d\n",arr[front]);

}
void disp()
{
  if(front==-1)
	{
		printf("no element\n");
		return;
	}
  int i=front;
  while (i<=rear)
  {
  	printf("%d\n",arr[i]);
  	i++;
  }
}
void main()
{
	int ch,ele;
	while(1)
	{
		printf("enter your choice\n1.enque\n2.deque\n3.peek\n4.disp\n5.exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1:printf("enter a element \n");
			     scanf("%d",&ele);
			     enque(ele);break;
	    case 2:deque();break;
	    case 3:peek();break;
	    case 4:disp();break;
	    case 5:exit(0);
	    default :printf("invalid choice \n");
		}
	}
}


