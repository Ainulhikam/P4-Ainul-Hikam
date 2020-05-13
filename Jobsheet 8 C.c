#include <stdio.h>
int main ()
{
	printf ("Nama : Ainul Hikam \n");
	printf ("Nim : F1B019017 \n");
	printf ("Kelompok : 5 \n");
	
int x[7],i;
printf("masukan 2 angkanimterakhiranda\n\n");
for(i=0;i<=7;i++)
{
printf("Masukkannilai %i : ",i+1);
scanf("%i",&x[i]);
}
printf("\n");
for(i=0;i<=7;i++)
{
printf("nimke-%i= %i\n",i+1,x[i]);
}
printf("\n");
return 0;
}
