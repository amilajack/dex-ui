// #include "ofMain.h"
// #include "ofApp.h"

// // int main( ){
// //   ofSetCurrentRenderer(ofGLProgrammableRenderer::TYPE);
// //   ofSetupOpenGL(1920,1200,OF_WINDOW);
// //   ofRunApp(new ofApp());
// // }

// int main( ){
//   ofSetupOpenGL(1920,1200,OF_WINDOW);
//   ofGLWindowSettings settings;
//   settings.setGLVersion(3,2);
//   ofCreateWindow(settings);
//   ofRunApp(new ofApp());
// }

#include "ofMain.h"
#include "ofApp.h"

//========================================================================
int main( ){
	ofSetupOpenGL(1024,768,OF_WINDOW);			// <-------- setup the GL context

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp(new ofApp());

}
