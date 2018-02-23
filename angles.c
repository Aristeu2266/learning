#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a, b, c, d, e, f, g;
    int h = 0;
    char sct;

    printf("Insert an angle\n");
        scanf(" %d", &a);

        if( a > 360 ){
            h = a;
            f = a % 360;
            a = f;
        }

        if((a>0)&&(a!=0)&&(a!=90)&&(a!=180)&&(a!=270)&&(a!=360)){
    printf("Sine or Cosine? (s/c)\n");
        scanf(" %c", &sct);
        printf("\n");
        }else if(a<0){
            printf("wtf?\n");
        }

        if( h != 0 ){
            a = h;
        }

//1º quadrant
    if((a>0)&&(a<90)){
        b = a;
        c = 180 - a;
        d = 180 + a;
        e = 360 - a;

        if( (sct == 's') || (sct == 'S') ){

            printf(" Sin %d  =  Sin %d\n-Sin %d = -Sin %d\n", a, c, e, d);

        }else if ( (sct == 'c') || (sct == 'C') ){

                printf(" Cos %d  =  Cos %d\n-Cos %d = -Cos %d\n", a, e, c, d);

            }else{
            printf("sorry?\n");
            }
    }else
//2º quadrant
    if( (a>90)&&(a<180) ){
        b = 180 - a;
        c = a;
        d = 360 - a;
        e = 180 + a;

        if( (sct == 's') || (sct == 'S') ){

            printf(" Sin %d = Sin %d\n-Sin %d = -Sin %d\n", a, b, d, e);

        }else if ( (sct == 'c') || (sct == 'C') ){

                printf("-Cos %d = -Cos %d\n Cos %d = Cos %d\n", a, d, b, e);

            }else{
            printf("sorry?\n");
            }
    }else
//3º quadrant
    if( (a>180)&&(a<270) ){
        b = a - 180;
        c = 360 - a;
        d = a;
        e = 360 - b;

        if( (sct == 's') || (sct == 'S') ){

            printf("-Sin %d = -Sin %d\n Sin %d = Sin %d\n", a, e, c, b);

        }else if ( (sct == 'c') || (sct == 'C') ){

                printf("-Cos %d = -Cos %d\n Cos %d = Cos %d\n", a, c, e, b);

            }else{
            printf("sorry?\n");
            }
    }else
//4º quadrant
    if( (a>270)&&(a<360) ){
            b = 360 - a;
            c = a - 180;
            d = 360 - c;
            e = a;

        if( (sct == 's') || (sct == 'S') ){

            printf("-Sin %d = -Sin %d\n Sin %d = Sin %d\n", a, d, b, c);

        }else if ( (sct == 'c') || (sct == 'C') ){

                printf(" Cos %d = Cos %d\n-Cos %d = -Cos %d\n", a, b, d, c);

            }else{
            printf("sorry?\n");
            }
    }else
//acutes
    if(a==0){
        printf("\nThe cosine of 0(360) is equal to 1 and\nThe cosine of 180 = -1\nBoth sines equals to 0 though\n");
    }else

    if(a==90){
        printf("\nThe sine of 90 is equal to 1 and\nThe sine of 270 = -1\nBoth cosines equals to 0 though\n");
    }else

    if(a==180){
        printf("\nThe cosine of 180 is equal to -1 and\nThe cosine of 0(360) = 1\nBoth sines equals to 0 though\n");
    }else

    if(a==270){
        printf("\nThe sine of 270 is equal to -1 and\nThe sine of 90 = 1\nBoth cosines equals to 0 though\n");
    }else

    if(a==360){
        printf("\nThe cosine of 360(0) is equal to 1 and\nThe cosine of 180 = -1\nBoth sines equals to 0 though\n");
    }else
