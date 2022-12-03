/* _NVRM_COPYRIGHT_BEGIN_
 *
 * Copyright 2003-2016 by NVIDIA Corporation.  All rights reserved.  All
 * information contained herein is proprietary and confidential to NVIDIA
 * Corporation.  Any use, reproduction, or disclosure without the written
 * permission of NVIDIA Corporation is prohibited.
 *
 * _NVRM_COPYRIGHT_END_
 */

#ifndef __ga102_dev_therm_vmacro_h__
#define __ga102_dev_therm_vmacro_h__
/* This file is autogenerated.  Do not edit */
#define NV_THERM_CLK_COUNT              4 /*       */
#define NV_THERM_PHYS_CLK_COUNT    11 /*       */
#define NV_THERM_CLK_GPCCLK            0 /*       */
#define NV_THERM_CLK_SYSCLK            1 /*       */
#define NV_THERM_CLK_LEGCLK            2 /*       */
#define NV_THERM_CLK_LTCCLK            3 /*       */
#define NV_THERM_CLKT_GPCCLK_REM      3 /*       */
#define NV_THERM_CLKT_GPCCLK_LOC_0    4 /*       */
#define NV_THERM_CLKT_GPCCLK_LOC_1    5 /*       */
#define NV_THERM_CLKT_GPCCLK_LOC_2    6 /*       */
#define NV_THERM_CLKT_GPCCLK_LOC_3    7 /*       */
#define NV_THERM_CLKT_GPCCLK_LOC_4    8 /*       */
#define NV_THERM_CLKT_GPCCLK_LOC_5    9 /*       */
#define NV_THERM_CLKT_GPCCLK_LOC_6    10 /*       */
#define NV_THERM_CLKT_SYSCLK          0 /*       */
#define NV_THERM_CLKT_LEGCLK          1 /*       */
#define NV_THERM_CLKT_LTCCLK          2 /*       */
#define NV_THERM_BA_WEIGHT_BITS_EXTEND                       8 /*       */
#define NV_THERM_DIV_BY1                             0x00000000 /*       */
#define NV_THERM_DIV_BY2                             0x00000001 /*       */
#define NV_THERM_DIV_BY4                             0x00000002 /*       */
#define NV_THERM_DIV_BY8                             0x00000003 /*       */
#define NV_THERM_DIV_BY16                            0x00000004 /*       */
#define NV_THERM_DIV_BY31                            0x00000005 /*       */
#define NV_THERM_FPDIV_BY1                           0x00000000 /*       */
#define NV_THERM_FPDIV_BY1P5                         0x00000001 /*       */
#define NV_THERM_FPDIV_BY2                           0x00000002 /*       */
#define NV_THERM_FPDIV_BY2P5                         0x00000003 /*       */
#define NV_THERM_FPDIV_BY3                           0x00000004 /*       */
#define NV_THERM_FPDIV_BY3P5                         0x00000005 /*       */
#define NV_THERM_FPDIV_BY4                           0x00000006 /*       */
#define NV_THERM_FPDIV_BY4P5                         0x00000007 /*       */
#define NV_THERM_FPDIV_BY5                           0x00000008 /*       */
#define NV_THERM_FPDIV_BY5P5                         0x00000009 /*       */
#define NV_THERM_FPDIV_BY6                           0x0000000a /*       */
#define NV_THERM_FPDIV_BY6P5                         0x0000000b /*       */
#define NV_THERM_FPDIV_BY7                           0x0000000c /*       */
#define NV_THERM_FPDIV_BY7P5                         0x0000000d /*       */
#define NV_THERM_FPDIV_BY8                           0x0000000e /*       */
#define NV_THERM_FPDIV_BY8P5                         0x0000000f /*       */
#define NV_THERM_FPDIV_BY9                           0x00000010 /*       */
#define NV_THERM_FPDIV_BY9P5                         0x00000011 /*       */
#define NV_THERM_FPDIV_BY10                          0x00000012 /*       */
#define NV_THERM_FPDIV_BY10P5                        0x00000013 /*       */
#define NV_THERM_FPDIV_BY11                          0x00000014 /*       */
#define NV_THERM_FPDIV_BY11P5                        0x00000015 /*       */
#define NV_THERM_FPDIV_BY12                          0x00000016 /*       */
#define NV_THERM_FPDIV_BY12P5                        0x00000017 /*       */
#define NV_THERM_FPDIV_BY13                          0x00000018 /*       */
#define NV_THERM_FPDIV_BY13P5                        0x00000019 /*       */
#define NV_THERM_FPDIV_BY14                          0x0000001a /*       */
#define NV_THERM_FPDIV_BY14P5                        0x0000001b /*       */
#define NV_THERM_FPDIV_BY15                          0x0000001c /*       */
#define NV_THERM_FPDIV_BY15P5                        0x0000001d /*       */
#define NV_THERM_FPDIV_BY16                          0x0000001e /*       */
#define NV_THERM_FPDIV_BY16P5                        0x0000001f /*       */
#define NV_THERM_FPDIV_MAXP5              0x0000001f /*       */
#define NV_THERM_FPDIV_BY17                          0x00000020 /*       */
#define NV_THERM_FPDIV_BY18                          0x00000022 /*       */
#define NV_THERM_FPDIV_BY19                          0x00000024 /*       */
#define NV_THERM_FPDIV_BY20                          0x00000026 /*       */
#define NV_THERM_FPDIV_BY21                          0x00000028 /*       */
#define NV_THERM_FPDIV_BY22                          0x0000002a /*       */
#define NV_THERM_FPDIV_BY23                          0x0000002c /*       */
#define NV_THERM_FPDIV_BY24                          0x0000002e /*       */
#define NV_THERM_FPDIV_BY25                          0x00000030 /*       */
#define NV_THERM_FPDIV_BY26                          0x00000032 /*       */
#define NV_THERM_FPDIV_BY27                          0x00000034 /*       */
#define NV_THERM_FPDIV_BY28                          0x00000036 /*       */
#define NV_THERM_FPDIV_BY29                          0x00000038 /*       */
#define NV_THERM_FPDIV_BY30                          0x0000003a /*       */
#define NV_THERM_FPDIV_BY31                          0x0000003c /*       */
#define NV_THERM_FPDIV_MAX                           0x0000003f /*       */
#define NV_THERM_ENGINE_GRAPHICS             0 /*       */
#define NV_THERM_ENGINE_COPY0                   1 /*       */
#define NV_THERM_ENGINE_COPY1                   2 /*       */
#define NV_THERM_ENGINE_COPY2                   3 /*       */
#define NV_THERM_ENGINE_COPY3                   4 /*       */
#define NV_THERM_ENGINE_COPY4                   10 /*       */
#define NV_THERM_ENGINE_NVDEC                 5 /*       */
#define NV_THERM_ENGINE_NVDEC1                6 /*       */
#define NV_THERM_ENGINE_SEC                   7 /*       */
#define NV_THERM_ENGINE_NVENC0                   8 /*       */
#define NV_THERM_ENGINE_OFA0                   9  /*       */
#define NV_THERM_EVENT_MAX_COUNT                                     0x0000001F /*       */
#define NV_THERM_EDPP_EVENT_MAX_COUNT       0x00000002 /*       */
 #define NV_THERM_TEMP_SENSOR_ID_SYS_TSENSE                           0x00000000 /*       */
 #define NV_THERM_TEMP_SENSOR_ID_OFFSET_SYS_TSENSE                    0x00000001 /*       */
 #define NV_THERM_TEMP_SENSOR_ID_CONSTANT                             0x00000002 /*       */
 #define NV_THERM_TEMP_SENSOR_ID_MAX                                  0x00000003 /*       */
 #define NV_THERM_TEMP_SENSOR_ID_GPU_MAX                              0x00000004 /*       */
 #define NV_THERM_TEMP_SENSOR_ID_GPU_AVG                              0x00000005 /*       */
 #define NV_THERM_TEMP_SENSOR_ID_GPU_OFFSET_MAX                       0x00000006 /*       */
 #define NV_THERM_TEMP_SENSOR_ID_GPU_OFFSET_AVG                       0x00000007 /*       */
 #define NV_THERM_TEMP_SENSOR_ID_COUNT                                0x00000008 /*       */
 #define NV_THERM_TEMP_SENSOR_ID_MASK                                 0x000000FF /*       */
