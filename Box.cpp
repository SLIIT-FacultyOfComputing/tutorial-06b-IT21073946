#include "Box.h"

// Implement setters and getters
void box :: setlength(int l)
{
  length = l;
} 
void box :: setwidth(int w)
{
  width = w;
}
void box :: setheight(int h)
{
  height = h;
}
void box :: getlength()
{
  return length;
}
void box :: getwidth()
{
  return width;
}
void box :: getheight()
{
  return height;
}
// Implemenet the calcVolume() function
int Box::calcVolume() 
{
  return length * height * width;
}
