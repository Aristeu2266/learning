#include <stdio.h>
#include <stdlib.h>

int main()
{

    	int a, b, c, d, e;

	printf("se nao souber um termo coloque 0 (0 nao pode ser o primeiro nem ultimo termo)\n");
	printf("A1 = ");
		scanf("%d", &a);
	printf("An = ");
		scanf("%d", &b);
	printf("R = ");
		scanf("%d", &c);
	printf("N = ");
		scanf("%d", &d);
			printf("\n");

	if(a==0){
		a = (d - 1) * (-c) + b;

		printf("A1 = %d", a);
		printf("\n");
	}

	if(b==0){
		b = a + (d - 1) * c;

		printf("An = %d", b);
		printf("\n");
	}

	if(c==0){
		c = (b - a) / (d - 1);

		printf("R = %d", c);
		printf("\n");
	}

	if(d==0){
		d = (-a + c + b) / c;

		printf("N = %d", d);
		printf("\n");
	}

	e = (a + b) * d / 2;

	printf("\n");
	printf("A soma dos termos da progressao aritmetica e igual a\n%d\n", e);

    return 0;
}
