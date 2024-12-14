#include<stdio.h>
#include<math.h>
int main(){
    int n,da=0,dd=-9999;
    float tbn=1,tich=1,smax=0;
    scanf("%d",&n);
    float a[n];
    for(int i=0;i<n;i++){
        scanf("%f",&a[i]);
        if (sin(a[i]*3.14/180)>smax){
            smax=sin(a[i]*3.14/180);
        }
        if(a[i]<=0){
            da++;
        }
        else{
            dd++;
            tich*=a[i];
        }
    }
    if(da==n){
        printf("Khong co so duong");
    }
    else{
        tbn=pow(tich,1.0/dd);
        printf("tb nhan la =%f\n",tbn);
        printf("Sin max =%f\n",smax);
    }
    getchar();
    char xau='x';
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            printf("khong là dd tăng");
            goto end;
        }
    }
    printf("Là dd tang");
    end:
}