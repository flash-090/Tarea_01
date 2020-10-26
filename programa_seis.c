#include <stdio.h>
int main(){
float a,b,c;
printf("Dame el valor de a: ");
scanf("%f", &a);
printf("Dame el valor de b: ");
scanf("%f", &b);
if(b!=0){
c=a/b;	
printf("El resultado de dividir a/b es: %.2f", c);
		
}
else{
	printf("No se puede ejecutar la division debido a que no se puede divir entre 0");
}










}
