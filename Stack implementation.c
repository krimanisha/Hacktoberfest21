
#include <stdio.h>

#define max 3
int arr[max],top=-1;
int push(int arr[],int val);
int pop(int arr[]);
int peek(int arr[]);
int display(int arr[]);


int main()
{
	int val,choice;
	do
	{
		printf("\n,,,,,,,,,,,,,,,MAIN MENU,,,,,,,,,,,,,,\n");
		printf("1. PUSH\n");
		printf("2. POP\n");
		printf("3. PEEK\n");
		printf("4. DISPLAY\n");
		printf("5. EXIT\n");
		printf("\nENTER YOUT CHOICE : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the element you want to add : ");
				scanf("%d",&val);
				push(arr,val);
				break;
			case 2:
				val=pop(arr);
				if (val!=-1)
				{
					printf("The value deleted is : %d\n",val);
				}
				break;
			case 3:
				val=peek(arr);
				if (top!=-1)
				{
					printf("The element at stack's top : %d\n",val);
					break;
				}
			case 4:
				display(arr);
				break;
		}
	}
	while (choice !=5);
}
	int push(int arr[],int val)
	{
		if (top==(max-1))
		{
		printf("\nSTACK IS OVERFLOW\n");
		}
		else
		{
			top++;
			arr[top]=val;
			printf("\n%d\n",top);
		}
		return 0;
	}
	
	int pop(int arr[])
	{
		int val;
		if (top==-1)
		{
			printf("\nSTACK IS UNDERFLOW\n");
			return -1;
		}
		else
		{
			val=arr[top];
			top--;	
			return val;
		}
		return 0;
	}
	
	int peek(int arr[])
	{
		if (top==-1)
		{
			printf("\nSTACK IS EMPTY\n");
			return -1;
		}
		else
		{
			return arr[top];
		}
		return 0;
	}
	
	int display(int arr[])
	{
		if (top==-1)
		{
			printf("\nSTACK IS EMPTY\n");
			return -1;
		}
		else
		{
			printf("\nFROM TOP TO BOTTOM\n");
			int x;
			for(x=top;x>=0;x--)
			{
				printf("%d",arr[x]);
				printf("\n");
			}
		}
		return 0;
	}
	

