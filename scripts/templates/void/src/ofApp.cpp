#include "ofApp.h"
#include "ofxVoid/ui/FpsLabel.h"

using namespace ofxVoid;

//--------------------------------------------------------------
void ofApp::setup()
{
	ofSetFrameRate(60.0f);
	createUi();
	
	windowResized(ofGetWidth(), ofGetHeight());
	_time = ofGetElapsedTimef();
	_internalTime = 0.0f;
}

void ofApp::createUi()
{
	ui::init(2.0f);
	
	_stage = ui::DisplayObject::create();
	_stage->makeRootObject();
	_stage->disableAutoUpdate();
	_stage->disableAutoDraw();
	
	_panel = ui::Panel::create(ofRectangle(0, 0, 300 * ui::scale, 500 * ui::scale));
	
	_hcell = ui::CellLayout::create(false);
	_stage->addChild(_hcell);
	
	_hcell->addComponent(_panel, ui::ResizeRule(ui::RESIZE_RULE_TYPE_STATIC, 200.0f * ui::scale));
	
	_scene3d = ui::Scene3d::create();
	_scene3d->implementDraw(bind(&ofApp::drawScene, this));
	_hcell->addComponent(_scene3d);
	
	auto fps = ui::FpsLabel::create();
	_panel->addComponent(fps);
}

void ofApp::update()
{
	float t = ofGetElapsedTimef();
	_timeStep = t - _time;
	_time = t;
	_internalTime += _timeStep;
	
	_stage->update(_internalTime, _timeStep);
}

void ofApp::draw()
{
	ofBackground(0);
	_stage->draw();
}

void ofApp::drawScene()
{
	ofDrawGrid(10, 10.0f, true);
}

void ofApp::keyPressed(int key)
{
	
}

void ofApp::keyReleased(int key)
{

}

void ofApp::mouseMoved(int x, int y )
{
	
}

void ofApp::mouseDragged(int x, int y, int button)
{

}

void ofApp::mousePressed(int x, int y, int button)
{

}

void ofApp::mouseReleased(int x, int y, int button)
{

}

void ofApp::mouseEntered(int x, int y)
{

}

void ofApp::mouseExited(int x, int y)
{

}

void ofApp::windowResized(int w, int h)
{
	_hcell->setSize(ofVec2f(w, h));
}

void ofApp::gotMessage(ofMessage msg)
{

}

void ofApp::dragEvent(ofDragInfo dragInfo)
{

}

void ofApp::exit()
{
	
}
