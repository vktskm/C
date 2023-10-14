#ifndef RECTANGLE
#define RECTANGLE
class Rectangle{
      public:
         Rectangle();
         Rectangle(double l,double w);
         Rectangle& setLength(const double l);
         Rectangle& setWidth(const double w);
         double getLength()const;
         double getWidth()const;
         Rectangle& print();
         double getArea()const;
         double getPerimetro()const;
      private:       
         double length,width;
      };
#endif
