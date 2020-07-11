/*
Copyright 2019 Erick Rafael Garcia Martinez
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
    http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
last revision July/11/2020
*/

#include "Curve.h"

Curve::Curve(){

}

void Curve::initialize(float _x[],float _y[],int _size){
  // for(int i =0; i<_size;i++){
  //   X[i]=_x[i];
  //   Y[i]=_y[i];
  // }

  X=_x;
  Y=_y;
  size= _size;
}

float Curve::compute(float xin){
  float res =0;
  for (int i=0;i<size-1;i++){
    if((xin<=X[i+1] && xin>=X[i]) || (xin>=X[i+1] && xin<=X[i])){
      // Serial.println("l");
      // Serial.println(X[i]);
      // Serial.println(X[i+1]);
      // Serial.println(Y[i]);
      // Serial.println(Y[i+1]);
      res = (((Y[i+1]-Y[i])*(xin-X[i]))/(X[i+1]-X[i]))+Y[i];
      break;
    }
  }
  return res;
}
