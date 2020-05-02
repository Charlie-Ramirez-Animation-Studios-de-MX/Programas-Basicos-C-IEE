//Torneo de futbol

#include <stdio.h>
#include <math.h>
int main (){
	int N,k,i,j;
	printf("Dame el numero\n");
		scanf("%d",&N);
	k=0;
for(i=1;i<=N;i++){
	for(j=1;j<=N;j++){
	if(j!=i){
		k=k+1;
		printf("Partido %d. Equipo %d vs Equipo %d\n",k,i,j);
	}
}

}
}
