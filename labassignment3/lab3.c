//Sahil Sah
//sah.sa@northeastern.edu

#include <stdio.h>
#include <stdlib.h>
#define MAX 11
int main()
{

	FILE *fp;

	int arr[MAX];
	int i,j,temp;
	//take in and read input file
	fp = fopen("Input.txt","r");
	if(fp==NULL){
		printf("\nUnable to open the file\n");
		exit(0);
	}
	for(i=0;i < MAX; i++){
		fscanf(fp, "%d ", &arr[i]);
		printf("%d ", arr[i]);
	}
	printf("\n");
	//sort
	for (i=0; i<MAX; i++){
		j = i - 1;
		temp = arr[i];
		while(temp < arr[j] && j >=0){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}
	//output file
	fp = fopen("sorted.txt", "w");
	printf("The sorted output is:\n");
	for(i=0;i<MAX;i++){
		fprintf(fp, "%d\n", arr[i]);
		printf("%d ", arr[i]);	
	}
	printf("\n");
	fclose(fp);
	return 0;
}
