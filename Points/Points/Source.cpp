//Jordi Oña Rufí

#include<stdio.h>
#include<math.h>

struct Point
{
	int x, y;

	void setzero() 
	{
		x = 0;
		y = 0;
	}
	bool iszero() const
	{
		return x == 0 && y == 0;	
	}
	void Set(int xcoord, int ycoord)
	{
		x = xcoord;
		y = ycoord;
	}
	void Set(Point p2)
	{
		x = p2.x;
		y = p2.y;
	}

	float DistanceTo(Point p2) const
	{
		float vectorX = p2.x - x;
		float vectorY = p2.y - y;
		float result = pow(vectorX, 2) + pow(vectorY, 2);
		float module = sqrt(result);
		return module;
	}

	Point operator+(const Point &other) const
	{
		Point result;
		result.x = x + other.x;
		result.y = y + other.y;
		return result;
	}

	Point operator-(const Point &other) const
	{
		Point result;
		result.x = x - other.x;
		result.y = y - other.y;
		return result;
	}

	Point operator*(const Point &other) const
	{
		Point result;
		result.x = x * other.x;
		result.y = y * other.y;
		return result;
	}

	Point operator=(const Point &other) const
	{
		Point result;
		result.x = other.x;
		result.y = other.y;
		return result;
	}

};


void Set(Point &p2)
{
	int x, y;
	printf("Tell me what position X you want for the point 2:");
	scanf_s("%i", &x);
	printf("Now, introduce the position Y for the point 2:");
	scanf_s("%i", &y);

	p2.x = x;
	p2.y = y;
}


void swap(int &a, int &b) //REFERENCE
{
	int temp = a;
	a = b;
	b = temp;
}
								


int main()
{
	Point point1;
	
	point1.setzero(); //Sets point 1 to 0

	point1.iszero(); //Checks if point 1 is set yo 0

	int x;
	int y;

	printf("Tell me what position X you want for the point 1:");
	scanf_s("%i", &x);
	printf("Now, introduce the position Y for the point 1:");
	scanf_s("%i", &y);

	point1.Set(x, y); //Stablishes coordinates X and Y from point 1

	Point point2;

	Set(point2); //Stablishes coordinates X and Y from point 2

	printf("The distance between point 1 and point 2 is: %.2f\n", point1.DistanceTo(point2)); //Prints the distance between point 1 and point 2

	//OPERATOR
	Point c;
	c = point1 + point2;
	

	//SWAP
	int a = 5;
	int b = 3;
	printf("A = %i B = %i\n", a, b);
	swap(a, b);
	printf("A = %i B = %i\n", a, b);
	getchar();
	getchar();
	return 0;
}

