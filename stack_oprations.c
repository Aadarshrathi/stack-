#include<stdio.h>
#include<stdlib.h>

 struct stack
 {
     int size ;
     int top;
     int *arr;
 };
  int isEmpty(struct stack*ptr)
 {
     if(ptr->top==-1){
     return 1;
     }
     else{
         return 0;
     }
 }
 int isFull(struct stack*ptr){
     if (ptr->top == ptr->size-1)
     {
         return 1;
     }
     else
     {
         return 0;
     }
 }
void push(struct stack*ptr,int val){
    if (isFull(ptr))
    {
        printf("stack overflow! can not push %d to the stack \n,val");
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;
    }

}
  int main ()
  {
      struct stack* sp=(struct stack* )malloc(sizeof(struct stack));
      sp->size=10;
      sp->top=-1;
      sp->arr=(int*)malloc(sp->size*sizeof(int));
      printf("size has been created successfully\n");

      printf(" before pushing, Full:%d\n",isFull(sp));
      printf(" before pushing, Empty:%d\n",isEmpty(sp));
      push(sp,56);
     push(sp,554);
     push(sp,765);
     push(sp,326);
     push(sp,9876);
     push(sp,426);
     push(sp,346);
     push(sp,226);
      


      printf(" after pushing, Full:%d\n",isFull(sp));
      printf("after pushing, Empty:%d\n",isEmpty(sp));
      
      return 0;
  }