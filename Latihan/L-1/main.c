#include <stdio.h>
#include <stdlib.h>

int a[100];
int i;
int n,data,idx,bawah,atas,tengah;

void main (){
printf("JURNAL NOMOR 1\n");
printf("Banyak data : ");
scanf("%d",&n);
for (i=0;i<=n-1;i++)
    {
    printf("Data ke-%d : ",i);
    scanf("%d",&a[i]);
    }
printf("\nData yang dicari : ");
scanf("%d",&data);
    bawah=1;
    atas=n;
    idx=0;
while ((bawah<=atas) && (idx==0))
    {
        tengah=(bawah+atas)/2;
    if (a[tengah]==data)
        idx=tengah;
    else if (a[tengah]<data)
        bawah=tengah+1;
    else
        atas=tengah-1;
    }
    if (idx!=0)
        printf("\nData ditemukan pada indeks : %d",idx);
    else
        printf  ("\nData tidak ditemukan");
return 0;
}
