#include <stdio.h>
enum vn_weekdays { SUN=1,MON,TUE,WED,THU,FRI,SAT };
enum old_months { JAN=11, FEB=12, MAR=1, APR, MAY, JUN,
                  JUL, AUG, SEP, OCT, NOV, DEC };
enum boolean { FALSE, TRUE }

int main() {
	printf("SUN=%d, MON=%d, TUE=%d, WED=%d, THU=%d, FRI=%d, SAT=%d\n", SUN, MON, TUE, WED, THU, FRI, SAT);
	//printf("\n");
	printf("JAN=%d, FEB=%d, MAR=%d, APR=%d, MAY=%d, JUN=%d", JAN, FEB, MAR, APR, MAY, JUN);
	printf("JUL=%d, AUG=%d, SEP=%d, OCT=%d, NOV=%d, DEC=%d\n", JUL, AUG, SEP, OCT, NOV, DEC);
}
