#include <stdio.h>
#include <math.h>
void nhap(int a[], int n){
	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
}
int tichLonNhat(int a[], int n){
	if( n< 2) return 0;
	int maxTich = a[0] *a[1];
	for(int i = 1; i< n-1; i++){
		int tich = a[i] *a[i+1];
		if(tich> maxTich){
			maxTich = tich;
		}
	}
	if (maxTich > 0){
		return maxTich;
	}
	else return 0;
}

int main (){
	int n;
	scanf("%d", &n);
	if(n >= 2 && n<= 10){
		int a[n];
		nhap(a,n);
		int ketqua = tichLonNhat(a,n);
		printf("%d ", ketqua);
	} 
	else printf("0");
	return 0;
}
