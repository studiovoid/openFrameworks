#pragma once

#include "ofMain.h"
#include "ofxVoid/ui/DisplayObject.h"
#include "ofxVoid/ui/Panel.h"
#include "ofxVoid/ui/CellLayout.h"
#include "ofxVoid/ui/Scene3d.h"

class ofApp : public ofBaseApp
{
	float _time;
	float _timeStep;
	float _internalTime;

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		void exit();
		void drawScene();
	
		void createUi();
	
	
		shared_ptr<ofxVoid::ui::CellLayout> _hcell;
		shared_ptr<ofxVoid::ui::Scene3d> _scene3d;
		shared_ptr<ofxVoid::ui::DisplayObject> _stage;
		shared_ptr<ofxVoid::ui::Panel> _panel;
	
	
};
