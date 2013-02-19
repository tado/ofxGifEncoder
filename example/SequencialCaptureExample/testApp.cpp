#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofSetFrameRate(60);
    ofBackground(0,0,0);
    ofSetRectMode(OF_RECTMODE_CENTER);
    
    gifEncoder.setup(ofGetWidth(), ofGetHeight(), 0.02, 4);
    ofAddListener(ofxGifEncoder::OFX_GIF_SAVE_FINISHED, this, &testApp::onGifSaved);
}

//--------------------------------------------------------------
void testApp::update(){
    gifEncoder.update();
}

//--------------------------------------------------------------
void testApp::draw(){
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofRotateZ(ofGetFrameNum() * 10);
    ofSetColor(0, 127, 255);
    ofRect(0, 0, ofGetWidth()/2, ofGetWidth()/2);
    ofPopMatrix();
}

void testApp::onGifSaved(string &fileName) {
    cout << "gif saved as " << fileName << endl;
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
    switch (key) {
        case ' ':
            gifEncoder.toggleRecording();
            break;
        case 's':
            cout << "Start saving..." << endl;
            gifEncoder.save("test.gif");
            break;
        default:
            break;
    }
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 
    
}
//--------------------------------------------------------------
void testApp::exit(){ 
    gifEncoder.exit();
}

