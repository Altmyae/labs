#include <stdio.h>
int main(){
    int k = 1;
    int s;
    int a = 1;
    scanf("%d", &s);
    for(k=1; k<s; ++k){
        if(s%k==0){
            printf("%4d", k);
            a+=k;
            k+=1;

            if((k!=1)&&(k>1)&&((k-1) % 4 !=0)){
                    printf(",%3d", k);
            }

        }
    }
    printf("%3d", a);
}
