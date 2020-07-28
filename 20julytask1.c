#include<stdio.h>

int main() {

	unsigned int i,j,k=1;

	//for loop to print 1 to 10
	printf("1 to 10 using for loop\n");
	for(i;i <=10;i++){
		printf("%d\n",i);
	}

	//while loop to print 1 to 10
	printf("1 to 10 using while loop\n");
	while(j<=10){
		printf("%d\n",j);
		j++;
	}

	//do-while loop to print 1 t0 10
	printf("1 to 10 using do-while  loop\n");
	do{
		printf("%d\n",k);
		k++;
	}
	while(k<=10);

	return 0;
}
