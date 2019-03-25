/**
 *
 *****************************************************************
 * IOT Challenges - https://instagram.com/iotchallenges          *
 *****************************************************************
 * Evandro Fruhauf                                               *
 *  GitHub - https://github.com/evandrodp                        *
 *  LinkedIn - http://linkedin.com/in/evandrofruhauf             *
 *****************************************************************
 * This code can contain parts from other open-sources projects, *
 * whenever possible it will be quoted.                          *
 *****************************************************************
 *
 * Sempahore
 *
 * Challenge: Turn the leds RED / GREEN / YELLOW on in sequence
 *
**/
#include <Arduino.h>

// Set LEDs
#define LED_GREEN 8
#define LED_YELLOW 9
#define LED_RED 10

void activateLed(int led, int time);

void setup()
{
  // initialize LEDs  digital pin as an output.
  pinMode(LED_GREEN, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_RED, OUTPUT);
}

void loop()
{
  activateLed(LED_RED, 2500);
  activateLed(LED_GREEN, 2500);
  activateLed(LED_YELLOW, 1250);
}

void activateLed(int led, int time) {
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(led, HIGH);
  // wait for X milliseconds
  delay(time);
  // turn the LED off by making the voltage LOW
  digitalWrite(led, LOW);
}
