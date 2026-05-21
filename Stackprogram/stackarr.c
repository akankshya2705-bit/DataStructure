#include<stdio.h>
#include<stdlib.h>
#define max 5
int top=-1;
int arr[max];
void push(int ele)
{
  if(top==max-1)
  {
  	printf("stack overflow");
  	return;
  }
  top=top+1;
  arr[top]=ele;
  printf("%d element push\n",ele);
}
void pop()
{
	if(top==-1)
	{
		printf("stack underflow");
		return;
	}
	printf("delete element =%d\n",arr[top]);
	arr[top]=0;
	top=top-1;
}
void peek()
{
	if(top==-1)
	{
		printf("stack underflow");
		return;
	}
	
	printf("top element =%d\n",arr[top]);
	
}
void disp()
{
	if(top==-1)
	{
	  printf("stack underflow");
	  return;
	}
	int i=top;
	while(i>=0)
	{
		printf("%d\n",arr[i]);
		i--;
	}
}
void main()
{
	int ch,ele;
	while(1)
	{
		printf("enter your choice\n1.push\n2.pop\n3.peek\n4.disp\n5.exit\n");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    case 1:printf("enter an element\n");
	    	   scanf("%d",&ele);
	    	   push(ele);break;
	    case 2:pop();break;
	    case 3:peek();break;
	    case 4:disp();break;
	    case 5:exit(0);
	    default :printf("invalid choice \n");
	    }	
	}
}
