#ifndef DRV_DHT22
#define DRV_DHT22


#include "device.h"
#include <Libraries/DHT/DHT.h>

float devDHT22_heatIndex();
float devDHT22_dewPoint();
uint8_t init_DEV_DHT22(uint8_t operation);
uint8_t devDHT22_read(TempAndHumidity& dest);
float devDHT22_comfortRatio();
ErrorDHT devDHT22_getLastError();

#endif /*DRV_DHT22*/
