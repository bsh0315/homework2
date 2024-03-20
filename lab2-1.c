#include <stdio.h>
int main()
{
 char charType;
 int integerType;
 float floatType;
 double doubleType;
 
 printf("Size of char: %ld byte\n",sizeof(charType)); 
 //char형식의 변수 charType의 메모리내에서의 크기를 출력한다. 1이 출력된다.
 printf("Size of int: %ld bytes\n",sizeof(integerType)); 
 //int형식의 변수 integerType의 메모리내에서의 크기를 출력한다. 4가 출력된다.
 printf("Size of float: %ld bytes\n",sizeof(floatType)); 
 //float형식의 변수인 floatType의 메모리내에서의 크기를 출력한다. 4가 출력된다.
 printf("Size of double: %ld bytes\n",sizeof(doubleType));
  //double형식의 변수인 doubleType의 메모리내에서의 크기를 출력한다. 8이 출력된다.
 printf("-----------------------------------------\n");
 printf("Size of char: %ld byte\n",sizeof(char)); 
 //char형식의 메모리내 크기를 출력한다. 1이 출력된다.
 printf("Size of int: %ld bytes\n",sizeof(int)); 
 //int형식의 메모리내 크기를 출력한다. 4가 출력된다
 printf("Size of float: %ld bytes\n",sizeof(float)); 
 //float형식의  메모리내 크기를 출력한다. 4가 출력된다.
 printf("Size of double: %ld bytes\n",sizeof(double)); 
 //double형식의 메모리내 크기를 출력한다. 8이 출력된다.
 printf("-----------------------------------------\n");
 printf("Size of char*: %ld byte\n",sizeof(char*)); 
 //포인터 변수 char*의 크기를 출력한다. 현재 64비트 머신이기 떄문에 형식에 관계없이 8이 출력된다.
 printf("Size of int*: %ld bytes\n",sizeof(int*));
 //8이 출력된다.
 printf("Size of float*: %ld bytes\n",sizeof(float*));
 //8이 출력된다.
 printf("Size of double*: %ld bytes\n",sizeof(double*));
 //8이 출력된다.
 return 0;
}
