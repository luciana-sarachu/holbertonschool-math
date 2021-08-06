#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>

/**
 * struct complex - omplex structure.
 * @re: real number
 * @im: imaginary number
 * Return: Always 0.
 */

typedef struct complex
{
	double re;
	double im;
} complex;

void display_complex_number(complex c);

#endif
