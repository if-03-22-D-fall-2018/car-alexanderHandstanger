/*----------------------------------------------------------
*				HTBLA-Leonding / Klasse: <your class>
* ---------------------------------------------------------
* Exercise Number: 0
* Title:			car.h
* Author:			P. Bauer
* Due Date:		January 9, 2015
* ----------------------------------------------------------
* Description:
* Car abstract data type demo.
* ----------------------------------------------------------
*/
#ifndef ___CAR_H
#define ___CAR_H

#define MAX_CARS_IN_PARK 6

enum CarType{
  AIXAM, FIAT_MULTIPLA, JEEP
};

enum Color{
  RED, GREEN, BLUE, ORANGE, SILVER, BLACK
};

typedef struct CarImplementation* Car;

Car get_car(enum CarType);

enum CarType get_type(Car car);

enum Color get_color(Car car);

int get_fill_level(Car car);

double get_acceleration_rate(Car car);

int get_speed(Car car);

void set_acceleration_rate(Car car, double rate);

void accelerate(Car car);

void init();

#endif
