# HumanoidRobotVision
This project is built on Raspberry Pi.

The project is usage of opencv examples, to capture image, use a classifier for detection and recognition.

The project contains codes for human robot interaction through speech recognition using PocketSphinx and text to speech using Festival.

The project uses face detection python example from opencv and and updated version for recognition using the xml files from haarcascades in opencv and a created csv file for face recognition.

For Object Recognition:
This is the part were 2 papers were published upon.
https://ieeexplore.ieee.org/document/7942685/
https://ieeexplore.ieee.org/document/8023675/
THe project has bounding box algorithm to detect ROI and generate a dataset of the objects that is needed for building classifier. This algorithm was tested and proved to have accuracy of 99% to detect one object in each frame in a video with handling low quality frames. Moreover, it generates negative images from the videos given for building the classifier.

The classifier is built using opencv configurations, using the positive and negative images collected from the previous bounding box algorithm to generate xml file for human body organs.

This classifier is then used to detect and recognise object with almost real time, and high accuracy compared to other similar approaches.
