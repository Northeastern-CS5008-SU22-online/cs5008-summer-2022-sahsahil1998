//Sahil Sah
//sah.sa@northeastern.edu
#include<stdio.h>
int main()
{
    double a,b,c;
    int choice;
    
    printf("Enter your choice\n");
    printf(" 1. Addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
    scanf("%d",&choice);
    
    printf("Enter a and b values: ");
    scanf("%lf %lf", &a, &b);
    
    switch (choice){
     case 1:	
	c = a + b;
	printf("Addition\n");
	printf("Sum= %.2lf\n",c);
	break;

     case 2:
        c = a - b;
        printf("Subtraction\n");
        printf("Difference= %.2lf\n",c);
        break;


     case 3:
        c = a * b;
        printf("Multiplication\n");
        printf("Product= %.2lf\n",c);
        break;

     case 4:
        c = a / b;
        printf("Division\n");
        printf("Quotient= %.2lf\n",c);
        break;

     default:
	printf("Please select from list of choices");
	break;	
     }	    
           
    return 0;
}
