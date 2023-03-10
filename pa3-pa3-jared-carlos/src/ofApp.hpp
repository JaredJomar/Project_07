#pragma once

#include <cmath>
#include "ofMain.h"
// Code
#include "Fractal.hpp"
#include "CircleFractal.hpp"
#include "TreeFractal.hpp"
#include "SierpinskiFractal.hpp"
#include "BarnsleyFernFractal.hpp"
#include "SnowFlake.hpp"

class ofApp : public ofBaseApp
{
private:
  char mode = '1';
  float angle = 0;
  unsigned int fullscreen;
  // Code
  int levels = 1;
  // Code
  int index = 0;
  // Code
  vector<ofColor> colors = {};

  CircleFractal *circleFractal;
  TreeFractal *treeFractal;
  SierpinskiFractal *sierpinskiFractal;
  BarnsleyFernFractal *barnsleyFernFractal;
  SnowFlake *snowFlake;

  vector<Fractal *> fractals;
  // Code
  bool Animation = false;
  bool increases_Levels = true;
  int animation_Counter = 0;

public:
  void setup();
  void update();
  void draw();

  void keyPressed(int key);
  void keyReleased(int key);
  void mouseMoved(int x, int y);
  void mouseDragged(int x, int y, int button);
  void mousePressed(int x, int y, int button);
  void mouseReleased(int x, int y, int button);
  void mouseEntered(int x, int y);
  void mouseExited(int x, int y);
  void windowResized(int w, int h);
  void dragEvent(ofDragInfo dragInfo);
  void gotMessage(ofMessage msg);

  void drawMode1(float x, float y, float r, int n);
  // Code
  void drawTree(float x, float y, int n, float length, float rad);
  void drawMode2();
  void drawMode3(float x, float y, float size, int n);
  void drawMode4(float x, float y, float n);
};
