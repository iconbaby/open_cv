#include "ROI_AddImage.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>  
using namespace cv;
bool Roi_AddImage() {
	//Mat srcImage1 = imread("f.jpg");
	//Mat girlimage = imread("girl.jpg");
	//if (!srcImage1.data) {
	//	printf("读取srcimage错误");
	//	return false;
	//}
	//if (!girlimage.data) {
	//	printf("读取girl 错误");
	//	return false;
	//}
	////定义一个mat类型的roi区域
	//Mat imageroi = srcImage1(Rect(200, 250, girlimage.cols, girlimage.rows));
	//Mat mask = imread("girl.jpg", 0);
	//girlimage.copyTo(imageroi, mask);
	//namedWindow("利用ROI实现图像叠加");
	//imshow("实现图像叠加", srcImage1);

	Mat srcImage = imread("f.jpg");
	Mat girlImage = imread("girl.jpg");
	Mat imageroi = srcImage(Rect(200, 300, girlImage.cols, girlImage.rows));

	Mat mask = imread("girl.jpg", 0);
	girlImage.copyTo(imageroi);
	cvNamedWindow("test");
	imshow("test", srcImage);
	return true;
}