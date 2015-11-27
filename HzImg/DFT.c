#include "DFT.h"

//  𝐷(𝑢,𝑣)=𝑐 log⁡[1+|𝐺(𝑢,𝑣)|]

//  𝐺(𝑢, 𝑣) = 1 / 𝑀𝑁  * ∑_(𝑥 = 0) ^ (𝑀−1)▒∑_(𝑦 = 0) ^ (𝑁−1)▒〖𝑔(𝑥, 𝑦)𝑒 ^ (−𝑗2𝜋(𝑢𝑥 / 𝑀 + 𝑣𝑦 / 𝑁)) 〗

imgPot * ForwardDFT(imgPot * src) {
	int ww, hh;
	double real, imag;  /*  실수, 허수  */
	imgPot * newElement = (imgPot *)calloc(1, sizeof(imgPot));
	newElement->width = src->width;
	newElement->height = src->height;

	for (hh = 0; hh < newElement->height; ++hh) {
		for (ww = 0; ww < newElement->width; ++ww) {

		}


	}


	return newElement;
}

imgPot * InverseDFT(imgPot * src) {
	int ww, hh;
	double real, imag;  /*  실수, 허수  */
	imgPot * newElement = (imgPot *)calloc(1, sizeof(imgPot));
	newElement->width = src->width;
	newElement->height = src->height;

	for (hh = 0; hh < newElement->height; ++hh) {
		for (ww = 0; ww < newElement->width; ++ww) {
		


		}


	}


	return newElement;
}