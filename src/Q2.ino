// Testing the tracing functionality
//
// author: Oliver Ryall, Heather Bryn
#include "LetESP32.h"

const char* ssid = "NETGEAR35";
const char* password = "magicalfinch482";
const char* ws = "ws://192.168.1.2:1234";
LetESP32 tracer(ssid, password, ws, "7sgC703x");

hw_timer_t *timer;

void setup() {
    tracer.connect();
}



void loop() {
   tracer.event(1);
   tracer.event(1);
}