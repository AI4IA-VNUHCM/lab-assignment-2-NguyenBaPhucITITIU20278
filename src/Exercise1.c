/*
1. Write a Taxi meter program to calculate the taxi fare for a given mileage.
	a. The 1st 2km is 15,000 VND
	b. The next 250m will cost 2000 VND
	c. If the travel distance is larger than 30km then each extra km will cost only 5000VND
Receive the travel distance in Km and print the amount of money to be paid
______________________________________
| Input: 32.5                        |
| Output: 251500                     |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	float distance = atof(argv[1]);
	int result;
	//Your codes here
int S,t1=15000,t2,t3;
do
{
printf("Nhap so km: ");
scanf("%f",&distance);
}while(distance<1);
if (distance<=2)
{
t1= (distance*15000)/2;
S+=t1; 
printf("\nSo tien phai tra la: %d",S);	  
}else if(distance>=2 && distance <=30)
{
t2 = (distance-2)*8000;
S=t2+t1; 
printf("\nSo tien phai tra la: %d",S); 
}
else {
 t3 = (distance-30)*5000;
 t2=  (distance-(distance-30)-2)*8000;
S=t1+t2+t3; 
printf("\nSo tien phai tra la: %d",S); 
} 
	return 0;
}
	printf("%d", result);
	return 0;
}
	