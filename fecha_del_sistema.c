#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	system("@cls||clear");
	time_t now = time(NULL);
	struct tm tm = *localtime(&now);
	printf("Ahora: %d-%d-%d \nHora : %d:%d:%d\n",tm.tm_year+1900,tm.tm_mon+1,tm.tm_mday,tm.tm_hour,tm.tm_min,tm.tm_sec);
	
	return 0;
}












/*int year = tm.tm_year+1900;
	int month = tm.tm_mon+1;
	int day = tm.tm_mday;
	printf("Anio: %d\n",year);
	printf("Mes: %d\n",month);
	printf("Dia : %d\n",day);*/
