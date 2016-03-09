#include<stdio.h>
#include"Points2.h"
#include<math.h>


void Point::setzero()
{
	x = 0;
	y = 0;
}
bool Point::iszero()const
{
	return x == 0 && y == 0;
}

void Point::Set(int xcoord, int ycoord)
{
	x = xcoord;
	y = ycoord;
}

void Point::Set(Point p2)
{
	x = p2.x;
	y = p2.y;
}

float Point::DistanceTo(Point p2) const
{
	float vectorX = p2.x - x;
	float vectorY = p2.y - y;
	float result = pow(vectorX, 2) + pow(vectorY, 2);
	float module = sqrt(result);
	return module;
}

Point Point::operator+(const Point &other) const
{
	Point result;
	result.x = x + other.x;
	result.y = y + other.y;
	return result;
}

/*Point Point::operator+=(const Point &other)
{
	x += other.x;
	y += other.y;
}*/

Point Point::operator-(const Point &other) const
{
	Point result;
	result.x = x - other.x;
	result.y = y - other.y;
	return result;
}

/*Point Point::operator-=(const Point &other)
{
	x -= other.x;
	y -= other.y;
}*/

Point Point::operator*(const Point &other) const
{
	Point result;
	result.x = x * other.x;
	result.y = y * other.y;
	return result;
}

/*Point Point::operator*=(const Point &other)
{
	x *= other.x;
	y *= other.y;
}*/

Point Point::operator=(const Point &other) const
{
	Point result;
	result.x = other.x;
	result.y = other.y;
	return result;
}

Point::Point()
{
	printf("Tengo x %d y %d\n", x, y);
	iszero();
	//Room* my_rooms = new Room[10]; //Creem les habitacions
	//my_player = new Player("Superman", "DESCRIPCIÓ");
}
Point::Point(int x, int y)
{
	this->x = x; //punter a la instància que s'està executant en aqeust moment
	this->y = y;
	printf("Tengo x %d y %d\n", x, y);
}
Point::Point(const Point& p) : x(p.x), y(p.y) //Seteja els valors d'un cop -> : propietat(valor),
{
	printf("Tengo x %d y %d\n", x, y);
}
Point::~Point()
{
	printf("Tengo x %d y %d DESTRUCCION!\n", x, y);
	//delete[] my_rooms; //Alliberem la memòria de l'array
}



int main()
{
	Point point1;
	{
		Point a[10]; //creem 10 points
	}
	Point b(1, 1);
	Point c(b);

	getchar();
	getchar();
	return 0;
}