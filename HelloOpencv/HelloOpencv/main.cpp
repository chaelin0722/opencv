#include "opencv2/opencv.hpp"
#include <iostream>
using namespace std;
using namespace cv;
int main() {

	cout << "hello Opencv" << CV_VERSION << endl;

	Mat img;
	img = imread("lenna.bmp");

	if (img.empty()) {
		cerr << "Image load failed!" << endl;
		return -1;
	}
	namedWindow("image");
	imshow("image", img);
	waitKey();
	return 0;

}

/*
	opencv 에서 영상 데이터를 Mat 클래스를 이용해 표현하다. Mat 클래스는 cv 네임스페이스 안에 정의되어
	cv::Mat ㅇ이라고 표기하는 것이 정확한 표현..
	영사은 원소가 0부터 255 사이의 정수 값을 가질 수 있는 특별한 형태의 이차원 행렬이기 때문에 영상도 
	Mat 클래스를 이용해 표현할 수 있다. 
*/