#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "stack.h"
#include "polish.h"

int atoi2 (char *s)
{
  /*  char c;*/
  int number;
  int i;

  number = 0;
  i = 0;

  while (*s) {
    if (!isdigit(*s)) {
      fprintf (stderr, "NaN!!!\n");
      exit(0);
    }
    number = number * 10 + (*s - '0');
    s++;
  }

  return number;
}

int evaluate (char **s, int n)
{
  int i, tmp;
  char c;
  Stack st;

  empty(&st);

  for (i = 1; i <= n; i++) {
    switch (c = s[i][0]) {
    case '+':
      push (&st, pop(&st) + pop(&st));
      break;
    case '-':
      tmp = pop(&st);
      push (&st, pop(&st) - tmp);
      break;
    case '/':
      tmp = pop(&st);
      push (&st, pop(&st) / tmp);
      break;
    case 'x':
      push (&st, pop(&st) * pop(&st));
      break;
    case '^':
      push (&st, (int)pow (pop(&st), pop(&st)));
      break;
    default :
      push (&st, atoi2(s[i]));
      break;
    }
  }

  if (st.cs > 0) printf("\n warning : Stack end not reached!!! Incomplete expression!!!\n");
  return (st.vector[st.cs]);
}
