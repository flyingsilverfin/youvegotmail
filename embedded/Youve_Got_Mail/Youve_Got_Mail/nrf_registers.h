//config register
#define NRF_REG_CONFIG 0x00
#define CONFIG_PWR_UP 1			//power up bit location
#define CONFIG_PRIM_RX 0		//rx or tx mode bit location

#define PWR_UP_ON 1				//possible values for PWR_UP bit
#define PWR_UP_OFF 0
#define PRIM_RX_RECEIVE 1		//possible values for PRIM_RX bit
#define PRIM_RX_TRANSMIT 0

//address width
#define NRF_REG_SETUP_AW 0x03
#define SETUP_AW 0			//note this uses a width of two bits, so bits [1:0]

#define SETUP_AW_THREE 0b01		//three bytes wide
#define SETUP_AW_FOUR 0b10		//four bytes wide
#define SETUP_AW_FIVE 0b11		//this is default, 5 bytes wide

//radio frequency channel
#define NRF_REG_RF_CH 0x05
#define RF_CH 0					//location of LSBit
//just write a function that takes a value in the 6 bit range and write it to the RF_CH register location LSBit aligned

//configure radio
//used like this: [RF_DR_LOW, RF_DR_HIGH]: [00] – 1Mbps, [01]– 2Mbps (DEFAULT), [10] – 250kbps 
#define NRF_REG_RF_SETUP 0x06
#define RF_DR_LOW (1<<5)		//position of LOW bit
#define RF_DR_HIGH (1<<3)		//position of HIGH bit (seems backward somehow)
//see above to use...

//not sure if i should touch this still
#define NRF_REG_STATUS 0x07

//set receive address??
#define NRF_REG_RX_ADDR_P0 0x0A

//set transmit address??
#define NRF_REG_TX_ADDR 0x10