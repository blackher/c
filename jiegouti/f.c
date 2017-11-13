#include <stdio.h>


struct complex_struct{
  double x,y;
}z1,z2;


struct complex_struct add_complex(struct complex_struct z1,struct complex_struct z2){
  struct complex_struct z; 
  z.x  = z1.x+z2.x;
   z.y = z1.y+z1.y;
   return z;
}

int main()
{
  struct complex_struct z;
  z1.x=2.0;
  z1.y=3.2;
  z2.x=4.2;
  z2.y=3.5;
  z = add_complex(z1,z2);
  
  printf("%f",z.x);
  printf("%f",z.y);
}