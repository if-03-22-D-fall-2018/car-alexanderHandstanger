#include "car.h"
#include <stdlib.h>



struct CarImplementation{
  enum CarType car_type;
  enum Color color;
  double fill_level;
  double accelerate;
  int speed;
  bool is_avaible;
};

struct CarImplementation aixam = {AIXAM, RED, 16.0, 0.0, 0, true};
struct CarImplementation fiat_multipla = {FIAT_MULTIPLA, GREEN, 65.0, 0.0, 0, true};
struct CarImplementation fiat_multipla1 = {FIAT_MULTIPLA, BLUE, 65.0, 0.0, 0, true};
struct CarImplementation fiat_multipla2 = {FIAT_MULTIPLA, ORANGE, 65.0, 0.0, 0, true};
struct CarImplementation jeep = {JEEP, SILVER, 80.0, 0.0, 0, true};
struct CarImplementation jeep1 = {JEEP, BLACK, 80.0, 0.0, 0, true};

static Car car_park[6] = {&aixam, &fiat_multipla, &fiat_multipla1, &fiat_multipla2, &jeep, &jeep1};

Car get_car(CarType car_type){
  for (int i = 0; i < MAX_CARS_IN_PARK; i++) {
    if(car_park[i]->car_type == car_type && car_park[i]->is_avaible == true){
      car_park[i]->is_avaible = false;
      return car_park[i];
    }
  }
  return 0;
}

CarType get_type(Car car){
  return car->car_type;
}

Color get_color(Car car){
  return car->color;
}

int get_fill_level(Car car){
  return car->fill_level;
}

double get_acceleration_rate(Car car){
  return car->accelerate;
}

int get_speed(Car car){
  return car->speed;
}

void set_acceleration_rate(Car car, double rate){
  if(car->accelerate < 0){
    car->accelerate = -8;
  }
  else if(car->car_type == AIXAM && rate > 1.0){
    car->accelerate = 1.0;
  }
  else if(car->car_type == FIAT_MULTIPLA && rate > 2.26){
    car->accelerate = 2.26;
  }
  else if(car->car_type == JEEP && rate > 3.14){
    car->accelerate = 3.14;
  }
  else{
    car->accelerate = rate;
  }
}

void accelerate(Car car){

}

void init(){
  for (int i = 0; i < MAX_CARS_IN_PARK; i++) {
    car_park[i]->is_avaible = true;
    car_park[i]->accelerate = 0;
  }
}
