#ifndef PES6_LINEUP_TEAMWORK_H
#define PES6_LINEUP_TEAMWORK_H

#include "types.h"

typedef struct {
    u32 reserved00;
    u8 first[0x13];
    u8 teamwork : 7;
    u8 : 1;
    u8 reserved18[0x24];
    u16 nationality : 9;
    u16 : 7;
    u8 reserved3e[10];
} Pes6TeamworkParams;
typedef char check_teamwork_params_size[sizeof(Pes6TeamworkParams) == 0x48 ? 1 : -1];
extern u8 *Pes6Player_GetParams(s32 player), *func_00970870(s32 player);
extern s32 func_00210DF0(void);
extern u8 func_0024E920(s32 first, const Pes6TeamworkParams *a, s32 second,
                        const Pes6TeamworkParams *b);
extern u8 func_0024EA00(s32 first, s32 second);
extern s32 func_0024EAC0(s32 first, s32 second);

#endif
