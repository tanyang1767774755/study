#define _CRT_SECURE_NO_WARNINGS 1
#include "opencv2/highgui.hpp"

using namespace cv;

int main(int argc, char* argv[])
{
	const char* imagename = "C:\\Users\\LENOVO\\Desktop\\PSѧϰ\\̷��11-19.jpg";

	Mat img = imread(imagename); //���ļ��ж���ͼ��

	if (img.empty()) //�������ͼ��ʧ��
	{
		fprintf(stderr, "Cannot load image %s\n", imagename);
		return -1;
	}

	imshow("image", img); //��ʾͼ��

	waitKey();
	return 0;
}