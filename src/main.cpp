#include <iostream>
using namespace std;
#define PI 3.14

// Base class
class Shape
{
	public:

	// pure virtual function providing interface framework.
	virtual float getArea() = 0;
		void setWidth(int w)
		{
			width = w;
		}
		void setHeight(int h)
		{
			height = h;
		}
		void setRadius(float r)
		{
			radius = r;
		}

	protected:
		int width;
		int height;
		float radius;
		};

class Triangle: public Shape
{
	public:
		float getArea()
		{
			return (width * height)/2;
		}
};

class Circle: public Shape
{
	public:
		float getArea()
		{
			return PI*radius*radius;
		}
};

int main(void)
{
	Triangle Tri;
	Tri.setWidth(5);
	Tri.setHeight(7);
	// Print the area of the object.
	cout << "Total Triangle area: " << Tri.getArea() << endl;

	Circle circle;
	circle.setRadius(5);
	cout << "Total Circle area: " << circle.getArea() << endl;

	return 0;
}
