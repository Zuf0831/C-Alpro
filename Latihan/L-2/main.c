#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct Mahasiswa {
        char nama[100];
        }bb[10];
int i,n;
char ser[100];

printf("JURNAL NO 2\n");
printf("Banyak praktikan :");
scanf("%d",&n);
printf("\n");

for(i=0;i<n;i++)
    {
    fflush(stdin);
    printf("Nama Praktikan Ke-%d: ",i);
    fflush(stdin);
    fgets(bb[i].nama,100,stdin);
    }
printf("\n");
printf("Nama yang dicari : ");
fgets(ser,100,stdin);

i=0;
while(i<=n-1 && bb[i].nama!=ser){
i=i+1;
if(strcmp(ser,bb[i].nama)==0)
            {
        printf("\nData ditemukan pada indeks : %d",i);
        break;
if(i==n-1)  {
        printf("\nData tidak ditemukan");
            }
            }
                                }
return 0;
}
