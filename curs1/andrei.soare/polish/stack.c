#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

void empty (Stack *s)
{
  s->cs = -1;
}

void push (Stack *s, int e)
{
  if full(s) {
    fprintf (stderr, "Stack FULL!!!\n");
    exit(0);
  }

  s->vector[++(s->cs)] = e;
 }

int pop (Stack *s)
{
  int p;

  if (isempty(s)) {
    fprintf (stderr, "Stack empty!!!\n");
    exit(0);
  }

  p = s->vector[(s->cs)--];
  return p;
}

int top (Stack *s)
{
  int p;

  if (isempty(s)) {
    fprintf (stderr, "Stack empty!!!\n");
    exit(0);
  }

  p = s->vector[s->cs];
  return p;
}
