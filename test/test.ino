
#include "Curve.h"

float ind[] = {-1,0,1,2,3};
float dep[] = {-1,0,2,4,2};
Curve myCurve = Curve();

void setup(){
  Serial.begin(115200);
  while(!Serial){}
  Serial.println("INIT");
  myCurve.initialize(ind,dep,5);

  Serial.println(myCurve.compute(-0.25));
  Serial.println(myCurve.compute(0.2));
  Serial.println(myCurve.compute(1.5));
  Serial.println(myCurve.compute(2.3));

  Serial.println(myCurve.compute(3));
}

void loop(){


}
