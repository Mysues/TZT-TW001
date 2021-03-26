#pragma once
#include <Arduino.h>

int l_MotorDirPin = 4;
int l_MotorPWMPin = 5;
int l_EncoderB_Pin = 7;
int l_EncoderA_InterruptPin = 2;

int r_MotorDirPin = 9;
int r_MotorPWMPin = 10;
int r_EncoderB_Pin = 8;
int r_EncoderA_InterruptPin = 3;

int buzzer = 11;

int ir1 = A0;
int ir2 = A1;
int ir3 = A2;
int ir4 = A3;
int ir5 = A6;

int voltagePin = A7;

int leftLED = 0;
int rightLED = 1;