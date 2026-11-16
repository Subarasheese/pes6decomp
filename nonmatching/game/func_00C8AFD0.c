/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern u32 func_0017A670(s32);
s32 func_001B9250(s32, void *);
void func_00C87770(void);
void func_00C8AC90(s32);
void func_00C8B570(void);
void func_00C8BD70(void);
void func_00C8C9A0(void);
extern char D_00CCD074[];
extern char D_00CCD088[];
extern void func_00C8ADB0(void);

s32 func_00C8AFD0(void) {
    u64 temp_v0;

    if (((*(u8 *)D_00CCD074) & 1) && (func_0017A670(0) != 0xC)) {
        func_00C87770();
        func_00C8AC90(0);
        func_001B9250((*(s32 *)D_00CCD088), (void *)func_00C8ADB0);
        func_00C8B570();
        func_00C8BD70();
        func_00C8C9A0();
        temp_v0 = (u64) ((s64) (*(u8 *)D_00CCD074) << 0x3A) >> 0x3E;
        if ((s32) temp_v0 > 0) {
            (*(u8 *)D_00CCD074) = ((*(u8 *)D_00CCD074) & ~0x30) | (((temp_v0 - 1) & 3) * 0x10);
        }
    }
    return 0;
}
