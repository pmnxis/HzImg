#include "main.h"


int main() {
	imgPot * LENA = Create_imgPot("lena_512x512.raw", 512, 512);
	imgPot * CITY = Create_imgPot("city_1280x720.raw", 1280, 720);
	
	imgPot * Hz_LENA = ForwardDCT(LENA);
	imgPot * Hz_CITY = ForwardDCT(CITY);
	
	doublePot * Dp_LENA = ForwardDCT_double(LENA);
	doublePot * Dp_CITY = ForwardDCT_double(CITY);

	imgPot * re_LENA = InverseDCT_double(Hz_LENA);
	imgPot * re_CITY = InverseDCT(Hz_CITY);

	imgPot * rd_LENA = InverseDCT_double(Dp_LENA);
	imgPot * rd_CITY = InverseDCT(Dp_CITY);

	store_ImgPot(Hz_LENA, "Hz_LENA");
	store_ImgPot(Hz_CITY, "Hz_CITY");

	store_ImgPot(re_LENA, "re_LENA");
	store_ImgPot(re_CITY, "re_CITY");

	store_ImgPot(rd_LENA, "rd_LENA");
	store_ImgPot(rd_CITY, "rd_CITY");
	
	
	//  비교
	printf("lena_512x512.raw , MSE : %lf , IDCT : %lf\n", MSEcmp(LENA, rd_LENA), PSNRcmp(LENA, rd_LENA));
	printf("city_1280x720.raw , MSE : %lf , IDCT : %lf\n", MSEcmp(CITY, rd_CITY), PSNRcmp(LENA, rd_LENA));


	//  소멸자
	Destroy_imgPot(LENA);
	Destroy_imgPot(CITY);

	Destroy_imgPot(Hz_LENA);
	Destroy_imgPot(Hz_CITY);

	Destroy_doublePot(Dp_LENA);
	Destroy_doublePot(Dp_CITY);
	
	Destroy_imgPot(re_LENA);
	Destroy_imgPot(re_CITY);
	
	Destroy_imgPot(rd_LENA);
	Destroy_imgPot(rd_CITY);

	BASH_STOP

	return 0;
}

