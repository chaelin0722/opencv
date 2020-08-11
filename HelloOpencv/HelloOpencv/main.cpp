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
	opencv ���� ���� �����͸� Mat Ŭ������ �̿��� ǥ���ϴ�. Mat Ŭ������ cv ���ӽ����̽� �ȿ� ���ǵǾ�
	cv::Mat ���̶�� ǥ���ϴ� ���� ��Ȯ�� ǥ��..
	������ ���Ұ� 0���� 255 ������ ���� ���� ���� �� �ִ� Ư���� ������ ������ ����̱� ������ ���� 
	Mat Ŭ������ �̿��� ǥ���� �� �ִ�. 
*/