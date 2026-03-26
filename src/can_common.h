#ifndef _CAN_COMMON_H
#define _CAN_COMMON_H

// Steering
// 0x0 - 0x5F
// 0x100 - 0x15F
//      TX
#define CAN_STEERING_THROTTLE   0x01
#define CAN_STEERING_READY      0x02

// Accessories
// 0x60 - 0x7F
// 0x160 - 0x17F
//      TX
#define CAN_ACC_STATUS          0x71
//      RX
#define CAN_ACC_OPERATION       0x60

// Telemetry
// 0x80 - 0x9F
// 0x180 - 0x19F
//      TX
#define CAN_TELEMETRY_GPS_DATA    0x80
#define CAN_TELEMETRY_BMS_DATA    0x81

// TinyBMS
// 0x201 - 0x23F
// 0x241 - 0x27F
//      TX
#define CAN_TINYBMS_RESPONSE    0x241
//      RX
#define CAN_TINYBMS_REQUEST     0x201

// Orion BMS
// 0x280 - 0x283
//      TX 
#define CAN_ORIONBMS_STATUS     0x280
#define CAN_ORIONBMS_PACK       0x281
#define CAN_ORIONBMS_CELL       0x282
#define CAN_ORIONBMS_TEMP       0x283

#define CAN_RPM                 0x3A0

//Speeduino ECU
// 100 - 104
//    TX
#define CAN_ECU_STATUS          0x100
#define CAN_ECU_SENSORS         0x101
#define CAN_ECU_CORRECTION      0x102
#define CAN_ECU_LOOPS           0x103
#define CAN_ECU_RPMDOT          0x104
#endif
