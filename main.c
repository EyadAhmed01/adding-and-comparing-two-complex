#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct {
    float real;
    float img;
} complex;


complex add_Complex (complex a ,complex b,complex c)
{
    complex add;
    add.real=a.real+b.real+c.real;
    add.img=a.img+b.img+c.img;
    return add;

}
void print_Complex (complex a)
{
    printf("%.2f+%.2fi",a.real,a.img);
}
complex read_Complex(complex a)
{
    printf("Real Part of complex number : ");
    scanf("%f",&a.real);
    printf("imaginary Part of complex number : ");
    scanf("%f",&a.img);
    return a;

}
int Compare_Complex (complex a, complex b,complex c)
{
    float j,m,n,max;
    j=sqrt(pow(a.real,2)+pow(a.img,2));
    m=sqrt(pow(b.real,2)+pow(b.img,2));
    n=sqrt(pow(c.real,2)+pow(c.img,2));
    max=j;
    if(m>j&&m>n)
        max=m;
    else if(n>j&&n>m)
        max=n;
    if(max==n) return 3;
    if(max==m) return 2;
    if(max==j) return 1;
    if(m==n && n==j) return 0;



}
int main()
{
    int i;
   complex a;complex b;complex c;complex add;
   printf("first complex number \n");
   a=read_Complex(a);
    printf("second complex number \n");
   b=read_Complex(b);
    printf("third complex number \n");
   c=read_Complex(c);
   add=add_Complex(a,b,c);
   printf("sum of the three numbers is ");
   print_Complex(add);
   printf("\n");
   printf("biggest number is ");
   i=Compare_Complex(a,b,c);
   if(i==1) print_Complex(a);
   else if(i==2) print_Complex(b);
   else if(i==3) print_Complex(c);
}