//>360
    if(a>360){
        h = a;
        f = a % 360;
        g = a / 360;
        a = f;
//1º quadrant
    if((a>0)&&(a<90)){
            b = a;
            c = 180 - a;
            d = 180 + a;
            e = 360 - a;

        if( (sct == 's') || (sct == 'S') ){

            printf("%d is congruent to %d\nIt turned %d times\n\n", h, a, g);
            printf(" Sin %d  =  Sin %d\n-Sin %d = -Sin %d\n", a, c, e, d);

        }else if ( (sct == 'c') || (sct == 'C') ){

                printf("%d is congruent to %d\nIt turned %d times\n\n", h, a, g);
                printf(" Cos %d  =  Cos %d\n-Cos %d = -Cos %d\n", a, e, c, d);

            }else{
            printf("sorry?\n");
            }
    }else
//2º quadrant
    if( (a>90)&&(a<180) ){
            b = 180 - a;
            c = a;
            d = 360 - a;
            e = 180 + a;

        if( (sct == 's') || (sct == 'S') ){

            printf("%d is congruent to %d\nIt turned %d times\n\n", h, a, g);
            printf(" Sin %d = Sin %d\n-Sin %d = -Sin %d\n", a, b, d, e);

        }else if ( (sct == 'c') || (sct == 'C') ){

                printf("%d is congruent to %d\nIt turned %d times\n\n", h, a, g);
                printf("-Cos %d = -Cos %d\n Cos %d = Cos %d\n", a, d, b, e);

            }else{
            printf("sorry?\n");
            }
    }else
//3º quadrant
    if( (a>180)&&(a<270) ){
            b = a - 180;
            c = 360 - a;
            d = a;
            e = 360 - b;
        if( (sct == 's') || (sct == 'S') ){

            printf("%d is congruent to %d\nIt turned %d times\n\n", h, a, g);
            printf("-Sin %d = -Sin %d\n Sin %d = Sin %d\n", a, e, c, b);

        }else if ( (sct == 'c') || (sct == 'C') ){

                printf("%d is congruent to %d\nIt turned %d times\n\n", h, a, g);
                printf("-Cos %d = -Cos %d\n Cos %d = Cos %d\n", a, c, e, b);

            }else{
            printf("sorry?\n");
            }
    }else
//4º quadrant
    if( (a>270)&&(a<360) ){
            b = 360 - a;
            c = a - 180;
            d = 360 - c;
            e = a;

        if( (sct == 's') || (sct == 'S') ){

            printf("%d is congruent to %d\nIt turned %d times\n\n", h, a, g);
            printf("-Sin %d = -Sin %d\n Sin %d = Sin %d\n", a, d, b, c);

        }else if ( (sct == 'c') || (sct == 'C') ){

                printf("%d is congruent to %d\nIt turned %d times\n\n", h, a, g);
                printf(" Cos %d = Cos %d\n-Cos %d = -Cos %d\n", a, b, d, c);

            }else{
            printf("sorry?\n");
            }
    }else
//acute
    if(a==90){
        printf("\n%d is congruent to %d\nIt turned %d times\n\n", h, a, g);
        printf("The sine of 90 is equal to 1 and\nThe sine of 270 = -1\nBoth cosines equals to 0 though\n");
    }else

    if(a==180){
        printf("\n%d is congruent to %d\nIt turned %d times\n\n", h, a, g);
        printf("The cosine of 180 is equal to -1 and\nThe cosine of 0(360) = 1\nBoth sines equals to 0 though\n");
    }else

    if(a==270){
        printf("\n%d is congruent to %d\nIt turned %d times\n\n", h, a, g);
        printf("The sine of 270 is equal to -1 and\nThe sine of 90 = 1\nBoth cosines equals to 0 though\n");
    }else

    if(a==360){
        printf("\n%d is congruent to %d\nIt turned %d times\n\n", h, a, g);
        printf("The cosine of 360(0) is equal to 1 and\nThe cosine of 180 = -1\nBoth sines equals to 0 though\n");
    }
}

    return 0;
}
