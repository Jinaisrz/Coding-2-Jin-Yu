#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){


    // try to grab at this size
	camWidth = 640;
	camHeight = 480;
	
	vidGrabber.setVerbose(true);
	vidGrabber.setup(camWidth,camHeight);

	font.load("Courier New Bold.ttf", 7);
    
    // this set of characters comes from the Ascii Video Processing example by Ben Fry,
	// changed order slightly to work better for mapping
    asciiCharacters =  string("..,,,'''``--_:;^^**""=+<>iv%&xclrs)/){}I?!][1taeo7zjLunT#@JCwfy325Fp6mqSghVd4EgXPGZbYkOA8U$KHDBWNMR0Q");
	
    ofEnableAlphaBlending();
}


//--------------------------------------------------------------
void ofApp::update(){
	vidGrabber.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    //-----------------
    int a=ofMap(mouseX, 0, ofGetWidth(), 0, 255);
    ofBackground(a,255-a,0);
    //=====================
    // change background video alpha value based on the cursor's x-position
    float videoAlphaValue = ofMap(mouseX, 0, ofGetWidth(), 0, 0);
    
    // set a white fill color with the alpha generated above
    ofSetColor(0,2,255,videoAlphaValue);

    // draw the raw video frame with the alpha value generated above
    vidGrabber.draw(0,0);

	ofPixelsRef pixelsRef = vidGrabber.getPixels();
    //=================
    int b=ofMap(mouseY, 0, ofGetWidth(), 0, 255);
    ofSetColor(b,255-(b/10),210);
    //===================

    for (int i = 0; i < camWidth; i+= 1){
        for (int j = 0; j < camHeight; j+= 4){
            // get the pixel and its lightness (lightness is the average of its RGB values)
            float lightness = pixelsRef.getColor(i,j).getLightness();
            
            // calculate the index of the character from our asciiCharacters array
            int character = powf( ofMap(lightness, 0, 255, 0, 1), 2.5) * asciiCharacters.size();

            // draw the character at the correct location
            font.drawString(ofToString(asciiCharacters[character]), i, j);
        }
    }
}


//--------------------------------------------------------------
void ofApp::keyPressed  (int key){ 
	
	// in fullscreen mode, on a pc at least, the 
	// first time video settings the come up
	// they come up *under* the fullscreen window
	// use alt-tab to navigate to the settings
	// window. we are working on a fix for this...
	
	if (key == 's' || key == 'S'){
		vidGrabber.videoSettings();
	}
	
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
