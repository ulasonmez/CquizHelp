#include<stdio.h>
#include<math.h>
#include<conio.h>
// check if the sides adds up.
int isValidLength(int a,int b, int c){
  if(abs(b-c)< a && a< b+c) return 1;
  else if(abs(a-c) < b && b< a+c) return 1;
  else if(abs(a-b ) < c && c < a+b) return 1;
  else return 0;
}
//checks if the sum of angles are 180 degrees.
int isValidAngle(int Aangle,int Bangle,int Cangle){
  if(Aangle>0 && Bangle>0 && Cangle>0 ){
  if(Aangle+Bangle+Cangle==180) return 1;
  }
  else return 0;
}
int main(){
  printf("        A\n");
  printf("       / \\\n");
  printf("      /   \\\n");
  printf("   c /     \\ b \n");
  printf("    /       \\\n");
  printf("   /_________\\\n");
  printf(" B      a     C\n");
  //sides length
  int a,b,c;
  //Angles
  int Aangle,Bangle,Cangle;
printf("Enter the side length of a:\n");
scanf("%d",&a);
printf("Enter the side length of b:\n");
scanf("%d",&b);
printf("Enter the side length of c:\n");
scanf("%d",&c);
printf("Enter the angle of A");
scanf("%d",&Aangle);
printf("Enter the angle of B");
scanf("%d",&Bangle);
printf("Enter the angle of C");
scanf("%d",&Cangle);
//checking if the functions returning 1
if(isValidAngle(Aangle,Bangle,Cangle)==1 && isValidLength(a,b,c) == 1){
  //this is the part we check if an angle is 90 degrees that triangle is Right
if(Aangle == 90 || Bangle==90 || Cangle == 90){
  printf("The triangle is Right ");
  }
  //if one of them is bigger than 90 degrees its gonna be a obtuse triangle
  else if(Aangle>90 || Bangle >90 || Cangle >90){
    printf("The triangle is Obtuse ");
  }
  //and if none of them happens then all angles are less than 90 degrees
  else {
    printf("The triangle is Acute ");
  }
  //we are comparing the sides length so we can say its scalene isosceles or equilateral
  if(a!=b && a!=c){
    printf("and scalene");
  }
  else if((a==b && b!=c) || (b==c && a!=b) || (a==c && b!=a)){
    printf("and isosceles");
  }
  else{
    printf("and Equilateral");
  }
}
//if the isValidLength or isValidAngle isnt returning 1 it will cancel the program.
  else{
    printf("Thats not a valid triangle");
    void exit();
  }
  getch();
return 0;
}
