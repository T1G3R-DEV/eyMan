/*


*/


#include <dlib/image_processing/frontal_face_detector.h>
#include <dlib/gui_widgets.h>
#include <dlib/image_io.h>
#include <iostream>
#include <videoio>


using namespace dlib;
using namespace std;
using namespace cv;

int main(int argc, char** argv)
{  

    CvCapture *pCapturedImage = cvCreateCameraCapture(0);

    VideoCapture cap(0);

    // Get the frame
    Mat save_img; cap >> save_img;

    if(save_img.empty())
    {
    std::cerr << "Something is wrong with the webcam, could not get frame." << std::endl;
    }
    // Save the frame into a file
    imwrite("test.jpg", save_img); // A JPG FILE IS BEING SAVED
   /*try
    {
        if (argc == 1)
        {
            cout << "Give some image files as arguments to this program." << endl;
            return 0;
        }

        frontal_face_detector detector = get_frontal_face_detector();
        image_window win;

        for (int i = 1; i < argc; ++i)
        {
            cout << "processing image " << argv[i] << endl;
            array2d<unsigned char> img;
            load_image(img, argv[i]);

            std::vector<rectangle> dets = detector(img);

            cout << "Number of faces detected: " << dets.size() << endl;
            // Now we show the image on the screen and the face detections as
            // red overlay boxes.
            win.clear_overlay();
            win.set_image(img);
            win.add_overlay(dets, rgb_pixel(255,0,0));

            cout << "Hit enter to process the next image..." << endl;
            cin.get();
        }
    }
    catch (exception& e)
    {
        cout << "\nexception thrown!" << endl;
        cout << e.what() << endl;
    }*/
}

