void mas_int(int A[], int n){
    int i=0;
    for(i=0; i<n; i++){
       printf ("A[%d]=",i+1); scanf("%d", &A[i]);
    }
}
void mas_out(int A[], int n){
    int i=0;
    for(i=0; i<n; i++){
        printf("%d  ",A[i]);
    }
    printf("\n");
}

int mas_min(int A[], int n){
    int min=A[0];
    for(int i=0; i<n; i++){
        if(A[i]<min){min=A[i];}
    }
    return min;
}
int mas_max(int A[], int n){
    int max=A[0];
    for(int i=0; i<n; i++){
        if(A[i]>max){max=A[i];}
    }
    return max;
}
void mas_toq(int A[], int n){
    int toq=A[0];
    int s=0;
    printf("Toqlari:");
    for(int i=0; i<n; i++){
        if(A[i]%2!=0){toq=A[i];
        s+=toq;
           printf("%d ",toq);
        }else printf(" ");
    }
    printf("\n");
    printf("Toqlar yegindisi:%d\n",s);
}
void mas_juft(int A[], int n){
    int juft=A[0];
    int s=0;
    printf("Juftlari:");
    for(int i=0; i<n; i++){
        if(A[i]%2==0){juft=A[i];
        printf("%d ",juft);
        s+=juft;
        }else printf(" ");

    }
    printf("\n");
    printf("Juftlar yegindisi:%d ",s);
}
void mas_manfiy(int A[], int n){
    int manfiy=A[0];
    int s=0;
    printf("\n");
    printf("Manfiylari:");
    for(int i=0; i<n; i++){
        if(A[i]<0){manfiy=A[i];
        s+=manfiy;
           printf("%d ",manfiy);
        }else printf(" ");
    }
    printf("\n");
    printf("Manfiylari yegindisi:%d\n",s);
}
void mas_musbat(int A[], int n){
    int musbat=A[0];
    int s=0;
    printf("Musbat:");
    for(int i=0; i<n; i++){
        if(A[i]>0){musbat=A[i];
        s+=musbat;
           printf("%d ",musbat);
        }else printf(" ");
    }
    printf("\n");
    printf("Musbatlar yegindisi:%d\n",s);
}
int mas_tublar(int n) {
    if (n<=1) {
        return 0;
    }
    if (n==2 || n==3) {
        return 1;
    }
    if (n%2==0 || n%3==0) {
        return 0;
    }
    int i=5;
    while (i*i<=n) {
        if (n%i==0 || n%(i+2)==0) {
            return 0;
        }
        i+=6;
    }

    return 1;
}
void tublarni_chiqarish(int A[], int n) {
    int s=0;
    for (int i = 0; i < n; i++) {
        if (mas_tublar(A[i])) {
            s+=A[i];
            printf("%d ", A[i]);
        }
    }
    printf("\n");
    printf("Tublarni yegindisi:%d",s);
}
