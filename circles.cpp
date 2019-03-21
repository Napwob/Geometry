#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int readin(char* h, int& i, char el)
{
    int k = 0, coor;
    char ch[100];
    memset(ch, 0, sizeof(ch));
    while (h[i] != el) {
        ch[k] = h[i];
        k++;
        i++;
    }
    coor = atoi(ch);
    i++;
    return coor;
}

int main()
{
    int x, y, r, en = 0, error = 0, errorcounter = 0;
    int i;
    double s;
    char h[1000], f1[] = { "circle" };

    while (en == 0) {
        printf("Please, enter 'circle(x,y,r)'\n");
        gets(h);

        for (i = 0; i < 6; i++) {
            if (h[i] != f1[i]) {
                error++;
            }
        }
        if (error == 0) {
            i = 7;
            x = readin(h, i, ',');
            y = readin(h, i, ',');
            r = readin(h, i, ')');
        }

        if (error == 0 && x != 0 && y != 0 && r != 0) {
            double s, p;
            s = r * r * M_PI;
            p = 2 * M_PI * r;

            printf("Type of Figure: ");
            puts(f1);
            printf("%d - X\n%d - Y\n%d - R\n", x, y, r);
            printf("Area = %.4f\n", s);
            printf("Perimeter= %.4f", p);

            en++;
        }
        else {
            printf("Error: unknown shape or wrong coordinates\n");
        }
        error = 0;
    }
}


