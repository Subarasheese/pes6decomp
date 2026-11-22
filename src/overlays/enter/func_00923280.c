/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0020C970(void);
s32 func_002D57E0(s32, s32, s32 *, s32);
s32 func_002F96F0(s32, s32);
s32 func_002FA170(s32, s32, s32, s32, s32, s32);
extern s32 D_003EA5DC;
extern s32 *D_003EA5E0[2];
extern char D_0092A6E0[];

void func_00923280(s32 arg0, s32 unused1, s32 arg2, s32 arg3) {
    s32 value;

    value = func_0020C970();
    func_002FA170(arg0, value, func_002F96F0(*D_003EA5E0[D_003EA5DC], 0), arg2, arg3, 1);
    func_002D57E0(arg0, M2C_FIELD(D_003EA5E0[D_003EA5DC], s32 *, 0x14), ((void *)D_0092A6E0), 7);
}
