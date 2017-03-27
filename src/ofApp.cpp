#include "ofApp.h"
#include <random>

//--------------------------------------------------------------
void ofApp::setup()
{

jewel.load("diamond.png");// image to use (must be stored in "random/bin/data" folder)

    std::random_device rd; // will be used to seed the engine eng1 below
    std::mt19937 eng1(1337); // this engine  produces the same output every time
    std::mt19937 eng2(rd());// this engine produces different ouput every time

    float meanx = 100.0f; // average
    float meany = 50.0f; // average
    float sd = 15.0f; // standard deviation

    int minx = 0; // minimum number to generate
    int maxx = 1200; // maximum number to generate

    int miny = 0; // minimum number to generate
    int maxy = 970; // maximum number to generate

    // values near the mean are the most likely
    // standard deviation affects the dispersion of generated values from the mean
    std::normal_distribution<float> normx(meanx,sd);
    std::normal_distribution<float> normy(meany,sd);
    std::uniform_int_distribution<> unifrmx(minx, maxx);
    std::uniform_int_distribution<> unifrmy(miny, maxy);

  //generate 20 normally distributed floats  
  for(int n=0 ;  n < 5 ;  n++) 
   {
     X.push_back(normx(eng1));// set of x-coordinates for jewel
     Y.push_back(normy(eng1));//set of y-coordinates for jewel
    //cout<<norm(eng1)<<" "; // different output each time
   }

  //generate 20 uniformly distributed integers 
  for(int n=0 ;  n < 10 ; n++) 
  {
        
     X.push_back(unifrmx(eng2));// set of x-coordinates for jewel
     Y.push_back(unifrmy(eng2));//set of y-coordinates for jewel
    //cout<<unifrm(eng2)<<" ";// same output each time
  }
}
//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
ofBackground(0);

for(auto i = 0u; i < X.size(); i++)
 {
   jewel.draw(X[i], Y[i]);
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
