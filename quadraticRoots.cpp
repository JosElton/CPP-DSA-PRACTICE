// NAME:JOSWIN ELTON PINTO, CLASS:CJ , ROLLNUM: CJ006
#include <stdio.h>
#include <math.h>
int main(){
    float a,b,c,root1,root2,real,imag,disc;
    printf("Enter the coefficients: ");
    scanf("%f %f %f",&a, &b, &c);
    disc=b*b-4*a*c;
    if (disc>0){
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("Root-1= %f\nRoot-2= %f\n",root1,root2);
    }
    else if (disc==0){
        root1=-b/(2*a);
        root2=-b/(2*a);
        printf("Root-1= %f\nRoot-2= %f\n",root1,root2);
    }
    else {
        real=-b/(2*a);
        imag=sqrt(-disc)/(2*a);
        printf("Real root= %f\nImaginary root=%f\n",real,imag);
    }
    return 0;
}