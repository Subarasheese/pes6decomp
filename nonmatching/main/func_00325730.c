/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_002371A0(s32);

u16 *func_00325730(void *arg0, s32 arg1) {
    s32 i;
    u16 *p;
    u16 v;
    s16 *cnt;

    cnt = (s16 *)((char *)arg0 + 0x8F8);
    p = (u16 *)((char *)cnt + 4);
    for (i = 0; i < *cnt; i++) {
        v = *p;
        if (v == 0x127 || v == 0x126) {
            v = func_002371A0(v);
        }
        if (v == arg1) {
            return p;
        }
        p += 8;
    }
    return NULL;
}
