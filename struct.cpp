#include<stdio.h>

struct StructName{
	int marks;
	char nameofsub[20];
};

int main(){
	struct StructName SN[5];
	int i;
	for(i=0; i<5; i++){
		scanf("%d", &SN[i].marks);
		scanf("%s", SN[i].nameofsub);
	}
	for(i=0; i<5; i++){
		printf("\n%d", SN[i].marks);
		printf("\n%s", SN[i].nameofsub);		
	}
}
