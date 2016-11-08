#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    red = 255;
    green = 180;
    blue = 0;
    
    for(int i = 0; i<100; i++){
        for(int j = 0; j<100; j++){
            ho[i][j] = ofVec2f(i*ofGetWidth()/100, j*ofGetHeight()/100);
        }
    }

}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetBackgroundAuto(false);
    ofBackground(0);
 
    
    

}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i = 0; i<100; i++){
        for(int j = 0; j<100; j++){
            ofSetColor(red+ofRandom(-30,30),green+ofRandom(-30,30),blue+ofRandom(-30,30));
            ofDrawCircle(ho[i][j], 1);
        }
    }
    
    for (int i=0; i<numLines; i++)
    {
        float angle = ofRandom(ofDegToRad(360.0));
        float distance = ofRandom(minRadius, maxRadius);
        float xOffset = cos(angle) * distance;
        float yOffset = sin(angle) * distance;
        float alpha = ofMap(distance, minRadius, maxRadius, 50, 0);
        ofSetColor(red,green,blue);
        ofSetBackgroundColor(0);
        ofDrawLine(ofGetMouseX(), ofGetMouseY(),ofGetMouseX()+xOffset, ofGetMouseY()+yOffset);
    }
    if(ofGetMousePressed(OF_MOUSE_BUTTON_LEFT)) {
        
        // If the left mouse button is pressed...
        red = ofRandom(255);
        green = ofRandom(255);
        blue = ofRandom(255);
        
     

    
    }
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
   

}


//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
