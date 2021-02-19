#define _CRT_SECURE_NO_WARNINGS 1
#include "opencv2/highgui.hpp"

using namespace cv;

int main(int argc, char* argv[])
{
	const char* imagename = "C:\\Users\\LENOVO\\Desktop\\PS学习\\谭洋11-19.jpg";

	Mat img = imread(imagename); //从文件中读入图像

	if (img.empty()) //如果读入图像失败
	{
		fprintf(stderr, "Cannot load image %s\n", imagename);
		return -1;
	}

	imshow("image", img); //显示图像

	waitKey();
	return 0;
}