#define NV_THERM_TEMP_SENSOR_ID_GPC_AVG_UNMUNGED 0x00000000 /*       */
#define NV_THERM_TEMP_SENSOR_ID_GPC_AVG          0x00000001 /*       */
#define NV_THERM_TEMP_SENSOR_GPC_COUNT                                                  2 /*       */
#define NV_THERM_TEMP_SENSOR_GPC(i)       (NV_THERM_TEMP_SENSOR_GPC_AVG_UNMUNGED+((i)*4)) /*       */
#define NV_THERM_TEMP_SENSOR_GPC_FIXED_POINT                                   16:3       /*       */
#define NV_THERM_TEMP_SENSOR_GPC_FIXED_POINT_ZERO                              0x00000000 /*       */
#define NV_THERM_TEMP_SENSOR_GPC_FIXED_POINT_MIN                               0x00003b00 /*       */
#define NV_THERM_TEMP_SENSOR_GPC_FIXED_POINT_MAX                               0x000012c0 /*       */
#define NV_THERM_TEMP_SENSOR_GPC_INTEGER                                       16:8       /*       */
#define NV_THERM_TEMP_SENSOR_GPC_INTEGER_ZERO                                  0x00000000 /*       */
#define NV_THERM_TEMP_SENSOR_GPC_INTEGER_MIN                                   0x000001d8 /*       */
#define NV_THERM_TEMP_SENSOR_GPC_INTEGER_MAX                                   0x00000096 /*       */
#define NV_THERM_TEMP_SENSOR_GPC_MUNGED                                        24:24      /*       */
#define NV_THERM_TEMP_SENSOR_GPC_MUNGED_NO                                     0x00000000 /*       */
#define NV_THERM_TEMP_SENSOR_GPC_MUNGED_YES                                    0x00000001 /*       */
#define NV_THERM_TEMP_SENSOR_GPC_STATE                                         30:30      /*       */
#define NV_THERM_TEMP_SENSOR_GPC_STATE_INVALID                                 0x00000000 /*       */
#define NV_THERM_TEMP_SENSOR_GPC_STATE_VALID                                   0x00000001 /*       */
#define NV_THERM_TEMP_SENSOR_GPC_SOURCE                                        31:31      /*       */
#define NV_THERM_TEMP_SENSOR_GPC_SOURCE_HW_LOGIC                               0x00000000 /*       */
#define NV_THERM_TEMP_SENSOR_GPC_SOURCE_SW_OVERRIDE                            0x00000001 /*       */
#define NV_THERM_EVENT_EXT_OVERT                                     0x00000000 /*       */
#define NV_THERM_EVENT_EXT_ALERT                                     0x00000001 /*       */
#define NV_THERM_EVENT_EXT_POWER                                     0x00000002 /*       */
#define NV_THERM_EVENT_THERMAL_0                                     0x00000003 /*       */
#define NV_THERM_EVENT_THERMAL_1                                     0x00000004 /*       */
#define NV_THERM_EVENT_THERMAL_2                                     0x00000005 /*       */
#define NV_THERM_EVENT_THERMAL_3                                     0x00000006 /*       */
#define NV_THERM_EVENT_THERMAL_4                                     0x00000007 /*       */
#define NV_THERM_EVENT_THERMAL_5                                     0x00000008 /*       */
#define NV_THERM_EVENT_THERMAL_6                                     0x00000009 /*       */
#define NV_THERM_EVENT_THERMAL_7                                     0x0000000a /*       */
#define NV_THERM_EVENT_THERMAL_8                                     0x0000000b /*       */
#define NV_THERM_EVENT_THERMAL_9                                     0x0000000c /*       */
#define NV_THERM_EVENT_THERMAL_10                                    0x0000000d /*       */
#define NV_THERM_EVENT_THERMAL_11                                    0x0000000e /*       */
#define NV_THERM_EVENT_EXT_ALERT_0                                   0x0000000f /*       */
#define NV_THERM_EVENT_EXT_ALERT_1                                   0x00000010 /*       */
#define NV_THERM_EVENT_BA_W0_T1                                      0x00000014 /*       */
#define NV_THERM_EVENT_BA_W0_T2                                      0x00000015 /*       */
#define NV_THERM_EVENT_BA_W1_T1                                      0x00000016 /*       */
#define NV_THERM_EVENT_BA_W1_T2                                      0x00000017 /*       */
#define NV_THERM_EVENT_BA_W2_T1                                      0x00000018 /*       */
#define NV_THERM_EVENT_BA_W2_T2                                      0x00000019 /*       */
#define NV_THERM_EVENT_VOLTAGE_HW_ADC                                0x0000001C /*       */
#define NV_THERM_EVENT_EDPP_VMIN                                     0x0000001D /*       */
#define NV_THERM_EVENT_EDPP_FONLY                                    0x0000001E /*       */
 #define NV_THERM_EVENT_THERMAL(i)             (0x00000003+(i))
