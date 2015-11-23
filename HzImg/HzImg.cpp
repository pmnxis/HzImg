#include "HzImg.h"

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