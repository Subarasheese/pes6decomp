/* compiler: mwcc-3.0.1b210-sdata0-merged-sections */
#include "types.h"
typedef struct {
    s32 active;
    u8 reserved[0xda8];
    s32 value;
    u8 tail[0x20a4];
} StateEntry;
extern StateEntry *D_00520238;
void func_001959E0(s32 slot, s32 value) {
    if (D_00520238 && D_00520238[0].active)
        D_00520238[slot].value = value;
}
