#include<stdio.h>
void main()
{
	int ramage,shyamage,ajayage,small;
	printf("enter ages of Ram,Shyam,Ajay");
	scanf("%d%d%d",&ramage,&shyamage,&ajayage);
	small=ramage;
	if(shyamage<small)
		small=shyamage;
	if(ajayage<small)
		small=ajayage;
	if(small==ramage)
			printf(" ram is youngest");
	if(small==shyamage)
			printf(" shyam is youngest");
	if(small==ajayage)
			printf("ajay is youngest");
		
	
}
