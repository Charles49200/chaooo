//Assignment written by
//charles irungu
#include <stdio.h>
int main(void)
{
	int age;
	{
		printf("%s:","enter your age");
		scanf("%d:",&age);

		if(age<18)
		{
			printf("you are  minor");
		}
    	else
	     	if(age<=35)
		{
			printf("you are  youth");
		}
		else
		    if(age<=50)
		{
			printf("you are middle age");
		}
		else
	    	if(age<=70)
		{
			printf("you are an elder");
		}
		else
		    if(age>70)
		{
			printf("you are a senior citizen");
    	}
	}
}
