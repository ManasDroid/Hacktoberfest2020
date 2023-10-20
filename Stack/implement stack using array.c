/* 
int Stack[SIZE], top = -1;
Above variables are used for Stack, SIZE and top and all are global variables. */
// Function to check if stack is full.
int isFull()
{
  if(top==SIZE-1)
    return 1;
  return 0;
}
// Function to check if stack is empty.
int isEmpty()
{
	if(top==-1)
      return 0;
  return 1;
}
// Function to add an item to stack.
int push(int item)
{
  if(isFull()==0&&top<SIZE)
  {
    top+=1;
  	Stack[top]=item;
    return Stack[top];
  }
}
// Function to remove an item from stack.
int pop()
{
  if(isEmpty()==1&&top!=-1)
  {
    int x=Stack[top];
  	top-=1;
    return x;
  }
 return -1;
}
