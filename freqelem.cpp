#include<stdio.h>

int main(){
	int n, i, j, max=0, pos=0;
	scanf("%d", &n);
	int arr[n], cnt[n];
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
		cnt[i]=0;
	}
	for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			if(arr[i]==arr[j]){
				cnt[i]++;
			}
		}
	}
	for(i=0; i<n; i++){
		if(cnt[i]>max){
			max=arr[i];
			pos=i;
		}
	}
	printf("The Element which gets repeated most is: %d", arr[pos]);
}
