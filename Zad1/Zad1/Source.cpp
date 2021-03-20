#include<opencv2/highgui/highgui.hpp>
#include<iostream>
#include<conio.h>
using namespace std;
using namespace cv;
int main()
{
	Mat image;
	VideoCapture cap;
	cap.open(0);

	namedWindow("WINDOW", WINDOW_AUTOSIZE);
	
	double dWidth = cap.set(CAP_PROP_FRAME_WIDTH, 640);
	double dHeight = cap.set(CAP_PROP_FRAME_HEIGHT, 480);

	while (true)
	{
		cap >> image;
		imshow("WINDOW", image);
		if (waitKey(15) == 27) {
			cap.release();
			destroyAllWindows();
			return 0;
		}
	}

	return 0;
}