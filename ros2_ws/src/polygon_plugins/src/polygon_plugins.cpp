#include <polygon_base/regular_polygon.hpp>
#include <cmath> // for sqrt

namespace polygon_plugins
{

class Square : public polygon_base::RegularPolygon
{
protected:
    double side_length_;
public:
    void initialize(double side_length) override {
        side_length_ = side_length;
    }

    double area() override {
        return side_length_ * side_length_;
    }
};

class Triangle : public polygon_base::RegularPolygon
{
protected:
    double side_length_;
public:
    void initialize(double side_length) override {
        side_length_ = side_length;
    }

    double area() override {
        return sqrt((side_length_ * side_length_)
                    - ((side_length_ / 2) * (side_length_ / 2)));
    }
};
}  // namespace polygon_plugins


#include <pluginlib/class_list_macros.hpp>
// first argument:  the fully-qualified type of the plugin class
// second argument: the fully-qualified type of the base class
PLUGINLIB_EXPORT_CLASS(polygon_plugins::Square, polygon_base::RegularPolygon)
PLUGINLIB_EXPORT_CLASS(polygon_plugins::Triangle, polygon_base::RegularPolygon)