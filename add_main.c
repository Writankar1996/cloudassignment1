#include "add_def.c"
int main(){
	int a=0;
	int b=0;
	printf("Enter first number\n");
	scanf("%d",&a);
	printf("Enter second number\n");
	scanf("%d",&b);
	printf("Sum = %d\n",sum(a,b));
	return 0;
}
