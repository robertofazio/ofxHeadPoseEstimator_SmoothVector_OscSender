#pragma once

#include "ofMain.h"
#include "ofxKinect.h"
#include "ofxHeadPoseEstimator.h"

#include "ofxOsc.h"

#define HOST "127.0.0.1"
#define PORT 12345 //8081

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void updateCloud();
		void draw();
		//------------------------
		void setupEstimator();
		//-----------------------
		void drawPointCloud();
        void drawPoses();
		//-----------------------
        void calcAvgFPS();
        void drawReport();
		//-----------------------
		void keyPressed  (int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		//-----------------------
		ofxKinect kinect;
		ofEasyCam easyCam;
        ofxOscSender sender;
        ofVec3f prevPos;
        ofVec3f prevDir;
    
        ofVec3f finalPos;
        ofVec3f finalDir;
        ofVec3f lastPos;
        ofVec3f lastDir;
        ofVec3f  actualDir;
        ofVec3f  actualPos;
    

};
