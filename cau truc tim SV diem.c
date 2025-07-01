#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

struct SV{
	char ma[50];
	char ten[100];
	float gpa;
};

typedef struct SV SV;

void nhap(SV *a){
	scanf("%s", a->ma);
	getchar();
	gets(a->ten);
	scanf("%f", &a->gpa);
}

void in(SV a){
	printf("%s %s %.2f\n", a.ma, a.ten, a.gpa);
}

void timKiem1(SV a[], int n, char m[100]){
	for(int i = 0; i<n;i++){
		if(strcmp(m, a[i].ma)==0){
			in(a[i]); return;
		}
	}
	printf("Khong tim thay sinh vien co ma vua nhap !\n");
}
void timKiem2(SV a[], int n){
	float res = 0; int pos;
	for(int i = 0; i<n; i++){
		if(a[i].gpa > res){
			res = a[i].gpa; pos = i;
		}
	}
	in(a[pos]);
}
int main (){
	int n;
	scanf("%d",&n);
	SV a[n];
	for(int i = 0; i<n; i++) nhap(&a[i]);
	for(int i = 0; i<n; i++) in(a[i]);
	timKiem2(a, n);
	return 0;
}
