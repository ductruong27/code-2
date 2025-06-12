#include <stdio.h>
#include <math.h>
int main(){
	double a, b, c;
	scanf("%lf %lf %lf", &a, &b, &c);
	if (a== 0){
		if(b==0){
			if (c == 0){
				printf("Phuong trinh vo so nghiem");
			}
			else printf("Phuong trinh vo nghiem");
		}
		else{
			double x = -c/b;
			printf("%lf", x);
		}
	}
	else {
		double delta = b*b - 4*a*c;
		if (delta > 0){
			double x1 = (-b + sqrt(delta))/(2*a);
			double x2 = (-b - sqrt(delta))/(2*a);
			if (x1>x2){
				printf("%lf \n%lf", x1, x2);
			}
			else printf("%lf \n%lf", x2, x1);
		}
		else if (delta == 0){
			double x = -b/(2*a);
			printf("%lf", x);
		}
		else {
			double real = -b/(2*a);
			double imag = sqrt(-delta)/(2*a);
			printf("%lf+%lfi\n", real, imag);
			printf("%lf-%lfi\n", real, imag);
		}
	}
	return 0;
}
