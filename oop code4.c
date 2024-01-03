Task 1 :

#include <iostream>
class Marks {
private:
  int mark;
public:
  Marks(int m) : mark(m) {}
  int getMark() const {
  return mark;
}
  Marks operator+(const Marks &m) {
  int total = this->mark + m.mark;
  return Marks(total);
}
};
int main() {
  int q1, q2, lab, mid, final;
  cout << "Quiz 1 (out of 10): ";
  cin >> q1;
  cout << "Quiz 2 (out of 10): ";
  cin >> q2;
  cout << "Lab (out of 30): ";
  cin >> lab;
  cout << "Mid (out of 20): ";
  cin >> mid;
  cout << "Final (out of 30): ";
  cin >> final;
  Marks Q1(q1), Q2(q2), Lab(lab), Mid(mid), Final(final);
  Marks total = Q1 + Q2 + Lab + Mid + Final;
  cout << "Total marks: " << total.getMark() << std::endl;
  return 0;
}


---------------------------


Task 2 :

#include <iostream>
class Circle {
   private:
     double radius;
  public:
    Circle(double r) : radius(r) {}
    double getRadius() const {
    return radius;
}
    void setRadius(double r) {
    radius = r;
}
    double getArea() const {
    return M_PI * radius * radius;
}
    Circle operator+(const Circle& c) {
    double newRadius = this->radius + c.radius;
    return Circle(newRadius);
}
};

int main() {
   Circle c1(4);
   cout << "First circle radius: " << c1.getRadius() << std::endl;
   cout << "First circle area: " << c1.getArea() << std::endl;
   Circle c2(5);
   cout << "Second circle radius: " << c2.getRadius() << std::endl;
   cout << "Second circle area: " << c2.getArea() << std::endl;
   Circle c3 = c1 + c2;
   cout << "Third circle radius: " << c3.getRadius() << std::endl;
   cout << "Third circle area: " << c3.getArea() << std::endl;
return 0;
}


--------------------------------

Task 3 :

#include <iostream>
#include <string>
class Color {
private:
    std::unordered_map<std::string, std::string> colorCombination = {
    {"redblue", "Violet"},
    {"bluered", "Violet"},
    {"redyellow", "Orange"},
    {"yellowred", "Orange"},
    {"blueyellow", "Green"},
    {"yellowblue", "Green"}
};
string color;
public:
   Color(const std::string& c) : color(c) {}
   Color operator+(const Color& c) {
   string combinedColor = color + c.color;
   if (colorCombination.find(combinedColor) != colorCombination.end()) {
   return Color(colorCombination[combinedColor]);
}
   return Color("Unknown");
}
   string getColor() const {
   return color;
}
};
  Color readColor() {
  string input;
  cout << "Enter Color: ";
  cin >> input;
  return Color(input);
}
  int main() {
  Color C1 = readColor();
  Color C2 = readColor();
  Color C3 = C1 + C2;
  std::cout << "Color formed: " << C3.getColor() << std::endl;
  return 0;
}

------------------------------

Task 4 :

#include <iostream>
class Triangle {
private:
  double base;
  double height;
public:
  Triangle(double b, double h) : base(b), height(h) {}
double getBase() const {
  return base;
}
  double getHeight() const {
  return height;
}
  void setBase(double b) {
  base = b;
}
  void setHeight(double h) {
  height = h;
}
  double calcArea() const {
  return 0.5 * base * height;
}
  Triangle operator-(const Triangle& t) {
  double newBase = (base > t.base) ? base - t.base : t.base - base;
  double newHeight = (height > t.height) ? height - t.height : t.height - height;
  return Triangle(newBase, newHeight);
}
};
int main() {
  Triangle t1(10, 5);
  std::cout << "First Triangle Base: " << t1.getBase() << std::endl;
  std::cout << "First Triangle Height: " << t1.getHeight() << std::endl;
  std::cout << "First Triangle area: " << t1.calcArea() << std::endl;
  Triangle t2(5, 3);
  std::cout << "Second Triangle Base: " << t2.getBase() << std::endl;
  std::cout << "Second Triangle Height: " << t2.getHeight() << std::endl;
  std::cout << "Second Triangle area: " << t2.calcArea() << std::endl;
  Triangle t3 = t1 - t2;
  std::cout << "Third Triangle Base: " << t3.getBase() << std::endl;
  std::cout << "Third Triangle Height: " << t3.getHeight() << std::endl;
  std::cout << "Third Triangle area: " << t3.calcArea() << std::endl;
  return 0;
}

---------------------------

Task 5 :

#include <iostream>
#include <string>
class Coordinates {
private:
 int x;
 int y;
public:
 Coordinates(int x_val, int y_val) : x(x_val), y(y_val) {}
 int getX() const {
 return x;
}
 int getY() const {
 return y;
}
 Coordinates operator-(const Coordinates& c) {
    int new_x = this->x - c.x;
    int new_y = this->y - c.y;
    return Coordinates(new_x, new_y);
}
 Coordinates operator*(const Coordinates& c) {
    int new_x = this->x * c.x;
    int new_y = this->y * c.y;
    return Coordinates(new_x, new_y);
}
 string checkEqual(const Coordinates& c) {
 return (this->x == c.x && this->y == c.y) ? "Points are equal" : "Points are not equal";
}
};
int main() {
  int x1, y1, x2, y2;
  std::cin >> x1 >> y1;
  Coordinates p1(x1, y1);
  std::cin >> x2 >> y2;
  Coordinates p2(x2, y2);
  Coordinates p4 = p1 - p2;
  std::cout << "Result of subtraction: (" << p4.getX() << ", " << p4.getY() << ")" << std::endl;
  Coordinates p5 = p1 * p2;
  std::cout << "Result of multiplication: (" << p5.getX() << ", " << p5.getY() << ")" << std::endl;
  std::string point_check = p4.checkEqual(p5);
  std::cout << point_check << std::endl;
 return 0;
}

---------------------------------
