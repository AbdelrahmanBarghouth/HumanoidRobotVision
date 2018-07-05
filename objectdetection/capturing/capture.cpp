#include "highgui.h"
#include "cv.h"

using namespace cv;

int main(int argc, char** argv)
{
  CvCapture* capture=cvCreateCameraCapture(-1);
  IplImage* frame=cvQueryFrame(capture);
  Mat gray_image=frame;
  imwrite( "/home/pi/mygamecodes/objectdetection/taken.jpeg", gray_image );
}
