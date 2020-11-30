#include <stdio.h>

main()
{
	int x = 1, y =2, z[10];
	int *ip;  // ip is a pointer to int
	printf("&x = %p, &y = %p, z = %p, ip = %p\n", &x, &y, z, ip);
	printf("x = %d, y = %d, z[0] = %d, *ip = %d (z[1] = %d, ..., z[9] = %d)\n\n", x, y, z[0], *ip, z[1], z[9]);
	
	ip = &x;
	printf("&x = %p, &y = %p, z = %p, ip = %p\n", &x, &y, z, ip);
	printf("x = %d, y = %d, z[0] = %d, *ip = %d (z[1] = %d, ..., z[9] = %d)\n\n", x, y, z[0], *ip, z[1], z[9]);
	
	y = *ip;
	printf("&x = %p, &y = %p, z = %p, ip = %p\n", &x, &y, z, ip);
	printf("x = %d, y = %d, z[0] = %d, *ip = %d (z[1] = %d, ..., z[9] = %d)\n\n", x, y, z[0], *ip, z[1], z[9]);
	
	*ip = 0;
	printf("&x = %p, &y = %p, z = %p, ip = %p\n", &x, &y, z, ip);
	printf("x = %d, y = %d, z[0] = %d, *ip = %d (z[1] = %d, ..., z[9] = %d)\n\n", x, y, z[0], *ip, z[1], z[9]);
	
	ip = &z[0];
	printf("&x = %p, &y = %p, z = %p, ip = %p\n", &x, &y, z, ip);
	printf("x = %d, y = %d, z[0] = %d, *ip = %d (z[1] = %d, ..., z[9] = %d)\n\n", x, y, z[0], *ip, z[1], z[9]);
}
