#include <stdio.h>
#include <math.h>

void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) 
        scanf("%d", &a[i]);
}

void tinhTB(int a[], int n) {
    double sum = 0;
    int dem = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            sum += a[i];
            dem++;
        }
    }
    if (dem == 0) {
        printf("Mang khong co so am ");
        return ; 
    }
    else {
    	printf("%.6lf ", sum/dem);
	}
}

void tongDuong(int a[], int n) { 
    double res = 0;
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            res += a[i];
            dem++;
        }
    }
    if (dem == 0) {
        printf("Mang khong co so duong ");
        return ;
    }
    else{
    	printf("%.6lf ", res);
	}  
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    nhap(a, n);
    tinhTB(a,n);
    tongDuong(a,n);
    return 0;
}
