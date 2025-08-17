#define EPS (1e-10)
#define eq(a, b) (fabs((a) - (b)) < EPS)
class Point {
	typedef Point P;
public:
    ld x, y;

    Point(ld _x = 0, ld _y = 0) : x(_x), y(_y) {}

    P operator+(Point p) { return P(x + p.x, y + p.y); }
    P operator-(Point p) { return P(x - p.x, y - p.y); }
    P operator*(ld a) { return P(a * x, a * y); }
    P operator/(ld a) { return P(x / a, y / a); }

    ld abs() { return sqrtl(norm()); }
    ld norm() { return x * x + y * y; }

    bool operator<(const P& p) const { return tie(x, y) < tie(p.x, p.y); }
    bool operator==(const P& p) const { return eq(x, p.x) && eq(y, p.y); }
	ld dot(P& p) const { return x * p.x + y * p.y; }
	ld cross(P& p) const { return x * p.y - y * p.x; }

};
typedef Point Vector;
struct Segment {
    Point A;
    Point B;
};
typedef Segment Line;
class Circle {
public:
    Point C;
    ld r;
    Circle(Point C = Point(), ld r = 0.0) : C(C), r(r) {}
};
typedef vector<Point> Polygon;
