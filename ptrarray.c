#include<stdio.h>
void print_readings(int *arr, int size)
{
	int *ptr=arr;
	while(ptr<arr+size)
	{
		printf("Address: %p\tvalue: %d\n",(void*)ptr,*ptr);
	       ptr++;
	}
}
int find_max(int *arr, int size)
{
	int *ptr=arr;
	int max= *ptr;
	ptr++;
	while(ptr<arr+size)
	{
		if(*ptr>max)
		{
			max=*ptr;
		}
		ptr++;
	}
	return max;
}
int main()
{
	int readings[8]={23, 27, 31, 26, 22, 35, 29, 24};
	print_readings(readings,8);
	printf("\n Maximum Reading = %d\n", find_max(readings,8));
	return 0;
}

