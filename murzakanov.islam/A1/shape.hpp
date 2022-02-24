#ifndef SHAPE_HPP
#define SHAPE_HPP

#include "base-types.hpp"
#include <string>

class Shape
{
public:
  virtual ~Shape() = default;

  virtual std::string getName() const = 0;
  virtual double getArea() const = 0;
  virtual rectangle_t getFrameRect() const = 0;
  virtual void move(const point_t& point) = 0;
  virtual void move(double dx, double dy) = 0;
};

#endif
