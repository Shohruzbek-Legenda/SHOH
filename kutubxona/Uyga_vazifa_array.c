#include<stdio.h>
#include"Shohruz.h"

int main(){
    int A[100], n;
    printf("n="); scanf("%d", &n);
    mas_int(A,n);
    mas_out(A,n);
    printf("Min=%d\n",mas_min(A,n));
    printf("Max=%d\n",mas_max(A,n));
    mas_toq(A,n);
    mas_juft(A,n);
    mas_manfiy(A,n);
    mas_musbat(A,n);
    for (int i = 0; i < n; i++) {
    }
    printf("Tub sonlar: ");
    tublarni_chiqarish(A,n);
}
