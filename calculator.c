#include<stdio.h>
#include<math.h>
int main(){
  int a,b,n;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
        printf("enter 1 for sum, 2 for substraction , 3 for multiplication , 4 for division");
	scanf("%d",&n);
	switch(n){
		case 1:
			{printf("sum of numbers is %d",(a+b));}
			break;
		case 2:
		       {printf("substraction of two numbers is %d",fabs(a-b));}
		    break;
                case 3:
			printf("Multiplication of numbers is %d", a*b);
			break;
                case 4:
			printf("Division of numbers is %d", a/b);
			break;
	}
	return 0;
}
