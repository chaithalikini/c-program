#include <stdio.h>
#include <math.h>
 	#include<stdlib.h>
      #define PI 3.14159265
      struct Calculator
      {
          double num1;
          double num2;
      };
       double addition(double num1, double num2)
      {
          return num1 + num2;
      }
double subtraction(double num1, double num2)
{
    		return num1 - num2;
}
double multiplication(double num1, double num2)
{
    		return num1 * num2;
}
double division(double num1, double num2)
{
    		if (num2 != 0)
    		{
    			return num1 / num2;
    		}
    		else
    		{
    			printf("Error: Division by zero not possible!\n");
    			return 0;
    		}
}
double square(double num1)
{
    		return (num1*num1);
}
double squareroot(double num1)
{
   		 return sqrt(num1);
}
double cube(double num1)
{
    		return (num1*num1*num1);
}
double cuberoot(double num1)
{
   		 return cbrt(num1);
}
double exponential(double num1)
{
    		return exp(num1);
}
double logarithm(double num1)
{
     		return log10(num1);
}
double sine(double num1,char mode)
{ 
      if (mode == 'd' || mode == 'D')
    		{
        	return sin(num1 * (PI / 180)); // Convert degrees to radians
    		} 	
           	else if (mode == 'r' || mode == 'R') 
           {
        		return sin(num1); // Already in radians
     		} 
      else 
      {
         		printf("Error: Invalid mode!\n");
            }
}
double cosine(double num1,char mode)
{
     	if (mode == 'd' || mode == 'D') 
{
        return cos(num1 * (PI / 180)); // Convert degrees to radians
    	} 
else if (mode == 'r' || mode == 'R')
{
        return cos(num1); // Already in radians
    	} 
else 
{
        printf("Error: Invalid mode!\n");
      }
}
double tangent(double num1,char mode)
{  
     if (mode == 'd' || mode == 'D') {
        return tan(num1 * (PI / 180)); // Convert degrees to radians
    } else if (mode == 'r' || mode == 'R') {
        return tan(num1); // Already in radians
    } else {
        printf("Error: Invalid mode!\n");
       
    }
}
double power(double num1,double num2)
{
    		return pow(num1,num2);
}
double factorial(double num1)
{
if(num1 == 0 || num1==1)
   return 1;
    else
    return num1*factorial(num1-1);
}






  int main()
{
    struct Calculator calc;
    int choice;
    char mode;
   




while(1)
    {
        printf("|*******************************************************************************|\n");
        printf("|\t\t\t\t\t\t\t\tCALCULATOR\t\t\t\t\t\t\t\t\t\t|\n");
        printf("|*******************************************************************************|\n");
        printf("|ARITHMETIC\t\t|\tTRIGNOMETRIC\t|\tEXPONENTIAL\t\t|\tLOGARITHMIC\t\t|\n");
        printf("|1. Addition\t\t|\t5. Sine\t\t\t|\t9. Exponential\t|\t11.Logarithm\t|\n");
        printf("|2. Subtraction\t\t|\t6.Cosine\t\t|\t10. Square\t\t|\t*SIGMA\t\t\t|\n");
        printf("|3. Multiplication\t|\t7. Tangent\t\t|\t11.Square Root\t|\t*LAN\t\t\t|\n");
        printf("|4. Division\t\t|8.INTEGRATION\t\t|\t12.CUBE\t\t\t|\t*FACTORIAL\t\t|\n");
        printf("|\t\t\t\t\t|*DIFFERENTIATION\t|\t13.CUBEroot\t\t|\t\t\t\t\t|\n");
        printf("|\t\t\t\t\t|\t*INVERSE\t\t|\t*POWER\t\t\t|\t\t\t\t\t|\n");
        printf("\nEnter 0 to exit\n");
        printf("Enter your choice (0-10): ");
        scanf("%d", &choice);




switch (choice)
        {
        case 0: exit(0);
                break;
        case 1: printf("Enter two numbers: ");
                scanf("%lf %lf", &calc.num1, &calc.num2);
                printf("Addition of %lf+%lf = %f\n\n",calc.num1,calc.num2,addition(calc.num1,calc.num2));
                break;
        case 2: printf("Enter two numbers: ");
                scanf("%lf %lf", &calc.num1, &calc.num2);
                printf("Subraction of %lf-%lf = %f\n\n", calc.num1,calc.num2,subtraction(calc.num1,calc.num2));
                break;
        case 3: printf("Enter two numbers: ");
                scanf("%lf %lf", &calc.num1, &calc.num2);
                printf("Multiplication of %lf*%lf =%f\n\n", calc.num1,calc.num2,multiplication(calc.num1,calc.num2));
                break;
        case 4: printf("Enter two numbers: ");
                scanf("%lf %lf", &calc.num1, &calc.num2);
                printf("Division of %lf/%lf = %f\n\n",calc.num1,calc.num2, division(calc.num1,calc.num2));
                break;
        case 5: printf("Enter a mode (d/r for degrees/radians): ");
                scanf(" %c", &mode);
                printf("Enter a number: ");
                scanf("%lf", &calc.num1);
                printf("Sine of %lf = %f\n\n", calc.num1, sine(calc.num1, mode));
                break;


        case 6:printf("Enter a mode (d/r for degrees/radians): ");
                scanf(" %c", &mode);
                printf("Enter a number: ");
                scanf("%lf", &calc.num1);
                printf("Cosine of %lf = %f\n\n", calc.num1, cosine(calc.num1,mode));
                break;
        case 7:printf("Enter a mode (d/r for degrees/radians): ");
                scanf(" %c", &mode);
                printf("Enter a number  : ");
                scanf("%lf", &calc.num1);
                if(calc.num1==90 && 270)
                {
                    printf("NOT DEFINED\n\n");
                }
                else
                {
                printf("Tangent of %lf = %f\n\n", calc.num1, tangent(calc.num1,mode));
                }
                break;


        case 8: printf("Enter a number: ");
                scanf("%lf", &calc.num1);
                printf("Exponential of %lf =%f\n\n", calc.num1,exponential(calc.num1));
                break;
        case 9: printf("Enter a number: ");
                scanf("%lf", &calc.num1);
                printf("Square of %lf =%f\n\n", calc.num1, square(calc.num1));
                break;
        case 10:    printf("Enter a number: ");
                scanf("%lf", &calc.num1);
                if(calc.num1>0)
                {
                printf("SquareRoot of %lf =%f\n\n", calc.num1 ,squareroot(calc.num1));
                }
                else
                {
                   printf("ERROR\n\n");
                }
                break;
        case 11:printf("Enter a number: ");
                scanf("%lf", &calc.num1);
                printf("Cube of %lf =%f\n\n", calc.num1, cube(calc.num1));
                break;
      case 12:printf("Enter a number: ");
              scanf("%lf", &calc.num1);
              if(calc.num1>0)
              {
              printf("CubeRoot of %lf = %f \n\n" ,calc.num1 ,cuberoot (calc.num1)); 
                }
                else
                {
                   printf("ERROR\n\n");
                }
        case 13:printf("Enter the base number:");
                scanf("%lf",&calc.num1);
                printf("Enter the exponential number:");
                scanf("%lf",&calc.num2);
                printf("%lf raised to the power %lf is %lf",power(calc.num1,calc.num2));
        case 14:    printf("Enter a number: ");
                scanf("%lf", &calc.num1);
                if(calc.num1>0){
                printf("Logarithm of %lf =%f\n\n", calc.num1,logarithm(calc.num1));}
                else{
                    printf("ERROR\n\n");
                }
                break;


        case 20:printf("Enter a number:");
                scanf("%lf",calc.num1);
                if(calc.num1<0){
                printf("INVALID");
                }else{
                printf("Factorial of %lf = %lf",calc.num1,factorial(calc.num1));
                }
           


        default:
                printf("Invalid choice!\n");
                break;
        }
    }
    return 0;
}