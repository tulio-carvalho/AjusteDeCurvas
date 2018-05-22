//Ajuste de curvas através do método dos mínimos quadrados

#include<stdio.h>
#include<math.h>

#define N 11 // quantidade de linhas do arquivo a ser lido +1	

FILE *fp;

int main()
{
	
	float b,a0,a1,xj=0,xi=0,yi=0,x,y,xy=0;//xi/yi=somatório dos valores individuais de x e y; xy=somatório da multiplicação de x por y;xj=somatório so quadrado de cada valor de x;
	int i;
	
	fp=fopen("dados.dat","r");
	
	for(i=0;i<N;i++) // somatório de todos os valores referentes a x e a y
	{
		fscanf(fp, "%f\t\t%f\n", &x, &y);
		xi=xi+x;
		yi=yi+y;
		xj=xj+ pow(x,2);
		xy=xy+(x*y);
	}
	
	b=N*(xj)-(pow(xi,2));
	
	a0=((xj*yi)-(xy*xi))/b;
	a1=((N*xy)-(xi*yi))/b;
	printf("\n%f\t\t%f\n",a0,a1);
}
