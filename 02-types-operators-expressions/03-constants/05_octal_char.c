#include <stdio.h>

int main() {
	//int i,j,k;
	//for (i=0; i<8; ++i)
	//  for (j=0; j<8; ++j)
	//    for (k=0; k<8; ++k)
	//			printf("%d%d%d = %c\n", i,j,k,'');
	/* We simply can't do in this way. */
	printf("'\000' = %c\n", '\000');
	printf("'\001' = %c\n", '\001');
	printf("'\002' = %c\n", '\002');
	printf("'\003' = %c\n", '\003');
	printf("'\004' = %c\n", '\004');
	printf("'\005' = %c\n", '\005');
	printf("'\006' = %c\n", '\006');
	printf("'\007' = %c\n", '\007');
	printf("'\010' = %c\n", '\010');
	printf("'\011' = %c\n", '\011');
	printf("...\n");
	printf("'\370' = %c\n", '\370');
	printf("'\371' = %c\n", '\371');
	printf("'\372' = %c\n", '\372');
	printf("'\373' = %c\n", '\373');
	printf("'\374' = %c\n", '\374');
	printf("'\375' = %c\n", '\375');
	printf("'\376' = %c\n", '\376');
	printf("'\377' = %c\n", '\377');
	//printf("...\n");
	//printf("'\770' = %c\n", '\770');
	//printf("'\771' = %c\n", '\771');
	//printf("'\772' = %c\n", '\772');
	//printf("'\773' = %c\n", '\773');
	//printf("'\774' = %c\n", '\774');
	//printf("'\775' = %c\n", '\775');
	//printf("'\776' = %c\n", '\776');
	//printf("'\777' = %c\n", '\777');
}
