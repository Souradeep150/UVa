/* Date: 28.10.15
Problem: 10223 - How many nodes ?
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 10000000

char cha[21][20]={
	"0","1","2",
	"5", "14","42",
	"132", "429", "1430",
	"4862", "16796",
	"58786", "208012",
	"742900", "2674440",
	"9694845", "35357670",
	"129644790",
	"477638700", "1767263190",
	"6564120420", "24466267020",
	"91482563640"
};
/* One kind of Brute Forcing ? */

int main()
{
	int i, n;
	char c[20];

	while(scanf("%s", &c) != EOF){
		for(i=1; i<=23; i++){
			if(strcmp(c, cha[i])== 0){
				printf("%d\n", i); /* Printing index */
			}
		}

	}
  return 0;
}



