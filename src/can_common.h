#ifndef _CAN_COMMON_H_
#define _CAN_COMMON_H_

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
#define CAN_TELEMETRY_GPS_DATA	0x80
#define CAN_TELEMETRY_BMS_DATA	0x81

// Orion BMS
// 0x280 - 0x31F
//      TX
#define CAN_ORIONBMS_STATUS     0x280
#define CAN_ORIONBMS_PACK       0x281
#define CAN_ORIONBMS_CELL       0x282
#define CAN_ORIONBMS_TEMP       0x283

// Throttle
// 0x320 - 0x380
//      TX
#define THROTTLE_HEARTBEAT      0x320
#define CAN_MOTOR_RPM           0x321
#define CAN_MOTOR_TEMP          0x322

#endif
