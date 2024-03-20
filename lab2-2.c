#include <stdio.h>
int main()
{
int i;
int *ptr;
int **dptr;
i = 1234;
printf("[checking values before ptr = &i] \n");
printf("value of i == %d\n", i);
//i의 값을 출력함.
printf("address of i == %p\n", &i);
//i의 주소를 출력함.
printf("value of ptr == %p\n", ptr);
//ptr이 가지고 있는 값을 출력함. 
printf("address of ptr == %p\n", &ptr);
//ptr의 주소를 출력함.

ptr = &i; /* ptr is now holding the address of i */
printf("\n[checking values after ptr = &i] \n");
printf("value of i == %d\n", i);
//i의 값을 출력함.
printf("address of i == %p\n", &i);
//i의 주소를 출력함.
printf("value of ptr == %p\n", ptr);
//ptr이 가지고 있는 값을 출력함. (i의 주소를 출력)
printf("address of ptr == %p\n", &ptr);
//ptr의 주소를 출력함.
printf("value of *ptr == %d\n", *ptr);
//ptr이 가지고는 i의 주소의 값을 역참조함.

dptr = &ptr; /* dptr is now holding the address of ptr */
printf("\n[checking values after dptr = &ptr] \n");
printf("value of i == %d\n", i);
//i의 값을 출력함.
printf("address of i == %p\n", &i);
//i의 주소를 출력함.
printf("value of ptr == %p\n", ptr);
//ptr의 값을 출력함.(i의 주소)
printf("address of ptr == %p\n", &ptr);
//ptr의 주소를 출력함.
printf("value of *ptr == %d\n", *ptr);
//ptr이 가지고는 i의 주소의 값을 역참조함.
printf("value of dptr == %p\n", dptr);
//dptr의 값을 출력함.(ptr의 주소)
printf("address of dptr == %p\n", &dptr);
//dptr의 주소를 출력함.
printf("value of *dptr == %p\n", *dptr);
//dptr이 가리키는 주소인 ptr의 값을 역참조함.
printf("value of **dptr == %d\n", **dptr);
//dptr이 가리키는 주소가 가리키는 주소인 i의 값을 역참조함.

*ptr = 7777; /* changing the value of *ptr */
printf("\n[after *ptr = 7777] \n");
printf("value of i == %d\n", i);
//i의 값을 출력함.
printf("value of *ptr == %d\n", *ptr);
//ptr이 가리키는 주소인 i의 값을 역참조함.
printf("value of **dptr == %d\n", **dptr);
//dptr이 가리키는 주소가 가리키는 주소인 i의 값을 역참조함.

**dptr = 8888; /* changing the value of **dptr */
printf("\n[after **dptr = 8888] \n");
printf("value of i == %d\n", i);
//i의 값을 출력함.
printf("value of *ptr == %d\n", *ptr);
//ptr이 가리키는 주소인 i의 값을 역참조함.
printf("value of **dptr == %d\n", **dptr);
//dptr이 가리키는 주소가 가리키는 주소인 i의 값을 역참조함.
return 0;

}