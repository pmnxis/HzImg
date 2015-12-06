#include "HzImg.h"

imgPot * Create_imgPot(const char filepath[], int w, int h) {
	FILE * fp;
	imgPot * pot;
	fopen_s(&fp, filepath, "rb");
	pot = (imgPot *)calloc(1, sizeof(imgPot));
	pot->data = (uint8_t *)calloc(w*h, sizeof(uint8_t));
	fread(pot->data, sizeof(uint8_t), w*h, fp);
	pot->width = w;
	pot->height = h;
	fclose(fp);
	return pot;
}

imgPot * cp_imgPot(imgPot * src) {
	imgPot * pot;
	pot = (imgPot *)calloc(1, sizeof(imgPot));
	pot->data = (uint8_t *)calloc(src->width*src->height, sizeof(uint8_t));
	pot->width = src->width;
	pot->height = src->height;
	return pot;
}

uint8_t reviseUINT8(double _input) {
	double input = _input + 0.5;
	if (input < 0)return 0;
	else if (input > 255) return 255;
	else return(uint8_t)input;
}

void Destroy_imgPot(imgPot * pot) {
	free(pot->data);
	printf("d");
	free(pot);
	printf("D");
}

void Destroy_doublePot(doublePot * pot) {
	free(pot->data);
	free(pot);
}

void store_ImgPot(imgPot * pot, const char filepath[], long long buffSize) {
	long long seek, total, cutt, looper, i, x,y;
	FILE * fp;
	printf("f");
	fp = fopen("result", "w");
	//  uint8_t * buffer = calloc(buffSize, sizeof(uint8_t));
	x = (long long)pot->height;
	y = (long long)pot->width;
	seek = 0;
	total = x*y;
	cutt = total % buffSize;
	looper = total / buffSize;
	for (i = 0; i < looper; i++) {
		fwrite(pot->data[seek], sizeof(uint8_t), buffSize, fp);
		seek = seek + buffSize;
	}
	if (cutt > 0) {
		fwrite(pot->data[seek], sizeof(uint8_t), cutt, fp);
	}
	printf("f");
	//  fwrite(pot->data, sizeof(uint8_t), pot->width*pot->height, fp);
	fclose(fp);
}