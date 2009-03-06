#ifndef _STACK_H
#define _STACK_H   1

#define MAXDIM 100
#define isempty(s) ((s)->cs == -1)
#define full(s) ((s)->cs == MAXDIM)

typedef struct {
  int cs;
  int vector[MAXDIM];
} Stack;

void empty (Stack *s);

void push (Stack *s, int e);

int pop (Stack *s);

int top (Stack *s);

#endif
