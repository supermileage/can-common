#ifndef _CAN_COMMON_H_
#define _CAN_COMMON_H_

// Motor Enable 
// 0x0 - 0x1F
// 0x100 - 0x11F
// NO MESSAGES DEFINED

// Throttle
// 0x20 - 0x3F
// 0x120 - 0x13F
// NO MESSAGES DEFINED

// Motor Controller
// 0x40 - 0x5F
// 0x140 - 0x15F
// NO MESSAGES DEFINED

// Accessories
// 0x60 - 0x7F
// 0x160 - 0x17F
#define CAN_ACC_OPERATION       0x60
#define CAN_ACC_STATUS          0x71

// Telemetry
// 0x80 - 0x9F
// 0x180 - 0x19F
#define CAN_TELEMETRY_GPS_SPEED 0x80

// BMS
// 0x201 - 0x23F
// 0x241 - 0x27F
#define CAN_BMS_REQUEST         0x201
#define CAN_BMS_RESPONSE        0x241

#endif
