#define _CRT_SECURE_NO_WARNINGS 1
#define INPUT_TITLE "input image"          // 宏定义，原始图片
#define OUTPUT_TITLE "HoughCircle picture" // 宏定义，经过霍夫圆变换后的图片

#include<iostream>
#include<opencv2\opencv.hpp>
#include<opencv2\core.hpp>

using namespace std;
using namespace cv;

int main() {
	//img是最后经过霍夫圆变换的图片，src是通过imread读取的图片，change_src是src需要经过的变换的图片。
	Mat img, src, change_src;
	src = imread("D:\\程序\\study\\last\\1116.jpg");
	if (!src.data)
	{
		cout << "ERROR : could not load image.";
		return -1;
	}
	namedWindow(INPUT_TITLE, CV_WINDOW_AUTOSIZE);
	namedWindow(OUTPUT_TITLE,CV_WINDOW_AUTOSIZE);
	namedWindow(OUTPUT_TITLE, CV_WINDOW_AUTOSIZE);
	imshow(INPUT_TITLE, src);

	//中值滤波，去除椒盐噪声。并转为单通道。
	medianBlur(src, change_src, 3);
	cvtColor(change_src, change_src, CV_BGR2GRAY);

	//霍夫圆变换
	vector<Vec3f> pcircles;
	HoughCircles(change_src, pcircles, CV_HOUGH_GRADIENT, 1, 10, 100, 24, 20, 50);

	//
	src.copyTo(img);
	cout << "pcircles.size() = " << pcircles.size() << endl;//为了了解HoughCircles中第二个参数的大小。
	//将圆画在原图片上。
	for (int i = 0; i < pcircles.size(); i++)
	{
		Vec3f cc = pcircles[i];
		circle(img, Point(cc[0], cc[1]), cc[2], Scalar(0, 0, 255), 2, LINE_AA);
		circle(img, Point(cc[0], cc[1]), 2, Scalar(255, 0, 4), 2, LINE_AA);
	}

	imshow(OUTPUT_TITLE, img);

	waitKey(0);
	return 0;
}
