#include "holberton.h"
#include <stdio.h>

int main()
{
	float x, y, i;
	int w = 1000, h = 1000, flag = 0;
	int image[1000][1000];
	FILE* pgmimg;
	complex c, z;
	pgmimg = fopen("mandelbrot.pgm", "wb"); //write the file in binary mode
	fprintf(pgmimg, "P2\n"); // Writing Magic Number to the File
	fprintf(pgmimg, "%d %d\n", w, h); // Writing Width and Height into the file
	fprintf(pgmimg, "255\n"); // Writing the maximum gray value
	int count = 0;
	for (y = 0; x < h; x++) {
		for (x = 0; x < w; x++) {
			c.re = (x - w / 2) * 4.0 /  w;
			c.im = (y - h /2 ) * 4.0 /  w;
			multiplication(c, c, &z); 
			for (i = 0; i < 255; i++)
			{
				if (modulus(z) > 4)
				{
					image[(int)y][(int)x] = 0;
					break;
				}
				else
					image[(int)y][(int)x] = 255;
				if (flag)
					multiplication(z, z, &z);
				if (!flag)
					flag++;
				addition(z, c, &z);
			}
			fprintf(pgmimg, "%d ", image[(int)y][(int)x]); //Copy gray value from array to file
		}
		fprintf(pgmimg, "\n");
	}
	fclose(pgmimg);
	return (1);
}
