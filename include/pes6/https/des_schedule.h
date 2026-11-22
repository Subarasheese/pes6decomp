#ifndef PES6_HTTPS_DES_SCHEDULE_H
#define PES6_HTTPS_DES_SCHEDULE_H

#include "types.h"
typedef struct {
    u32 words[32];
} DesSchedule;

typedef struct {
    u32 words[2];
} DesKey;

extern void func_00BF27E8(DesSchedule *schedule, const DesKey *key);
extern void func_00BF2780(DesSchedule *schedule, const DesKey *key);
#endif
