#include <stdio.h>


int Stk[100],choice,n,TOP=-1,x,k;

void Push();
void Pop();
void Peep();
void Display();


void main()
{

printf("STACK IMPLEMENTATION");
printf("\nEnter the number of elements in the stack:\n");
scanf("%d",&n);

do{
printf("Enter your choice\n");
printf("1:Push\n2:Pull\n3:Peep\n4:Display\n5:Exit\n");
scanf("%d",&choice);
switch(choice)
{
case 1: Push();
break;
case 2: Pop();
break;
case 3: Peep();
break;
case 4: Display();
break;
case 5: "\n-------------EXIT---------------\n";
break;
default:
printf("\nEnter a valid choice - 1,2,3,4,5");
}

}
while(choice!=5);

}
 
void Push()
{

if(TOP>=n-1)
{printf("\nStack Overflow");}
else
{
printf("\nEnter the number to be entered: \n");
scanf("%d",&x);
TOP++;
Stk[TOP]=x;
}

}

void Pop()
{

if(TOP<0)
{printf("Stack Underflow");}
else
{
printf("%d is popped",Stk[TOP]);
TOP--;
}

}

void Peep()
{

printf("Enter the position of element to be peeped");
scanf("%d",&k);
if(TOP<k-1)
{printf("Stack Underflow");}
else
{
printf("%d is the element at position %d", Stk[k-1],k);
}

}


void Display()
{

if(TOP<0)
{printf("Stack is Empty!");}
else
{
printf("Elements in the stack are:");
for(int j=0;j<n;j++)
{
printf("%d \n",Stk[j]);}

}
}

































