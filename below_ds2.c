#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#define MAX 5
int top =-1, stack[MAX];
void push();
void pop();
void display();
//void exit();

void main(){
	
	int ch;
	while(1)
	{
		printf("\n stack menu");
		printf("\n1.push\n2.pop\n3.display\n4.exit");
		printf("\nenter your choice (1-4)");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: push();
			break;
			case 2: pop();
			break;
			case 3: display();
			break;
			case 4: exit(0);
			default: printf("\nwrong choice");
		}
	}
}
void push()
{

	int val;
	if (top==MAX-1)
	{
		printf("\n stack overflow");
	}
	else
	{
		printf("\n enter the element to push:");
		scanf("%d", &val);
		top=top+1;
		stack[top]=val;
		
	}
}

void pop()
{

	if (top==-1)
	{
	
		printf("\n stack is empty");
	}
	else
	{
		printf("\n deleted element is %d", stack[top]);
		top=top-1;
	}
}
void display()
{
	int i;
	if (top==-1)
	{
		printf("\n stack is empty");
	}
	else
	{
		printf("\n stack is ..");
		for (i=top;i>=0;--i)
		printf("%d\n",stack[i]);
	}
}
