#include <stdio.h>
#include <math.h>
int main(){

float Pi=3.141592;
float r,A,P;
printf("Dame el valor de r: ");
scanf("%f", &r);
if (r>0){
 A= pow(r,2)*Pi;
 P= Pi*2*r;
printf("El valor del area es: %f\n ",A );
printf("El valor del perimetro es: %f ",P );
}
else{
printf ("Tu radio es negativo, no se puede ejecutar la operacion");
		
}
	
	
}
	
	
	
	
	
	
	
	

