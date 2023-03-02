// opencv.cpp: 定义应用程序的入口点。
//

#include "opencv.h"

#include <opencv2/core/core.hpp> 
#include <opencv2/highgui/highgui.hpp> 
using namespace cv;

int main()
{
    
    Mat img = imread("C:\\Users\\33298\\OneDrive\\Pictures\\332969.jpg");
    namedWindow("测试opencv");
    imshow("测试opencv", img);
    waitKey(1000);
    
    return 0;
    
}
