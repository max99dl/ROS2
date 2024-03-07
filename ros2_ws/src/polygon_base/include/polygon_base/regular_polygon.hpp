#ifndef POLYGON_BASE_REGULAR_POLYGON_HPP
#define POLYGON_BASE_REGULAR_POLYGON_HPP

namespace polygon_base
{

class RegularPolygon
{
public:
    // use this method instead of constructors
    virtual void initialize(double side_length) = 0;
    virtual double area() = 0;
    virtual ~RegularPolygon(){}

protected:
    // with pluginlib a constructor without parameters is required!,
    // so if any parameters to the class are needed,
    // we use the initialize methods to pass them to the object 
    RegularPolygon(){}
};

} // namespace polygon_base

#endif // POLYGON_BASE_REGULAR_POLYGON_HPP