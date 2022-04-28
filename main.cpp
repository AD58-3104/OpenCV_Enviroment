#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/opencv.hpp>
int main(int argc, char *argv[])
{
    cv::Mat img = cv::Mat::zeros(500, 500, CV_8UC3);

    cv::circle(img, cv::Point(95, 355), 95, cv::Scalar(255, 0, 0), 5);
    cv::line(img, cv::Point(100, 100), cv::Point(400, 105), cv::Scalar(0,0,200), 3, 4);
    
    cv::namedWindow("drawing");
    cv::imshow("drawing", img);
    cv::waitKey(0);
}