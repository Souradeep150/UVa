
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>


int main()
{
    int t, g, i, j, k, l, m, n;
    int x=0, total;
    float f;

	while(scanf("%d", &n)){
		total = 0;
		x++;
		if(n < 0) break;

		f = log2(n);
		total = ceil(f);

		printf("Case %d: %d\n",x, total);
	}

    return 0;
}