#define NV_THERM_EVENT_MASK_EXTERNAL                                 0x00018007 /*       */
 #define NV_THERM_EVENT_MASK_THERMAL                                 0x00007FF8 /*       */
 #define NV_THERM_EVENT_MASK_BA                                      0x03F00000 /*       */
#define NV_THERM_EVENT_MASK_HW_ADC                                   0x10000000 /*       */
#define NV_THERM_EVENT_MASK_EDPP                                     0x60000000 /*       */
#define NV_THERM_IPC_CTRL_SUM_INPUT_NO_CH                            0x000000FF /*       */
#define NV_THERM_IPC_CTRL_SUM_INPUT_CH(i)                                   (i) /*       */
#define NV_THERM_IPC_CTRL_SUM_INPUT_CH__SIZE_1                               16 /*       */
#define NV_THERM_IPC_CTRL_SUM_INPUT_CHP(i)                       0x00000010+(i) /*       */
#define NV_THERM_IPC_CTRL_SUM_INPUT_CHP__SIZE_1                               8 /*       */
#define NV_THERM_EVENT_MASK_HW_FAILSAFE     (0x00018007|0x00007FF8|0x03F00000|0x10000000|0x60000000) /*       */
#define NV_THERM_EVENT_MASK_INTERRUPT     (0x00018007|0x00007FF8|0x03F00000|0x10000000|0x60000000) /*       */
#define NV_THERM_EVENT_MASK_TRIGGER     (0x00018007|0x00007FF8|0x03F00000|0x10000000|0x60000000) /*       */
 #define NV_THERM_EVT_SETTINGS(i)               (NV_THERM_EVT_EXT_OVERT +((i)*4)) /*       */
 #define NV_THERM_EVT_SETTINGS_TEMP_THRESHOLD                               16:3 /*       */
 #define NV_THERM_EVT_SETTINGS_TEMP_THRESHOLD_MIN                     0x00002000 /*       */
 #define NV_THERM_EVT_SETTINGS_TEMP_THRESHOLD_MAX                     0x00001fff /*       */
 #define NV_THERM_EVT_SETTINGS_TEMP_SENSOR_ID                              23:20 /*       */
 #define NV_THERM_EVT_SETTINGS_TEMP_SENSOR_ID_SYS_TSENSE              0x00000000 /*       */
 #define NV_THERM_EVT_SETTINGS_TEMP_SENSOR_ID_OFFSET_SYS_TSENSE       0x00000001 /*       */
 #define NV_THERM_EVT_SETTINGS_TEMP_SENSOR_ID_CONSTANT                0x00000002 /*       */
 #define NV_THERM_EVT_SETTINGS_TEMP_SENSOR_ID_MAX                     0x00000003 /*       */
 #define NV_THERM_EVT_SETTINGS_TEMP_SENSOR_ID_GPU_MAX                 0x00000004 /*       */
 #define NV_THERM_EVT_SETTINGS_TEMP_SENSOR_ID_GPU_AVG                 0x00000005 /*       */
 #define NV_THERM_EVT_SETTINGS_TEMP_SENSOR_ID_GPU_OFFSET_MAX          0x00000006 /*       */
 #define NV_THERM_EVT_SETTINGS_TEMP_SENSOR_ID_GPU_OFFSET_AVG          0x00000007 /*       */
 #define NV_THERM_EVT_SETTINGS_SLOW_FACTOR                                 29:24 /*       */
 #define NV_THERM_EVT_SETTINGS_SLOW_FACTOR_DISABLED                   0x00000000 /*       */
 #define NV_THERM_EVT_SETTINGS_SLOW_LEGACY_FACTOR                          26:24 /*       */
 #define NV_THERM_EVT_SETTINGS_SLOW_LEGACY_FACTOR_DISABLED            0x00000000 /*       */
 #define NV_THERM_EVT_SETTINGS_MODE                                        31:30 /*       */
 #define NV_THERM_EVT_SETTINGS_MODE_NORMAL                            0x00000000 /*       */
 #define NV_THERM_EVT_SETTINGS_MODE_INVERTED                          0x00000001 /*       */
 #define NV_THERM_EVT_SETTINGS_MODE_FORCED                            0x00000002 /*       */
 #define NV_THERM_EVT_SETTINGS_MODE_CLEARED                           0x00000003 /*       */
 #define NV_THERM_TEMP_SENSOR(i)       (NV_THERM_TEMP_SENSOR_SYS_TSENSE+((i)*4)) /*       */
 #define NV_THERM_TEMP_SENSOR_FIXED_POINT                                   16:3 /*       */
 #define NV_THERM_TEMP_SENSOR_FIXED_POINT_ZERO                        0x00000000 /*       */
 #define NV_THERM_TEMP_SENSOR_FIXED_POINT_MIN                         0x00003b00 /*       */
 #define NV_THERM_TEMP_SENSOR_FIXED_POINT_MAX                         0x000012c0 /*       */
 #define NV_THERM_TEMP_SENSOR_INTEGER                                       16:8 /*       */
 #define NV_THERM_TEMP_SENSOR_INTEGER_ZERO                            0x00000000 /*       */
 #define NV_THERM_TEMP_SENSOR_INTEGER_MIN                             0x000001d8 /*       */
 #define NV_THERM_TEMP_SENSOR_INTEGER_MAX                             0x00000096 /*       */
 #define NV_THERM_TEMP_SENSOR_MUNGED                                       24:24 /*       */
 #define NV_THERM_TEMP_SENSOR_MUNGED_NO                               0x00000000 /*       */
 #define NV_THERM_TEMP_SENSOR_MUNGED_YES                              0x00000001 /*       */
 #define NV_THERM_TEMP_SENSOR_STATE                                        30:30 /*       */
 #define NV_THERM_TEMP_SENSOR_STATE_INVALID                           0x00000000 /*       */
 #define NV_THERM_TEMP_SENSOR_STATE_VALID                             0x00000001 /*       */
 #define NV_THERM_TEMP_SENSOR_SOURCE                                       31:31 /*       */
 #define NV_THERM_TEMP_SENSOR_SOURCE_HW_LOGIC                         0x00000000 /*       */
 #define NV_THERM_TEMP_SENSOR_SOURCE_SW_OVERRIDE                      0x00000001 /*       */
