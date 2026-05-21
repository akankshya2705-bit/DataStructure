#include<stdio.h>
#include<stdlib.h>
#define max 5
struct MyStack
{
int top;
int arr[max];
};
struct MyStack s;

void push(int ele)
{
  if(s.top==max-1)
  {
  	printf("stack overflow");
  	return;
  }
  s.top=s.top+1;
  s.arr[s.top]=ele;
  printf("%d element push\n",ele);
}
void pop()
{
	if(s.top==-1)
	{
		printf("stack underflow");
		return;
	}
	printf("delete element =%d\n",s.arr[s.top]);
	s.arr[s.top]=0;
	s.top=s.top-1;
}
void peek()
{
	if(s.top==-1)
	{
		printf("stack underflow");
		return;
	}
	
	printf("top element =%d\n",s.arr[s.top]);
	
}
void disp()
{
	if(s.top==-1)
	{
	  printf("stack underflow");
	  return;
	}
	int i=s.top;
	while(i>=0)
	{
		printf("%d\n",s.arr[i]);
		i--;
	}
}
void main()
{
	int ch,ele;
		s.top=-1;
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
