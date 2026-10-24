/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct {
    u8 pad0[0x207];
    u8 value;
} Info;

typedef struct {
    u8 pad0[0x4];
    Info **info;
    u8 pad8[0x238];
} Rec240;

extern Rec240 D_0058E5B0[];

u8 func_00311840(s32 index) {
    if ((u8)index != 0xFF) {
        index = (u8)index % 23;
    } else {
        index = 1;
    }
    return (*D_0058E5B0[index].info)->value;
}
