/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern long func_008F8578(void *);
extern void func_008F8908(void *);
void func_008F8870(void *arg0, s32 arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s64 temp_v0;

    func_008F8908(arg0);
    temp_s0 = arg1 | 0x40000000;
    *(s32 *)0x10002000 = temp_s0;
    temp_s0_2 = temp_s0 & 0xF0000000;
    M2C_FIELD(arg0, s32 *, 0x82C) = temp_s0_2;
    switch (temp_s0_2) {                            /* irregular */
    case 0x30000000:
        M2C_FIELD(arg0, s32 *, 0x828) = 0;
        break;
    case 0x20000000:
    case 0x40000000:
        M2C_FIELD(arg0, s32 *, 0x828) = 0;
        break;
    default:
        M2C_FIELD(arg0, s32 *, 0x828) = 1;
        break;
    }
    temp_v0 = (s64) (func_008F8578(arg0) << 0x20) >> 0x20;
    M2C_FIELD(arg0, s32 *, 0x84C) = 0x20;
    M2C_FIELD(arg0, s32 *, 0x848) = (s32) temp_v0;
}
