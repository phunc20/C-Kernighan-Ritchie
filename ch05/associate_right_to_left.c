#include <stdio.h>

main()
{
	int *ip;  // ip is a pointer to int
	// Cannot print now; otherwise, segmentation fault happens.
	//printf("ip = %p, *ip = %d\n\n", ip, *ip);

	int x = 123456789;
	ip = &x;
	printf("ip = %p, *ip = %d\n\n", ip, *ip);
	
	printf("%d\n", ++*ip);
	//++*ip;
	printf("ip = %p, *ip = %d\n\n", ip, *ip);
	
	printf("%d\n", (*ip)++);
	//(*ip)++;
	printf("ip = %p, *ip = %d\n\n", ip, *ip);

	printf("%d\n", *ip++);
	//*ip++;
	printf("ip = %p, *ip = %d\n\n", ip, *ip);

	printf("%d\n", ++*ip);
	//++*ip;
	printf("ip = %p, *ip = %d\n\n", ip, *ip);
}
