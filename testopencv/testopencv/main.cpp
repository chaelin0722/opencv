#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>


using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	Mat image;
	image = imread("test.jpg", IMREAD_COLOR);

	if (!image.data) {
		cout << "Could not open or find the image" << endl;
		return -1;
	}

	namedWindow("Display window", WINDOW_AUTOSIZE);
	imshow("Display window", image);

	waitKey(0);

	destroyWindow("Display window");

	return 0;

}
