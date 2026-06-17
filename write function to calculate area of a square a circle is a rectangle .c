#include<stdio.h>
#include<math.h>

float square area (float side);
float circle area (float rad);
float rectangle area (float a , int float b);

  int main () {
      float a = 5.0;
      float b = 10.0;
      printf("area is : %f" , rectangle area a,b);
      return 0;
  }
  
  float square area (float side) {
      return side * side;
  }
  
  float circle area (float rad) {
      return 3.14 * rad * rad;
  }
  
  float rectangle area (float a ,float b) {
      return a * b ;
  }
