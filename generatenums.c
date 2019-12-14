#include <stdlib.h>
#include <stdio.h>

void main(){
   FILE *fp, *asc, *desc;
   int num;

   fp = fopen("values.txt", "w+");
   for(int x = 0; x < 1000000; x++){
	num = rand()%1001;
	//printf("%i", num);
	fprintf(fp, "%d\n", num);
   }

   num = -1;
   asc = fopen("ascvals.txt", "w+");
   for(int x = 0; x < 1000000; x++){
	if(num >= 1001){
		num =0;
	}
	else{
		num++;
	}
	fprintf(asc, "%d\n", num);
   }

   num = 1001;
   desc = fopen("descvals.txt", "w+");
   for(int x = 0; x < 1000000; x++){
	if(num <= -1){
		num = 1000;
	}
	else{
		num--;
	}
	fprintf(desc, "%d\n", num);
   }
   fclose(fp);
   fclose(asc);
   fclose(desc);
}
