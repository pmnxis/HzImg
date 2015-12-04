#include "main.h"


int main() {
	printf("1");
	imgPot * LENA = Create_imgPot("lena_512x512.raw", 512, 512);

	printf("1");
	imgPot * Hz_LENA = ForwardDCT(LENA);
	printf("1");
	  imgPot * rd_LENA = InverseDCT(Hz_LENA);

	printf("1");
	store_ImgPot(Hz_LENA, "Hz_LENA.raw");


//  비교
	printf("lena_512x512.raw , MSE : %lf , IDCT : %lf\n", MSEcmp(LENA, rd_LENA), PSNRcmp(LENA, rd_LENA));

	//  소멸자
	Destroy_imgPot(LENA);

	Destroy_imgPot(Hz_LENA);
	
	Destroy_imgPot(rd_LENA);
	BASH_STOP
			
	return 0;
}

