#include "DFT.h"

imgPot * ForwardDFT(imgPot * src) {
	int ww, hh;
	double real, imag;  /*  실수, 허수  */
	imgPot * newElement = (imgPot *)calloc(1, sizeof(imgPot));
	newElement->weight = src->weight;
	newElement->height = src->height;

	for (hh = 0; hh < newElement->height; ++hh) {
		for (ww = 0; ww < newElement->weight; ++ww) {

		}


	}


	return newElement;
}

imgPot * InverseDFT(imgPot * src) {
	int ww, hh;
	double real, imag;  /*  실수, 허수  */
	imgPot * newElement = (imgPot *)calloc(1, sizeof(imgPot));
	newElement->weight = src->weight;
	newElement->height = src->height;

	for (hh = 0; hh < newElement->height; ++hh) {
		for (ww = 0; ww < newElement->weight; ++ww) {



		}


	}


	return newElement;
}