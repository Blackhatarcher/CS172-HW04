#include "stdafx.h"
#include "Rectangle2D.h"





double Rectangle2D::getX(){
	return x;
}
double Rectangle2D::getY(){
	return y;
}
double Rectangle2D::getHeight(){

	return height;
}
double Rectangle2D::getWidth(){
	return width;
}
void Rectangle2D::setX(double x){
	this -> x = x;
}
void Rectangle2D::setY(double y){
	this->y = y;
}
void Rectangle2D::setWidth(double w){
	this->width = w;
}
void Rectangle2D::setHeight(double h){
	this->height = h;
}

double Rectangle2D::getArea(){
	return width * height;
}
double Rectangle2D::getPerimeter(){
	return 2 * getWidth() + 2 * getHeight();
}
bool Rectangle2D::overlaps(const Rectangle2D & r)
{
	
	return false;
}
bool Rectangle2D::contains(double x, double y){
	bool answer = false;
	//gonna chack if the given x is within x - 1/2 width and  x + 1/2 width
	//and if its within y - 1/2 height and  y + 1/2 height
	//then the point is within the bounds of the rectangle
	if (((x > getX() - getWidth()/2.0)&&(x < getX() + getWidth()/2.0)) && ((y > getY() - getHeight() / 2.0) && (y < getY() + getHeight() / 2.0))){
		return true;
	}
	return answer;
}
bool Rectangle2D::contains(const Rectangle2D & r)
{
	//if all the corner parts of r are inside of the rectangle 
	//return true
	//why are () not needed? my member functions are showing up but don't work with ()
	if ((contains(r.getX - r.getWidth/2, r.getY - r.getHeight))&&(contains(r.getX + r.getWidth/2), r.getY - r.getHeight/2)) {//gonna use nested ifs because they are easier to read
		if ((contains(r.getX + r.getWidth / 2, r.getY + r.getHeight)) && (contains(r.getX - r.getWidth / 2), r.getY + r.getHeight / 2)) {
			return true;
		}
		else
			return false;
	}
	else {
		return false;
	}
}

//defualt rectangle
Rectangle2D::Rectangle2D(){
	setX(0);
	setY(0);
	setHeight(1);
	setWidth(1);
}
Rectangle2D::Rectangle2D(double x, double y, double w, double h){
	setX(x);
	setY(y);
	setHeight(h);
	setWidth(w);
}