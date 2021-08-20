#include "Box.h"

// Implement setters and getters
void Box :: setLength(int boxLength){
  length=boxLength;
}
void Box :: setWidth(int boxWidth){
  width=boxWidth;
}
void Box :: setHeight(int boxheight){
  height=boxheight;
}

int Box :: getLength(){
  return length;
}
int Box :: getWidth(){
  return width;
}
int Box :: getHeight(){
  return height;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {

  int volume;
  volume=length*width*height;
  return volume;
}
