	#include<stdio.h>
	#include<stdlib.h>
	
	int main(){
		int n, i, j, k, pos;
		scanf("%d", &n);
		int arr[n], cnt[n];
		for(i=0; i<n; i++){
			scanf("%d", &arr[i]);
			cnt[i]=0;
		}
		scanf("%d", &k);
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				if(arr[i]==arr[j])
					cnt[i]++;
			}
		}
		for(i=0; i<n; i++){
			if(cnt[i]==k){
				pos=i;
				printf("%d", arr[pos]);
				exit(0);
			}
		}
	}
