// 导入 stdio.h 头文件，提供标准输入输出功能
#include <stdio.h>
// 导入 OpenCV 的主要头文件，提供了 OpenCV 库的核心功能
#include <opencv2/opencv.hpp>

// 使用 OpenCV 命名空间，这样就可以直接使用 OpenCV 的类和函数，而无需在前面加上 cv::
using namespace cv;

// argc 是命令行参数的数量，argv 是一个字符串数组，其中包含命令行参数
int main(int argc, char** argv )
{
    if ( argc != 2 )
    {
        printf("usage: DisplayImage.out <Image_Path>\n");
        return -1;
    }
    Mat image;  // 声明一个 Mat 对象，它是 OpenCV 用于存储图像数据的类

    // 从文件加载图像。（第一个参数是图像文件的路径，第二个参数 IMREAD_COLOR 表示加载彩色图像。加载后的图像数据存储在 image 对象中）
    image = imread( argv[1], IMREAD_COLOR );

    // 检查图像数据是否被成功加载。(如果图像数据为空，说明加载失败，程序会输出错误信息并返回-1)
    if ( !image.data )
    {
        printf("No image data \n");
        return -1;
    }

    // 创建一个窗口，用于显示图像。（namedWindow 函数的第一个参数是窗口的名称，第二个参数 WINDOW_AUTOSIZE 表示窗口大小会根据图像的实际大小自动调整）
    namedWindow("Display Image", WINDOW_AUTOSIZE );

    // 在之前创建的窗口中显示图像。（imshow 函数的第一个参数是窗口的名称，第二个参数是要显示的图像）
    imshow("Display Image", image);

    // 等待用户按下键盘上的任意键，然后继续执行程序
    waitKey(0);

    //  在 main 函数的结尾，返回 0 表示程序运行成功
    return 0;
}
