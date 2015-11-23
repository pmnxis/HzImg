#include "main.h"

int main() {
	


	return 0;
}



imgPot * Create_imgPot(const char filepath[], int w, int h) {
	FILE * fp;
	imgPot * pot;
	fopen_s(&fp, filepath, "rb");
	pot = (imgPot *)calloc(1, sizeof(imgPot));
	fread(pot->data, sizeof(uint8_t), w*h, fp);
	pot->weight = w;
	pot->height = h;
	return pot;
}

imgPot * ForwardDFT(imgPot * src) {
	long ii , sum;
	double real, imag;  /*  실수, 허수  */
	imgPot * newElement = (imgPot *)calloc(1, sizeof(imgPot));
	newElement->weight = src->weight;
	newElement->height = src->height;
	sum = newElement->weight * newElement->height;
	for (ii = 0; ii < sum; ii++) {

	}



}