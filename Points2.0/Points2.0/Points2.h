struct Point
{

	int x, y;

	Point(); //Constructor buit
	Point(int x, int y);
	Point(const Point& p); //Constructor de còpia
	~Point(); //Destructor buit
	void setzero();
	bool iszero() const;
	void Set(int xcoord, int ycoord);
	void Set(Point p2);
	float DistanceTo(Point p2) const;
	Point operator+(const Point &other) const;
	//Point operator+=(const Point &other);
	Point operator-(const Point &other) const;
	//Point operator-=(const Point &other);
	Point operator*(const Point &other) const;
	//Point operator*=(const Point &other);
	Point operator=(const Point &other) const;
};

