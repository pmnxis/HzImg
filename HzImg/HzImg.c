#include "HzImg.h"



imgPot * Create_imgPot(const char filepath[], int w, int h) {
	FILE * fp;
	imgPot * pot;
	fopen_s(&fp, filepath, "rb");
	pot = (imgPot *)calloc(1, sizeof(imgPot));
	fread(pot->data, sizeof(uint8_t), w*h, fp);
	pot->width = w;
	pot->height = h;
	return pot;
}

extern uint8_t reviseUINT8(double _input) {
	double input = _input + 0.5;
	if (input < 0)return 0;
	else if (input > 255) return 255;
	else return(uint8_t)input;
}