/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_009651F0(void);
extern s32 func_0099C730(s32);
extern s32 func_0099C7E0(s32);
extern void * func_009D8A20(s32, void *);
extern s32 func_009DD350(u8);
extern s32 func_009DD6B0(s32, s32);

extern char D_00A7DEA8[];

void func_009D9010(void) {
    s32 temp_v0;

    if ((*(s32 *)D_00A7DEA8) == 0) {
        temp_v0 = func_0099C7E0(8);
        (*(s32 *)D_00A7DEA8) = temp_v0;
        if (temp_v0 != 0) {
            M2C_FIELD((*(s32 *)D_00A7DEA8), u8 *, 2) = func_009651F0();
            func_009DD6B0((s32) M2C_FIELD((*(s32 *)D_00A7DEA8), u8 *, 2), (s32) func_009D8A20);
            func_009DD350(1U);
            func_0099C730(0x01FC0004);
        }
    }
}
