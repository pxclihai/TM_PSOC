/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>
#include "i2c.h"
#include "i2c_core.h"
#include "MLX90614.h"
#define Addr 0x00
#define BYTE0(dwTemp)       ( *( (char *)(&dwTemp)	  ) )
#define BYTE1(dwTemp)       ( *( (char *)(&dwTemp) + 1) )
#define BYTE2(dwTemp)       ( *( (char *)(&dwTemp) + 2) )
#define BYTE3(dwTemp)       ( *( (char *)(&dwTemp) + 3) )
uint8 data_to_send[50];	//发送数据缓存
void DT_Send_RCData(int16 T1,int16 T2,int16 T3,int16 T4,int16 T5,int16 T6,int16 T7,int16 T8);
uint8 cammand[2] = {0x53,0x00};
uint8 cammand1[2] = {0x01,0x02};
uint8 cammand_clear[2] = {0x00,0x00};
int16 T1;
int16 T2;
int16 T3;
int16 T4;
int16 T5;
int16 T6;
int16 T7;
int16 T8;
uint8 Addr1 = 0x0; 
uint8 Addr2 = 0x0; 
uint8 id_1 ;
uint8 T_temp[13] ;
int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    SYS_I2C_Init();
//    I2C_Write(0, 0x22, cammand_clear, 2 );
//    I2C_Write(0, 0x22, cammand1, 2 );
    CyDelay(100);
    UART_net_Init();
    UART_net_Start();
    isr_rx_net_Start();
    UART_net_PutString("UART_INIT_OK!\n");
    I2C_Read(0, 0x22, &Addr2, 1 );
//    if(1)
//    {
//    I2C_Write(0, 0x2e, cammand_clear, 2 );
//    CyDelay(1000);
//    I2C_Write(0, 0x2e, cammand, 2 );
//    CyDelay(1000);
// //config 
//   id_1= I2C_Read(0, 0x2e, &Addr1, 1 );
//   id_1= I2C_Read( 0x51, 0x2e, &Addr2, 1 );
//
//    }
   // I2C_Write( 0, 0x0e, &I2C1, 1 );

 
    for(;;)
    {
        /* Place your application code here. */

         //state = mlx90614_read_out(0x0);
        // id_1=I2C_Read(0, 0x2E, &Addr1, 1 );
        CyDelay(30);
   CyDelay(3);
    T1 = mlx90614_read_out(0x51);

   CyDelay(3);
    T2 = mlx90614_read_out(0x52);
    CyDelay(3);
    T3 = mlx90614_read_out(0x53);

    CyDelay(3);
    T4 = mlx90614_read_out(0x54);

    CyDelay(3);
    T5 = mlx90614_read_out(0x55);
    CyDelay(3);
    T6 = mlx90614_read_out(0x55);
    
    CyDelay(3);
    T7 = mlx90614_read_out(0x55);
    
    CyDelay(3);
    T8 = mlx90614_read_out(0x55);
    DT_Send_RCData( T1,T2,T3,T4,T5,T6,T7,T8);
    
    }
}
void DT_Send_RCData(int16 T1,int16 T2,int16 T3,int16 T4,int16 T5,int16 T6,int16 T7,int16 T8)
{
	uint8 _cnt=0;
	
	data_to_send[_cnt++]=0xAA;
	data_to_send[_cnt++]=0xAA;
	data_to_send[_cnt++]=0x02;
	data_to_send[_cnt++]=0;
	data_to_send[_cnt++]=BYTE1(T1);
	data_to_send[_cnt++]=BYTE0(T1);
	data_to_send[_cnt++]=BYTE1(T2);
	data_to_send[_cnt++]=BYTE0(T2);
	data_to_send[_cnt++]=BYTE1(T3);
	data_to_send[_cnt++]=BYTE0(T3);
	data_to_send[_cnt++]=BYTE1(T4);
	data_to_send[_cnt++]=BYTE0(T4);
	data_to_send[_cnt++]=BYTE1(T5);
	data_to_send[_cnt++]=BYTE0(T5);
    data_to_send[_cnt++]=BYTE1(T6);
	data_to_send[_cnt++]=BYTE0(T6);
	data_to_send[_cnt++]=BYTE1(T7);
	data_to_send[_cnt++]=BYTE0(T7);
	data_to_send[_cnt++]=BYTE1(T8);
	data_to_send[_cnt++]=BYTE0(T8);

	data_to_send[3] = _cnt-4;
	
	uint8 sum = 0;
    uint8 i=0;
	for( i=0;i<_cnt;i++)
		sum += data_to_send[i];
	
	data_to_send[_cnt++]=sum;
	
	UART_net_PutArray(data_to_send, _cnt);
}
/* [] END OF FILE */
