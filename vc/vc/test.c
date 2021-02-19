#define _CRT_SECURE_NO_WARNINGS 1
cv::string RGB_image_file = "D:/detect_results/a.jpg";
cv::Mat RGB_frame;
cv::Size ResImgSiz = cv::Size(IMGSIZE_SUBX, IMGSIZE_SUBY);
cv::Mat ResImg = cv::Mat(ResImgSiz, RGB_frame.type());
RGB_frame = cv::imread(RGB_image_file);
cv::resize(RGB_frame, ResImg, ResImgSiz, CV_INTER_CUBIC);
imshow("show_results", ResImg);
cv::waitKey(2);
