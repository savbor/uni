#include <stdio.h>
#include <math.h>

/* Applicazione che da in output le soluzioni di un'equazione di secondo grado */

int main() {
	int start;
	
	/* Inizio */
	while(0 == 0) {
	printf("Applicazione che calcola equazioni di secondo grado\n");
	printf("della forma ax2+bx+c=0 \n\n");
	printf("Inserisci 1 per cominciare e 0 per terminare: \n");
	scanf("%d", &start);
	if(start == 1) {
		int a, b, c;     // coefficienti
		int delta;      // discriminante
		float x1, x2;     // soluzioni
		
		/* Input */
		printf("Inserisci a: \n");
		scanf("%d", &a);
		printf("Inserisci b: \n");
		scanf("%d", &b);
		printf("Inserisci c: \n");
		scanf("%d", &c);
		
		delta = ((pow(b, 2)) - (4*a*c));
		
		/* Vari casi e output */
		
		if(delta>0) {
			x1 = ((pow(b, 2) + sqrt(delta)) / (2*a));
			x2 = ((pow(b, 2) - sqrt(delta)) / (2*a));
			printf("Le soluzioni dell'equazione sono %f e %f\n\n", x1, x2);
		}
		if(delta == 0) {
			x1 = (pow(b,2) / (2*a));
			printf("L'unica soluzione dell'equazione è %f\n\n", x1);
		}
		if(delta<0){
			printf("L'equazione non ha soluzioni reali\n\n");
		}
		printf("###########################\n\n");
	}
	else {
		return 0;
	}
}
}