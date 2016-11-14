#include <stdio.h>
#include "i2c_core.h"
#include "MLX90614.h"

int mlx90614_read_in( unsigned char addr )
{
		unsigned char I2CData[2];
		int temp;
		int size;
		
		size = I2C_Read( addr, 6, I2CData, 2 );
		
		if( size != 2 )
		{
			//	printf("mlx90614 read failed!\r\n");
				return -1;
		}
		temp = (I2CData[1] << 8 | I2CData[0])*2;
		temp -= 27315;
	//    UART_net_PutArray(I2CData,2);
		return temp;
}
int mlx90614_read_out( unsigned char addr )
{
		unsigned char I2CData[2];
		int size;
		int temp;
		
		size = I2C_Read( addr, 7, I2CData, 2 );
		
		if( size != 2 )
		{
			//	printf("mlx90614 read failed!\r\n");
				return -1;
		}
		temp = (I2CData[1] << 8 | I2CData[0])*2;
		temp -= 27315;
		
		return temp;
}
