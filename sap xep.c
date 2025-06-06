#include <stdio.h>

void nhap(int a[], int n){
	for(int i = 0; i < n;i ++){
		scanf("%d", &a[i]);
	}
}
void in(int a[], int n){
	for(int i = 0; i< n-1; i++){
		for(int j = i+1;j< n; j++){
			if(a[i]>a[j]){
				int tmp = a[i];
				a[i]= a[j];
				a[j] = tmp;
			}
		}
	}
}

int main (){
	int n;
	scanf("%d", &n);
	int a[n];
	nhap(a, n);
	in(a,n);
	for (int i = 0; i< n; i ++){
		printf("%d ", a[i]);
	}
	return 0;
}
