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
    int x,y,r,x2=0,y2=0,r2=0;
    int i=1;
    double s;
    char h[100],f1[10],f2[10];

    printf("VVedite koordinati po tipu 'circle(x,y,r),circle(x2,y2,r2)'\n");//(10,10,10)
    gets(h);



    x=readin(h,i,',');
    y=readin(h,i,',');
    r=readin(h,i,')');

    i+=2;

    x2=readin(h,i,',');
    y2=readin(h,i,',');
    r2=readin(h,i,')');

    //printf("%d - %d - X\n%d - %d - Y\n%d - %d - R\n",x,x2,y,y2,r,r2);
    int stx,sty;
    double gi;
    stx=x2-x;
    sty=y2-y;
    gi=sqrt((stx*stx)+(sty*sty));
    printf("%d - stx\n%d - sty\n%f - gi\n%d - r+r2\n",stx,sty,gi,(r+r2));
    if (gi<=(r+r2)) printf("\nYes"); else printf("\nNo");
    s=r*r*M_PI;
    //printf("\n%.14f",s);
    }
