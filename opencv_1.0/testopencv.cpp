#include<opencv2/opencv.hpp>
#include<opencv2/highgui.hpp>
//#include<iostream>
using namespace cv;
//using namespace std;
int main()
{
    //cout<<"kkk\n";
    Mat img=imread("C:\\Users\\hou\\Desktop\\1.png");
    cv::imshow("image",img);
    cv::waitKey();
    
   //cout<<"ddd";
    return 0;
}
