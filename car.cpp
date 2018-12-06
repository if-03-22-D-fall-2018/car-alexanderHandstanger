#include "car.h"
#include <stdlib.h>

struct CarImplementation{
  enum CarType car_type;
  enum Color color;
  bool is_avaible;
  int fill_level;
  double acceleration_rate;
  int speed;
};

Car get_car(CarType car_type){
  return 0;
}

CarType get_type(Car car){
  return JEEP;
}

Color get_color(Car car){
  return BLUE;
}

int get_fill_level(Car car){
  return 0;
}

double get_acceleration_rate(Car car){
  return 0;
}

int get_speed(Car car){
  return 0;
}

void set_acceleration_rate(Car car, int rate){

}

void accelerate(Car car){

}

void init(){

}
