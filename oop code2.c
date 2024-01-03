Task 01:-

#include<iostream>
using namespace std;

class Rectangle {
public:
      double height;
      double width;
      double length;

    Rectangle() {
      height = 5.0;
      width = 5.0;
      length = 5.0;
  }
    Rectangle(double h, double w, double l) {
      height = h;
      width = w;
      length = l;
  }

   double Area() {
     return length * width;
  }

   double Volume() {
     return height * width * length;
  }
};
    int main() {
    Rectangle area1;
    cout << "Area of rectangle (default constructor): " << rect1.Area() << endl;
    cout << "Volume of rectangle (default constructor): " << rect1.Volume() << endl;

    Rectangle area2(3.0, 6.0, 9.0);
    cout << "Area of rectangle (parameterized constructor): " << rect2.Area() << endl;
    cout << "Volume of rectangle (parameterized constructor): " << rect2.Volume() << endl;

    double h, w, l;
    cout << "Enter height, width and length: ";
    cin >> h >> w >> l;
    Rectangle area3(h, w, l);
    cout << "Area of rectangle (user input): " << rect3.Area() << endl;
    cout << "Volume of rectangle (user input): " << rect3.Volume() << endl;
    return 0;
}



Task 02:-

#include<iostream>
using namespace std;

class Employees{
private:
  string name;
  double salary;

public:
    void setName(string n)
    {
      name = n;
    }
    void setSalary(double s)
   {
      salary = s;
   }

    string getName()
   {
      return name;
   }
    double getSalary()
   {
      return salary;
   }
    double yearlySalary()
   {
      return salary * 12;
   }
};
  int main(){
    Employees emp;
    emp.setName("Sultana");
    emp.setSalary(60000);
    cout << "Name: " << emp.getName() << endl;
    cout << "Yearly Salary: " << emp.yearlySalary() << endl;
    return 0;
}




Task 03:-

#include<iostream>
using namespace std;

class Student{
public:
   string name;
   int id;
   string course;
   string section;

  Student(){
    name = "Sultana";
    id = 00808;
    course = "ECSE";
    section = "D";
  }
};
int main(){
   Student you;
   cout << "Name: " << you.name << endl;
   cout << "ID: " << you.id << endl;
   cout << "Course: " << you.course << endl;
   cout << "Section: " << you.section << endl;
   return 0;
}



Task 04:-

#include<iostream>
using namespace std;

class Student{
public:
  string name;
  int id;
  string course;
  string section;

 Student(string n, int i, string c, string s) {
   name = n;
   id = i;
   course = c;
   section = s;
 }
};
int main(){
   Student Top("Your Name", 00808, "Your Course", "Your Section");
   cout << "Name: " << you.name << endl;
   cout << "ID: " << you.id << endl;
   cout << "Course: " << you.course << endl;
   cout << "Section: " << you.section << endl;
   return 0;
}
