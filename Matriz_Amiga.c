#include <stdio.h>
int main(){
int fil, col,suma1, suma2, suma3, suma4, suma5, suma6, suma7, suma8;

int arreglo[3][3];
printf("Matriz 3x3\n");
for(fil=0; fil<3; fil++){
	for(col=0; col<3; col++){
		printf("Ingrese un numero en la fila %d columna %d: ", fil+1,col+1);
		scanf("%d", &arreglo[fil][col]);
		}
	}
		for(fil=0; fil<3;fil++){
			printf("\n");
			for(col=0; col<3; col++){
				printf("%d\t", arreglo[fil][col]);
				
				
				}
			
			
			}
			for( fil=0; fil<3; fil++){
				for( col=0; col<3; col++){
					suma1=(arreglo[0][0])+(arreglo[0][1])+(arreglo[0][2]);
					suma2=(arreglo[1][0])+(arreglo[1][1])+(arreglo[1][2]);
					suma3=(arreglo[2][0])+(arreglo[2][1])+(arreglo[2][2]);
					suma4=(arreglo[0][0])+(arreglo[1][0])+(arreglo[2][0]);
					suma5=(arreglo[0][1])+(arreglo[1][1])+(arreglo[2][1]);
					suma6=(arreglo[0][2])+(arreglo[1][2])+(arreglo[2][2]);
					suma7=(arreglo[0][0])+(arreglo[1][1])+(arreglo[2][2]);
					suma8=(arreglo[2][0])+(arreglo[1][1])+(arreglo[0][2]);
					}
				
				}
	if(suma1==suma2 && suma1==suma3 && suma1==suma4 && suma1==suma5 && suma1==suma6 && suma1==suma7 && suma1==suma8){
		printf("La matriz ingresada es una Matriz Amiga");
		
		}
		return 0;
	
	}



