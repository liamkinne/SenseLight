#include "SenseLight.h"

SenseLight::SenseLight(uint8_t analogPin, uint8_t enablePin): _analogPin(analogPin), _enablePin(enablePin) {
	pinMode(_analogPin, INPUT);
	pinMode(_enablePin, OUTPUT);
}

SenseLight::~SenseLight() { /* NOTHING TO DECONSTRUCT */ }

uint16_t SenseLight::get() {
	return _value;
}

void SenseLight::enable() {
	digitalWrite(_enablePin, HIGH);
}

void SenseLight::disable() {
	digitalWrite(_enablePin, LOW);
}

SenseLight::~SenseLight() { /* NOTHING TO DECONSTRUCT */ }

void SenseLight::refresh() {
	_value = analogRead(_analogPin);
}