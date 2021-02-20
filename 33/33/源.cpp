#define _CRT_SECURE_NO_WARNINGS 1

#include "pch.h"
#include <iostream>

#include "opencv2/opencv.hpp"
#include "opencv2/ximgproc.hpp"

using namespace cv;

int main()
{
	Mat guidanceImage = imread("tiananmen1.bmp", 0);//∂¡»°ª“∂»Õº
	if (!guidanceImage.data)
	{
		std::cout << "Guidance Image is empty" << std::endl;
		return -1;
	}
	imshow("Guidance", guidanceImage);
	Mat srcImage = imread("transmission.jpg", 1);
	if (!srcImage.data)
	{
		std::cout << "Source Image is empty" << std::endl;
		return -2;
	}
	imshow("input", srcImage);

	Mat res;
	ximgproc::guidedFilter(guidanceImage, srcImage, res, 30, 0.001, -1);

	imshow("result", res);
	waitKey(0);
	return 0;
}