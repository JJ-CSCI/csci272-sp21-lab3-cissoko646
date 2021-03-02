//------------------------------
//  DO NOT MODIFY NEXT LINE
//------------------------------
#include "catch.hpp"
//------------------------------

// Put the assignment code here

class Quaternion {
  public : double num1, num2, num3, num4;
  
  
  Quaternion(double p, double q, double r, double s)
  {

double num1 = p;

double num2 = q;

double num3 = r;

double num4 = s;
  }
  
bool operator==(const Quaternion p)
{

if ((p->num1 == this->num1) && (p->num2 == this->num2) && (p->num3 == this->num3) && (p->num4 == this->num4))
{ return true; }
else
{ return false; }
}

Quaternion operator+(const Quaternion p)

{

Quaternion r;

r.num1 = p.num1+ this->num1;

r.num2 = p.num2+ this->num2;

r.num3 = p.num3+ this->num3;

r.num4 = p.num4+ this->num4;

return r;

}

Quaternion operator-(const Quaternion p)

{

Quaternion r;

r.num1 = p.num1 - this->num1;

r.num2 = p.num2 - this->num2;

r.num3 = p.num3 - this->num3;

r.num4 = p.num4 - this->num4;

return r;

}

Quaternion operator*(double s)

{
  Quaternion p;

p.num1 = s * this->num1;

p.num2 = s * this->num2;

p.num3 = s * this->num3;

p.num4 = s * this->num4;

return p;

}
};


//------------------------------
//   DO NOT MODIFY TEST CASES
//------------------------------
TEST_CASE( "Assignment" ) {
    SECTION( "q1" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        REQUIRE( q == p );
    }
    SECTION( "q2" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q + p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion p{1.0, 2.0, 3.0, 4.0};
        Quaternion r{0.0, 0.0, 0.0, 0.0};
        REQUIRE( (q - p) == r );
    }
    SECTION( "q3" ) {
        Quaternion q{1.0, 2.0, 3.0, 4.0};
        Quaternion r{2.0, 4.0, 6.0, 8.0};
        REQUIRE( (q * 2.0) == r );
    }
}
//------------------------------
