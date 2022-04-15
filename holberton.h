#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stddef.h>
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

#endif
