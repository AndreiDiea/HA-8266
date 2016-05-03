#include "drv/drvWiFi.h"

uint8_t init_DEV_WIFI(uint8_t operation)
{
	uint8_t retVal = DEV_ERR_OK;
	do
	{
		if(operation & ENABLE)
		{
			//init GPIO, enable device
			
			//configure device
			if(operation & CONFIG)
			{
			
			}
		}
		else
		{
			//deinit GPIO
		}
	}
	while(0);

	return retVal;
}