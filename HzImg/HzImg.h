#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#ifndef uint8_t
typedef unsigned char uint8_t;
#endif

#ifndef M_PI
#define M_PI 3.141592654
#endif


struct imgPot {
	int weight;
	int height;
	uint8_t * data;
}typedef imgPot;

struct floatPot {
	int weight;
	int height;
	float * data;
}typedef floatPot;

extern imgPot * Create_imgPot(const char filepath[], int w, int h);