#define NV_THERM_I2C_SCRATCH_DATA(i)                (0x00000528 + (i)*20) /*       */
#define NV_THERM_I2C_SCRATCH_DATA__SIZE_1                             4   /*       */
#define NV_THERM_I2C_SCRATCH_DATA_VALUE                              31:0 /*       */
#define NV_THERM_I2C_SCRATCH_DATA_VALUE_INIT                   0x00000000 /*       */
#define NV_THERM_I2C_SCRATCH_STATE(i)              (0x0000052C + (i)*20) /*       */
#define NV_THERM_I2C_SCRATCH_STATE__SIZE_1                            4  /*      */
#define NV_THERM_I2C_SCRATCH_STATE_STATE                           31:30 /*       */
#define NV_THERM_I2C_SCRATCH_STATE_STATE_SET_NACK             0x00000000 /*       */
#define NV_THERM_I2C_SCRATCH_STATE_STATE_SET_RO               0x00000001 /*       */
#define NV_THERM_I2C_SCRATCH_STATE_STATE_SET_RW               0x00000002 /*       */
#define NV_THERM_I2C_SCRATCH_STATE_STATE_SET_NONE             0x00000003 /*       */
#define NV_THERM_I2C_SCRATCH_STATE_STATE_NACK                 0x00000000 /*       */
#define NV_THERM_I2C_SCRATCH_STATE_STATE_RO                   0x00000001 /*       */
#define NV_THERM_I2C_SCRATCH_STATE_STATE_RW                   0x00000002 /*       */
#define NV_THERM_I2C_SCRATCH_STATE_STATE_NONE                 0x00000003 /*       */
#define NV_THERM_I2C_SCRATCH_INDEX(i)                  (0x00000524+(i)*20) /*       */
#define NV_THERM_I2C_SCRATCH_INDEX__SIZE_1                               4 /*       */
#define NV_THERM_I2C_SCRATCH_INDEX_VALUE                               8:0 /*       */
#define NV_THERM_I2C_SCRATCH_INDEX_VALUE_INIT                   0x00000000 /*       */
#define NV_THERM_I2C_SCRATCH_INDEX_VALUE_MIN                    0x00000000 /*       */
#define NV_THERM_I2C_SCRATCH_INDEX_VALUE_MAX                    0x000001FF /*       */
#define NV_THERM_I2C_SCRATCH_INDEX_READINCR                          16:16 /*       */
#define NV_THERM_I2C_SCRATCH_INDEX_READINCR_DISABLE             0x00000000 /*       */
#define NV_THERM_I2C_SCRATCH_INDEX_READINCR_ENABLE              0x00000001 /*       */
#define NV_THERM_I2C_SCRATCH_INDEX_WRITEINCR                         17:17 /*       */
#define NV_THERM_I2C_SCRATCH_INDEX_WRITEINCR_DISABLE            0x00000000 /*       */
#define NV_THERM_I2C_SCRATCH_INDEX_WRITEINCR_ENABLE             0x00000001 /*       */
#define NV_THERM_PEAKPOWER_NVVDD_ADC_IIR_ADC_OUTPUT_WIDTH     0x00000007 /*       */
#define NV_THERM_PEAKPOWER_NVVDD_ADC_IIR_LUT_INDEX_WIDTH      0x00000004 /*       */
#endif // __ga102_dev_therm_vmacro_h__