#ifndef AEROMOD_H
#define AEROMOD_H

#include <string>
using std::string;

class Aeromodello{
      public:
             Aeromodello(string id="",double lat=0,double longit=0,double alt=0,double deltaLa=0,double deltaLon=0,double deltaAl=0,double pTC=0,double pTP=0);
             void setPTCPTP(double pTC,double pTP);
             virtual void Avanza();
             virtual void Modifica()=0;
             
             virtual void print()=0;
             
      private:
              string ID;
              double latitudine,longitudine,altitudine;
              double deltaLat,deltaLong,deltaAlt;
              double posizioneTimoneCoda,posizioneTimoneProfondita;
      };

#endif
