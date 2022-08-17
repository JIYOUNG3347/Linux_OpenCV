#include "opencv2/opencv.hpp"
#include <iostream>

int main(){
	cv::Mat img;
	img = cv::imread("totoro.jpeg", cv::IMREAD_COLOR);
	if(img.empty()){
		std::cout << "No Image" << std::endl;
		return -1;
	
	}
	cv::namedWindow("totoro", cv::WINDOW_AUTOSIZE);
	cv::imshow("totoro", img);
	
	cv::waitKey(0);

}
