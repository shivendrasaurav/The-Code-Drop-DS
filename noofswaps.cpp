#include<stdio.h>

int main(){
	int n, i, j, cnt=0, temp;
	scanf("%d", &n);
	int arr[n];
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			if(arr[j]>arr[j+1]){
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
			cnt++;
		}
	}
	printf("%d", cnt);
}
