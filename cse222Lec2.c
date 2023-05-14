#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "demo4.h" // for MyStruct class

int main() {

struct MyStruct s1; //node for project is structure  
s1.v1 = 10;
s1.v2 = 9.9;

struct MyStruct* s2;
s2 = (struct MyStruct*)malloc(sizeof(structMystruct));
s2->v1 = 12;
s2->v2 = 8.8;
free(s2);


  float x = 100;
  float* p = &x;

  // float * p1 = null;  other way to define 
  //float *p2

  *p = 99; // change x to 99 then p

  int arr[] = {1, 3, 5, 7};
  // assign address of array  to p1 two different ways
  int* p1 = arr;
  int* p2 = &(arr[0]);

  *p1 = 2;
  *(p1+1) = 4;
  *(p1+2) = 6;
  *(p1+3) = 8;

  // *p1 = 2; p1++; ++p1;  no difference only if you want return value 

printf(p1);
  return 0;
  
}