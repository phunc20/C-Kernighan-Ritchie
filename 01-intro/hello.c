#include <stdio.h>

main()
{
	// Try comment out each of the following to see diff code effect
	// 01. correct one
	//printf("hello, phunc20\n");
	// 02. correct but w/o /n
	//printf("hello, phunc20");
	// 03. incorrect: cannot even be compiled
	//printf("hello, phunc20
	//");
	// 04. incorrect: Try the python way
	//printf("""hello, phunc20
	//""");
	// 05. correct
	//printf("hello, ");
	//printf("phunc20");
	//printf("\n");
	// 06. correct: test escape seq: \t, \b, etc.
	//printf("hello, \bphunc20\t!\n");
	// 07. incorrect: INEXISTENT escape seq
	printf("hello, \sphunc20\w!\y");
}
