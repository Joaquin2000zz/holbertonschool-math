#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
#include <math.h>

/**
 * struct complex - struct which is the complex field of numbers
 * @re: the real part
 * @im: the imaginary part
 *
 * Description: Lorem ipsum dolor sit amet consectetur adipisicing elit.
 */
typedef struct complex
{
	int re;
	int im;
} complex;

void display_complex_number(complex c);
complex conjugate(complex c);
double modulus(complex c);
double argument(complex c);
void addition(complex c1, complex c2, complex *c3);
void substraction(complex c1, complex c2, complex *c3);
void multiplication(complex c1, complex c2, complex *c3);

#endif
