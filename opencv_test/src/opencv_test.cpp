#include <iostream>
#include <filesystem>
#include "opencv2/opencv.hpp"

namespace fs = std::filesystem;

int main() {

    fs::path execPath = fs::current_path();

    fs::path imagePath = execPath / "totoro.jpg";

    cv::Mat img = cv::imread(imagePath.string(), cv::IMREAD_COLOR);
    if (img.empty()) {
        std::cout << "Could not read the image: " << imagePath << std::endl;
        return 1;
    }

    cv::namedWindow("Display window", cv::WINDOW_AUTOSIZE);
    cv::imshow("Display window", img);

    cv::waitKey(0);
    return 0;
}
