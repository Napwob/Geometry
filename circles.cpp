#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int readin(char *h,int& i,char el){
    int k=0,coor;
    char ch[100];
    memset(ch, 0, sizeof(ch));
    while(h[i]!=el){
        ch[k]=h[i];
        k++;
        i++;
    }
    coor=atoi(ch);
    i++;
    return coor;
}


int main()
{
    int x[100],y[100],r[100],en=0,number=0,error=0;
    int i=0;
    double s;
    char h[100],f[6],f1[]={"circle"};;



    while(en==0){
    i=0;
    error=0;
    printf("%d. ",number);
    gets(h);


    while(h[i]!='('){
        f[i]=h[i];
        if(f[i]!=f1[i]) error++;
        i++;
    }

    if(error==0)
    {
    i++;

    x[number]=readin(h,i,',');
    y[number]=readin(h,i,',');
    r[number]=readin(h,i,')');


    printf("%d - X\n%d - Y\n%d - R\n",x[number],y[number],r[number]);
    number++;
    } else {
        printf("Error: unknown shape ");
        puts(f);
        printf("\n");
        }
    error=0;
    }



    //s=r*r*M_PI;
   // printf("\n%.14f\n",s);
   // int stx,sty;
   // double gi;
   // stx=x2-x;
   // sty=y2-y;
   // gi=sqrt((stx*stx)+(sty*sty));
   // printf("%d - stx\n%d - sty\n%f - gi\n%d - r+r2\n",stx,sty,gi,(r+r2));
   // if (gi<=(r+r2)) printf("\nYes"); else printf("\nNo");
    }
