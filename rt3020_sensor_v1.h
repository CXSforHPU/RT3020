

#ifndef SENSOR_RT_RT3020_H__
#define SENSOR_RT_RT3020_H__

#include "rt3020.h"
#include <rtdevice.h>
#include <rtthread.h>

#define RT3020_ADDR_DEFAULT (RT3020_I2C_ADDRESS_SDO_LOW)

#if defined(RT_VERSION_CHECK)
    #if (RTTHREAD_VERSION >= RT_VERSION_CHECK(5, 0, 2))
        #define RT_SIZE_TYPE   rt_ssize_t
    #else
        #define RT_SIZE_TYPE   rt_size_t
    #endif
#endif

int rt_hw_rt3020_init(const char *name, struct rt_sensor_config *cfg);

#endif
