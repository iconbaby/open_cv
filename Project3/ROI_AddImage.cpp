#include "ROI_AddImage.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>  
using namespace cv;
bool Roi_AddImage() {
	//Mat srcImage1 = imread("f.jpg");
	//Mat girlimage = imread("girl.jpg");
	//if (!srcImage1.data) {
	//	printf("��ȡsrcimage����");
	//	return false;
	//}
	//if (!girlimage.data) {
	//	printf("��ȡgirl ����");
	//	return false;
	//}
	////����һ��mat���͵�roi����
	//Mat imageroi = srcImage1(Rect(200, 250, girlimage.cols, girlimage.rows));
	//Mat mask = imread("girl.jpg", 0);
	//girlimage.copyTo(imageroi, mask);
	//namedWindow("����ROIʵ��ͼ�����");
	//imshow("ʵ��ͼ�����", srcImage1);

	Mat srcImage = imread("f.jpg");
	Mat girlImage = imread("girl.jpg");
	Mat imageroi = srcImage(Rect(200, 300, girlImage.cols, girlImage.rows));

	Mat mask = imread("girl.jpg", 0);
	girlImage.copyTo(imageroi);
	cvNamedWindow("test");
	imshow("test", srcImage);
	return true;
}