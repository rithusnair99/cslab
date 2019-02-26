#include<stdio.h>
void main()
{
	float time;
	printf("enter time");
	scanf("%f",&time);
	if(time>=2.0&&time<=3.0)
		printf("person is highly efficient");
	if(time>=3.0&&time<=4.0)
		printf("person should improve his efficiency");
	if(time>=4.0&&time<=5.0)
		printf("person need training to improve efficiency");
	if(time>=5.0)
		printf("person will be terminated");
}
