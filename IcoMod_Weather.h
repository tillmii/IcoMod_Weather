/*
  IcoMod_Weather.cpp - IcoDesk Module to display the current weather and the weather forecast.
  Created by Till Michels, February 2, 2023.
*/

#ifndef IcoMod_Weather_h
#define IcoMod_Weather_h

#include "Arduino.h"
#include "IcoMod.h"

class IcoMod_Weather : public IcoMod
{
  public:
    IcoMod_Weather(Adafruit_ST7735* tft, unsigned int colors[], JsonObject &config);
    void onClick();
    void initialize();
    void refresh();
  private:
    bool _showCurrentWeather;
    StaticJsonDocument<24576> _jsonBuffer;
    unsigned long _lastRefresh;
    unsigned long _refreshTime;
    const char *_city;
    const char *_privateKey;
};

#endif