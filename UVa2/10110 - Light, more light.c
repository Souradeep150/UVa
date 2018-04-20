/* Date: 07.08.15
Problem: 10110 - Light, more light
*/

#include <stdio.h>
#include <string.h>

int main()
{
    long long light;

	while(scanf("%lld", &light) && light){
		long long res = sqrt(light);
		if(res * res == light){
			printf("yes\n");
		}
		else printf("no\n");
	}

    return 0;
}
