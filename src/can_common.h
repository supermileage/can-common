#ifndef _CAN_COMMON_H_
#define _CAN_COMMON_H_

#define CAN_THROTTLE        45
#define CAN_MOTOR_ENABLE    20
#define CAN_ACCESSORIES
#define CAN_TELEMETRY       0xA0

#define CAN_BMS_DEFAULT_ID  0x01
#define CAN_BMS_REQUEST(x)  (0x200 + (x))
#define CAN_BMS_RETURN(x)   (0x240 + (x))

#endif
