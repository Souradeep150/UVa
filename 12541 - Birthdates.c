/* Date: 14.08.15
Problem : 12541 - Birthdates
*/
#include <stdio.h>
#include <string.h>

int main()
{

	int t, i, y, x, d, m;
	int a, b;
	char nam[100][15];
	long days[100], young=10000000, old=0;


	scanf("%d", &i);
	for(t=1; t<=i; t++){
		scanf("%s %d %d %d", &nam[t], &d, &m, &y);
		days[t]= d+(m*30)+(y*365);
		if(young> days[t]){
			young= days[t];
			a= t;
		}
		if(old<days[t]){
			old= days[t];
			b= t;
		}
	}
	printf("%s\n%s\n", nam[b], nam[a]);

	return 0;
}
