#include "header.h"
#include<assert.h>
#include<stdio.h>
//#include<assert.h>

float calculator(char ,float ,float);
void test_add(void);
void test_sub(void);
void test_mul(void);
void test_div(void);

int main()
{
    float num1=-4, num2=-5, pow;
    char op;
    printf("Enter [num 1] operator and [num 2]:\n");
    scanf("%f %c %f",&num1,&op,&num2);

    calculator(op,num1,num2);

    test_add();
    test_sub();
    test_mul();
    test_div();
}

float calculator(char op,float num1,float num2)
{
  float result=1,a;

    switch(op)
    {
        case '+':
            result=num1+num2;
            break;

        case '-':
            result=num1-num2;
            break;

        case '*':
            result=num1*num2;
            break;

        case '/':
            result=num1/num2;
            break;

        case '^':
            a=num2;
            while (a!= 0)
              {
                 result *=num1;
                 a--;
              }
              break;

        default:
             printf("Invalid\n");
             //exit (0);
             break;
    }

   printf("%.2f %c %.2f = %.2f\n",num1,op,num2,result);

    return result;
}


void test_add(void)
{
  printf (" Task add using assert: \n");
  assert(calculator('+',-4,-5)==-9);
  printf (" OK add is perfect\n");

}

void test_sub(void)
{
  printf (" Task add using assert: \n");
  assert(calculator('-',-4,-5)==1);
  printf (" OK subtraction is perfect \n");
}

void test_mul(void)
{
  printf (" Task add using assert: \n");

  assert(calculator('*',-4,5)==-20);
  printf (" OK multiplication is perfect\n");


}

void test_div(void)
{
  printf (" Task add using assert: \n");
  assert(calculator('/',-4,-5)==(float)0.8);
  printf (" OK division is perfect\n");
}

