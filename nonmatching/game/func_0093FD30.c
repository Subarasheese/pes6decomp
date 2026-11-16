/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001AC470(void);
extern void func_001AFBF0(s32, s32);
extern s32 Pes6File_AllChannelsIdle(void);
M2C_UNK func_001AB5E0();
M2C_UNK func_001AC5A0();
M2C_UNK func_001B43B0(s32, s32);
s32 func_00C5A620(u8);
s32 func_00C5A6D0(u8);
extern u8 D_003EA6FC;
extern char D_0058E7F0[];

s32 func_0093FD30(void) {
    char *p;
    s32 i;

    if (D_003EA6FC == 0) {
        return 0;
    }
    if (Pes6File_AllChannelsIdle() == 0) {
        return 1;
    }
    func_001AB5E0();
    func_001AC5A0();
    func_001AC470();
    i = 0;
    p = D_0058E7F0;
    do {
        func_001AFBF0(**(s32 **)(p + 4), func_00C5A620(*(u8 *)p));
        func_001B43B0(**(s32 **)(p + 4), func_00C5A6D0(*(u8 *)p));
        i += 1;
        p += 0x240;
    } while (i < 0x16);
    D_003EA6FC = 0;
    return 0;
}
