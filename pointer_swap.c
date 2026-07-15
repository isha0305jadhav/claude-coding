#include<stdio.h>

void swap(int *a, int *b)
{
   *a= *a+*b;
   *b=*a-*b;
   *a=*a-*b;
 }
 int main()
 {
    int a=18;
    int b=25;
    
    printf("before swapping: address of a : %p value of a: %d   address of b : %p  valude of b: %d", &a, a, &b, b);
    
    swap(&a,&b);
    
    printf(" after swapping: address of a : %p value of a: %d   address of b : %p  valude of b: %d", &a, a,  &b, b);
 }
