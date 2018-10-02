# include <stdio.h>

int main(){
int arreglo1[3][3];
int arreglo2[3][3];
int fila1, columna1,fila2,columna2, burbuja1=0, burbuja2=0;
	printf("Matriz 1 3x3\n");
	for(fila1=0; fila1<3; fila1++){
		for(columna1=0; columna1<3; columna1++){
			printf("Ingrese un numero en la fila %d columna %d: ", fila1+1, columna1+1);
			scanf("%d", &arreglo1[fila1][columna1]);
			
			}
		}
	for(fila1=0; fila1<3; fila1++){
		printf("\n");
		for(columna1=0; columna1<3; columna1++){
			printf("%d\t", arreglo1[fila1][columna1]);
			
			}
		}
		for(fila1=0; fila1<3; fila1++){
			for(columna1=0; columna1<3; columna1++){
				if(arreglo1[fila1][columna1]>arreglo1[fila1+1][columna1+1]){
				burbuja1=arreglo1[fila1][columna1];
					arreglo1[fila1][columna1]=arreglo1[fila1+1][columna1+1];
					arreglo1[fila1+1][columna1+1]=burbuja1;
		
			}
				}
			
		}
		
		
		
			for(fila2=0; fila2<3; fila2++){
		for(columna2=0; columna2<3; columna2++){
			printf("Ingrese un numero en la fila %d columna %d: ", fila2+1, columna2+1);
			scanf("%d", &arreglo2[fila2][columna2]);
			
			}
		}
	for(fila2=0; fila2<3; fila2++){
		printf("\n");
		for(columna2=0; columna2<3; columna2++){
			printf("%d\t", arreglo2[fila2][columna2]);
			
			}
		}
		for(fila2=0; fila2<3; fila2++){
			for(columna2=0; columna2<3; columna2++){
				if(arreglo2[fila2][columna2]>arreglo2[fila2+1][columna2+1]){
				burbuja2=arreglo2[fila2][columna2];
					arreglo2[fila2][columna2]=arreglo2[fila2+1][columna2+1];
					arreglo2[fila2+1][columna2+1]=burbuja2;
		
			}
				}
			
		}	
	printf("\n");
	}
		


