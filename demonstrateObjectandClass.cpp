#include <iostream.h>
#include <conio.h>

class Rectangle {
  private:
    int length;
    int breadth;

  public:
    Rectangle() {
      length = 0;
      breadth = 0;
    }

    void setDimensions(int l, int b) {
      length = l;
      breadth = b;
    }

    int area() {
      return length * breadth;
    }

    int perimeter() {
      return 2 * (length + breadth);
    }
};

void main() {
  Rectangle r1, r2;

  r1.setDimensions(4, 5);
  r2.setDimensions(6, 7);

  cout << "Area of Rectangle 1: " << r1.area() << endl;
  cout << "Perimeter of Rectangle 1: " << r1.perimeter() << endl;

  cout << "Area of Rectangle 2: " << r2.area() << endl;
  cout << "Perimeter of Rectangle 2: " << r2.perimeter() << endl;

  getch();
}
