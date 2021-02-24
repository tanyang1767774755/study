#define _CRT_SECURE_NO_WARNINGS 1
#define INPUT_TITLE "input image"          // �궨�壬ԭʼͼƬ
#define OUTPUT_TITLE "HoughCircle picture" // �궨�壬��������Բ�任���ͼƬ

#include<iostream>
#include<opencv2\opencv.hpp>
#include<opencv2\core.hpp>

using namespace std;
using namespace cv;

int main() {
	//img����󾭹�����Բ�任��ͼƬ��src��ͨ��imread��ȡ��ͼƬ��change_src��src��Ҫ�����ı任��ͼƬ��
	Mat img, src, change_src;
	src = imread("D:\\����\\study\\last\\1116.jpg");
	if (!src.data)
	{
		cout << "ERROR : could not load image.";
		return -1;
	}
	namedWindow(INPUT_TITLE, CV_WINDOW_AUTOSIZE);
	namedWindow(OUTPUT_TITLE,CV_WINDOW_AUTOSIZE);
	namedWindow(OUTPUT_TITLE, CV_WINDOW_AUTOSIZE);
	imshow(INPUT_TITLE, src);

	//��ֵ�˲���ȥ��������������תΪ��ͨ����
	medianBlur(src, change_src, 3);
	cvtColor(change_src, change_src, CV_BGR2GRAY);

	//����Բ�任
	vector<Vec3f> pcircles;
	HoughCircles(change_src, pcircles, CV_HOUGH_GRADIENT, 1, 10, 100, 24, 20, 50);

	//
	src.copyTo(img);
	cout << "pcircles.size() = " << pcircles.size() << endl;//Ϊ���˽�HoughCircles�еڶ��������Ĵ�С��
	//��Բ����ԭͼƬ�ϡ�
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
