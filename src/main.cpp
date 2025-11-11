#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>

#define GSR_PIN 34          // Use ADC1 pin. Connect GSR SIG here.
#define NUM_SAMPLES 10      // Simple averaging for less noise

