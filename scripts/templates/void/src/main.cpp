#include "ofMain.h"
#include "ofApp.h"


int main()
{
	ofGLFWWindowSettings s;
	s.width = 1920;
	s.height = 1080;
	s.stencilBits = 8;
	//s.setPosition(ofVec2f(0, 0));
	//s.decorated = false;
	//s.multiMonitorFullScreen = true;
	
	auto mainWindow = ofCreateWindow(s);
	shared_ptr<ofApp> mainApp = make_shared<ofApp>();
	ofRunApp(mainWindow, mainApp);
	
	ofRunMainLoop();
}
