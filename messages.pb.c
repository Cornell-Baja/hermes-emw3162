/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.3 at Sun Aug 30 20:55:19 2015. */

#include "messages.pb.h"

#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t Sensor_fields[4] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, Sensor, id, id, 0),
    PB_FIELD(  2, ENUM    , REQUIRED, STATIC  , OTHER, Sensor, type, id, 0),
    PB_FIELD(  3, STRING  , REQUIRED, CALLBACK, OTHER, Sensor, name, type, 0),
    PB_LAST_FIELD
};

const pb_field_t DeviceInfo_fields[3] = {
    PB_FIELD(  1, STRING  , REQUIRED, CALLBACK, FIRST, DeviceInfo, model, model, 0),
    PB_FIELD(  2, MESSAGE , REPEATED, CALLBACK, OTHER, DeviceInfo, sensors, model, &Sensor_fields),
    PB_LAST_FIELD
};

const pb_field_t SensorConfiguration_fields[4] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, SensorConfiguration, id, id, 0),
    PB_FIELD(  2, BOOL    , REQUIRED, STATIC  , OTHER, SensorConfiguration, enabled, id, 0),
    PB_FIELD(  3, INT32   , REQUIRED, STATIC  , OTHER, SensorConfiguration, frequency, enabled, 0),
    PB_LAST_FIELD
};

const pb_field_t DeviceConfiguration_fields[2] = {
    PB_FIELD(  2, MESSAGE , REPEATED, CALLBACK, FIRST, DeviceConfiguration, sensors, sensors, &SensorConfiguration_fields),
    PB_LAST_FIELD
};

const pb_field_t DeviceControl_fields[3] = {
    PB_FIELD(  1, ENUM    , REQUIRED, STATIC  , FIRST, DeviceControl, action, action, 0),
    PB_FIELD(  2, MESSAGE , OPTIONAL, STATIC  , OTHER, DeviceControl, config, action, &SensorConfiguration_fields),
    PB_LAST_FIELD
};

const pb_field_t SensorMessage_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, SensorMessage, id, id, 0),
    PB_FIELD(  2, UINT32  , REQUIRED, STATIC  , OTHER, SensorMessage, value, id, 0),
    PB_LAST_FIELD
};

const pb_field_t SensorUpdate_fields[3] = {
    PB_FIELD(  1, UINT32  , REQUIRED, STATIC  , FIRST, SensorUpdate, timestamp, timestamp, 0),
    PB_FIELD(  2, MESSAGE , REPEATED, CALLBACK, OTHER, SensorUpdate, messages, timestamp, &SensorMessage_fields),
    PB_LAST_FIELD
};


/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(DeviceInfo, sensors) < 65536 && pb_membersize(DeviceConfiguration, sensors) < 65536 && pb_membersize(DeviceControl, config) < 65536 && pb_membersize(SensorUpdate, messages) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_Sensor_DeviceInfo_SensorConfiguration_DeviceConfiguration_DeviceControl_SensorMessage_SensorUpdate)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(DeviceInfo, sensors) < 256 && pb_membersize(DeviceConfiguration, sensors) < 256 && pb_membersize(DeviceControl, config) < 256 && pb_membersize(SensorUpdate, messages) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_Sensor_DeviceInfo_SensorConfiguration_DeviceConfiguration_DeviceControl_SensorMessage_SensorUpdate)
#endif


