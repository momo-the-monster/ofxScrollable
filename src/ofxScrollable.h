//
//  ofxScrollable.h
//  ofxScrollable
//
//  Created by jvelazqueztraut on 18/02/14.
//
//
#pragma once

#include "ofMain.h"

class ofxScrollable: public ofFbo{
public:
    
    ofxScrollable();
    
    ~ofxScrollable(){};
    
    void load(string path, float w, float h, float f=20.);
    void load(ofPixels text, float w, float h, float f=20.);
    
    void update();
    
    void reset();
        
    float getWidth();
    float getHeight();
    
    bool pressed(ofPoint pos, int ID=0);
    bool dragged(ofPoint pos, int ID=0);
    bool released(ofPoint pos, int ID=0);

	void setDestinationPercent(float percent);
        
private:
    float width,height;
    ofVec2f anchor;
    
    ofTexture tex;
    float texWidth,texHeight;
    
    float position;
    float destination;
    float velocity;
    
    bool p;
    int pID;
    float pOrigin;
    float desOrigin;
    
    ofTexture fade;
    float fadeSize;
    
    float time;
};
