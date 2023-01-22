#include <stdio.h>
#include <math.h>

int diakrinousa(int,int,int);
void rizes(int,int,int,int);

int main(void){
    printf("give a ,b and c of the equation :\n");
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int diak =  diakrinousa(a,b,c);
    rizes(a,b,c,diak);
}

int diakrinousa(int a,int b,int c){
    int sum;
    sum = pow(b,2) +  (-4)*a*c;
    printf("Diakrinousa : %d\n",sum);
    return sum;
}

void rizes(int a,int b,int c,int diak){
    double r1;
    double r2;
    if(diak > 0){
        r1 = ((-1.0) * (double)b + (double)sqrt(diak)) / (2.0 * (double)a);
        r2 = ((-1.0) * (double)b - (double)sqrt(diak)) / (2.0 * (double)a);
        printf("root n.1 : %lf. \nroot n.2 : %lf\n",r1,r2);
    }
    else if(diak == 0){
        r1 = ((-1.0)*(double)b)/(2.0*(double)a);
        r2 = (double)r1 * (-1.0);
        printf("Root is double: +-%lf\n",r1);
    }
    else printf("invalid!\n");
}