#include <stdio.h>
#include <stdlib.h>  /* for atof() */

#define MAXOP 100 
#define NUMBER '0'  /* signal that a number was found */

/* function declarations for main */
int getop(char []);
void push(double);
double pop(void);

/* reverse Polish calculator */
int main(int argc, char **argv) {
  int type;
  double op2;  // used to distinguish the operands of the operators - and /
  char s[MAXOP];

  while ((type = getop(s)) != EOF) {
    //printf("s = %s\n", s);
    switch (type) {
      case NUMBER:
        push(atof(s));
        break;
      case '+':
        push(pop() + pop());
        break;
      case '-':
        op2 = pop();
        push(pop() - op2);
        break;
      case '*':
        push(pop() * pop());
        break;
      case '/':
        op2 = pop();
        if (op2 != 0.0)
          push(pop() / op2);
        else
          printf("error: divide by zero\n");
        break;
      case '\n':
        printf("\t%.8g\n", pop());
        break;
      default:
        printf("error: unknown command %s\n", s);
        break;
    }
  }
  return 0;
}

/* external variables for push and pop */
#define MAXVAL 100   /* maximum depth of val stack */
int sp = 0;          /* next FREE stack position */
double val[MAXVAL];  /* value stack */

/* push: push f onto value stack */
void push(double f) {
  if (sp < MAXVAL)
    val[sp++] = f;
  else
    printf("error: stack full, can't push %g\n", f);
}

/* pop: pop and return top value from stack */
double pop(void) {
  if (sp > 0)
    return val[--sp];
  else
    printf("error: stack empty\n");
}

#include <ctype.h>

int getch(void);
void ungetch(int);

/* getop: get next operator or operand */
int getop(char s[]) {
  int i, c;

  while ((s[0] = c = getch()) == ' ' || c == '\t')
    ;
  s[1] = '\0'; // Why?

  /* We are probably allowing numbers of the forms:
   *   "312.1234"
   *   "450"
   *   ".134"
   */
  if (!isdigit(c) && c != '.')
    return c;  /* not a number */
  i = 0;
  if (isdigit(c))  /* collect integer part: Note that s[0] in this case is a digit */
    while (isdigit(s[++i] = c = getch()))
      ;
  /* Note that exiting here, s[i] is a non-digit. */
  if (c == '.')   /* continue to collect fraction part */
    while (isdigit(s[++i] = c = getch()))
      ;
  /* Note that exiting here, s[i] is a non-digit as above.
   * But the collected string can be sth like
   *   "341.."
   *   "341.1351abc"
   *   ".$^!$^"
   *   "341 "
   *   etc.
   */
  s[i] = '\0';  // So we replace the non-digit by '\0'

  /* The next if, as far as I can understand, is for returning back the extra char
   * we have taken to s, so that next time we getch() or getop() we won't miss a thing.
   * (cf. p.78 of the book.)
   */
  if (c != EOF)
    ungetch(c);
  return NUMBER;
}

/* routines called by getop */
#define BUFSIZE 100

char buf[BUFSIZE];  /* buffer for ungetch */
int bufp = 0;       /* next FREE position in buf */

int getch(void)  /* get a (possibly pushed back) character */
{
  return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)  /* push character back on input */
{
  if (bufp >= BUFSIZE)
    printf("ungetch: too many characters\n");
  else
    buf[bufp++] = c;
}
