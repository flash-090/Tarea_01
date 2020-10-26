
#include <stdio.h>
#include <math.h>
int main(){
float a;
float b;
float c;
float  r1;
float  r2;
float raiz;
float producto;
float potencia;

printf("Encontraremos las raices del polinomio de segundo grado\n ");
printf("Dame el valor de a:  ");
scanf("%f", &a);
printf("Dame el valor de b: ");
scanf("%f", &b);
printf("Dame el valor de c:");
scanf("%f", &c);	
if (a!=0){
	potencia= pow(b,2);
producto=(potencia-4*a*c);	
raiz=sqrt(producto); 
}
if (a==0){
	printf("No se puede dividir entre 0\n");
}
else{

if (producto<0){		
printf("No se puede realizar la operacion ya que tu raiz es negativa");
	
}
if(producto>0) { 
r1= (-b+raiz)/(2*a);
r2= (-b-raiz)/(2*a);
printf("El valor de la raiz uno es: %.2f\n", r1);
printf("El valor de la raiz dos es: %.2f", r2);	
	
}	
}

}
