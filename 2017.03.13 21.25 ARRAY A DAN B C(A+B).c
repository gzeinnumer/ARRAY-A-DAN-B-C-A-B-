/*
nama    : M Fadli Zein
Nobp    : 1601081035
Kelas   : TK1B
Np      : C(A+B)
*/

#include"stdio.h"
void main()
{
    int A[100],B[100],C[100];
    int jum,i,n;
    printf("Masukan Ukuran : ");scanf("%d",&n);
    printf("\nNilai A :\n");
    for(i=0; i<n; i++)
    {
        printf("Masukan Nilai A Ke-%d : ",i+1); scanf("%d",&A[i]);
    }
    printf("\n\nNilai B :\n");
    for(i=0; i<n; i++)
    {
        printf("Masukan Nilai B Ke-%d : ",i+1); scanf("%d",&B[i]);
    }
    for(i=0; i<n; i++)
    {
        C[i]=A[i]+B[i];/*Penjumlahan*/
    }
    printf("\nHasil Nilai B\n");
    for(i=0; i<n; i++)
    {
        printf("Nilai C Ke-%d : %d\n",i+1,C[i]);
    }
}
