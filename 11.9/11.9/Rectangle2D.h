#pragma once
class Rectangle2D
{
private:
	double x, y, width, height;
	double getX();
	double getY();
	double getWidth();
	double getHeight();
	void setX(double x);
	void setY(double y);
	void setWidth(double w);
	void setHeight(double h);
public:
	Rectangle2D();
	Rectangle2D(double x, double y, double w, double h);
	double getArea();
	double getPerimeter();
	bool contains(double x, double y);
	bool contains(const Rectangle2D &r);
	bool overlaps(const Rectangle2D &r);
};

