/*
 * header.h
 *
 *  Created on: Apr 10, 2009
 *      Author: sana
 */

#ifndef HEADER_H_
#define HEADER_H_

#include <stdio.h>
#include <stdlib.h>

#define DEBUG

#ifdef DEBUG
#define PRINT(fmt, args...) printf(fmt, ##args)
#else
#define PRINT(fmt, args...) // Nothing to print
#endif

struct mystruct {
	int key;
};

typedef struct mystruct *pmystruct;

#endif /* HEADER_H_ */
