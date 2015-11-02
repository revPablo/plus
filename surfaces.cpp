#include "global.h"
#include "surfaces.h"

SurfaceObject::SurfaceObject()
{

}
SurfaceObject::~SurfaceObject()
{


}

bool SurfaceObject::SetSource(const char *filename)
{
SurfaceObject::surface=IMG_Load(filename);
return true;
}
void SurfaceObject::SetSource_x(unsigned int x)
{
SurfaceObject::source_rect.x=x;
}
void SurfaceObject::SetSource_y(unsigned int y)
{
SurfaceObject::source_rect.y=y;
}
void SurfaceObject::SetSource_coords(unsigned int x, unsigned int y)
{
SurfaceObject::source_rect.x=x;
SurfaceObject::source_rect.y=y;
}
void SurfaceObject::SetSource_width(unsigned int width)
{
SurfaceObject::source_rect.w=width;
}
void SurfaceObject::SetSource_height(unsigned int height)
{
 SurfaceObject::source_rect.h=height;
}
void SurfaceObject::SetSource_size(unsigned int width,unsigned int height)
{
SurfaceObject::source_rect.w=width;
SurfaceObject::source_rect.h=height;
}

void SurfaceObject::SetDestination(SDL_Surface *dst)
{
SurfaceObject::destination=dst;
}

void SurfaceObject::SetDestination_x(int x)
{
SurfaceObject::destination_rect.x=x;
}
void SurfaceObject::SetDestination_y(int y)
{
SurfaceObject::destination_rect.y=y;
}
void SurfaceObject::SetDestination_coords(int x,int y)
{
SurfaceObject::destination_rect.x=x;
SurfaceObject::destination_rect.y=y;
}
void SurfaceObject::SetDestination_width(unsigned int width)
{
SurfaceObject::destination_rect.w=width;
}
void SurfaceObject::SetDestination_height(unsigned int height)
{
 SurfaceObject::destination_rect.h=height;
}
void SurfaceObject::SetDestination_size(unsigned int width,unsigned int height)
{
SurfaceObject::destination_rect.w=width;
SurfaceObject::destination_rect.h=height;
}


Sprite::Sprite()
{

}
Sprite::~Sprite()
{

}

void MovedSprite::SetMax_x(unsigned int x)
{
max_x=x;
}
void MovedSprite::SetMax_y(unsigned int y)
{
max_y=y;
}
void MovedSprite::SetTime(unsigned int t)
{
time=t;
}
void MovedSprite::SetVericalSpeed(unsigned int speed)
{
v_speed=max_y/time;
}
void MovedSprite::SetHorisontalSpeed(unsigned int speed)
{
h_speed=max_x/time;
}







