#include <stdio.h>

void main(){
	float n1, n2, n3, mean = 0;
	

	printf("Enter the first grade \n");
	scanf("%f", &n1);

        printf("Enter the second grade \n");
        scanf("%f", &n2);

        printf("Enter the third grade \n");
        scanf("%f", &n3);

	mean = (n1 + n2 + n3)/3;

	printf("the mean is %f", mean);

}
