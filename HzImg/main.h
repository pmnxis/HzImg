#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#ifndef uint8_t
typedef unsigned char uint8_t;
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


int main();
imgPot * Create_imgPot(const char filepath[], int w, int h);


void ()