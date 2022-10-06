#include <stdio.h>
int main(void) {
long int i, k, t, l, b, s;
b=0;
s=0;
for(i=304; i<=305; i++){
    t=0;

    printf("%d  ", i);
     for (l=2; l<i; l++){
        if (i%l == 0){
            l++;}}
    for (k=2; k<i; k++){

            if (i%k == 0){
                t++;

            if (t==1)
            printf("%3d", k);

            if ((t!=l)&&(t>1)&&((t-1) % 4 !=0)){
                    printf(",%3d", k);
            }

            if ((t!=l)&&(t!=1)&&((t-1) % 4 ==0)){
            printf(",\n     ");
            printf("%3d", k);
            }

            }
                        }
   if(t == 0) {
    printf("%21d", t);
   }
   if ((t != 0)&&(t%4 == 0)) {
    printf("%6d", t);
   }

   if(t%4 == 1) {
    printf("%18d", t);
   }
   if(t%4 == 2) {
    printf("%14d", t);
   }
    if(t%4 == 3) {
    printf("%10d", t);
   }

    printf("\n");
    if (b<=t) {
    b=t;
    s=i;
    }
}
printf("\n");
printf("%d\n",s);
return 0;
}
