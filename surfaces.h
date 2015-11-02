#ifndef SURFACES_H_INCLUDED
#define SURFACES_H_INCLUDED
#include "global.h"
class SurfaceObject
{
public:
SurfaceObject();

bool SetSource(const char *filename);
void SetSource_x(unsigned int x);
void SetSource_y(unsigned int y);
void SetSource_coords(unsigned int x, unsigned int y);
void SetSource_width(unsigned int width);
void SetSource_height(unsigned int height);
void SetSource_size(unsigned int width,unsigned int height);
void SetDestination(SDL_Surface *dst);

void SetDestination_x(int x);
void SetDestination_y(int y);
void SetDestination_coords(int i,int y);
void SetDestination_width(unsigned int width);
void SetDestination_height(unsigned int height);
void SetDestination_size(unsigned int width,unsigned int height);

virtual
~SurfaceObject();
private:
SDL_Surface *surface;
SDL_Surface *destination;
SDL_Surface *buff;
SDL_Rect source_rect;
SDL_Rect destination_rect;
protected:

};

class Sprite:public SurfaceObject
{
public:
Sprite();
void ShowFrame(unsigned int col,unsigned int row);
void ShowNext(unsigned int direction);
void ShowPrevious(void);

void SetFramesAmount(unsigned int amount);
void SetHorisontalFrameStep(int step);
void SetVerticalFrameStep(int step);
void SetCols(unsigned int cols);
void SetRows(unsigned int rows);
void SetFrameFrequency(unsigned int freq);
virtual
 ~Sprite();
private:
unsigned int frames_amount;
unsigned int horisontal_frame_step;
unsigned int vertical_frame_step;
unsigned int cols;
unsigned int rows;
unsigned int frame_frequency;
protected:

};

class MovedSprite:public Sprite
{
public:
MovedSprite();
void SetStep(unsigned int step);
void SetTime(unsigned int t);
void SetMax_x(unsigned int x);
void SetMax_y(unsigned int y);
void SetHorisontalSpeed(unsigned int speed);
void SetVericalSpeed(unsigned int speed);
virtual
~MovedSprite();
private:
unsigned int v_speed;
unsigned int h_speed;
unsigned int step;
unsigned int time;
unsigned int max_x;
unsigned int max_y;
protected:
};


#endif // SURFACES_H_INCLUDED
