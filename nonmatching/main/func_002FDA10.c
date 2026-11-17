/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00305E60(void *, void (*)(void));
extern void func_002D4970(s32);
extern s32 func_00230930(void);
extern s32 func_00230EF0(void);
extern s32 func_00231130(void *);
extern s8 D_003E9E8C;
extern char D_00510FD0[];
extern char D_00591F24[];
extern void func_002FD210(void);
extern void func_002FDC60(void);

s32 func_002FDA10(void *arg0) {
    u8 st = *(u8 *)D_00591F24;

    if (st == 7) {
        if (*(s32 *)D_00510FD0 != 9) {
            if (func_00231130(arg0) != 0 || func_00230EF0() != 0 || func_00230930() != 0) {
                D_003E9E8C = 1;
            } else {
                D_003E9E8C = 0;
            }
            func_002D4970(4);
            func_00305E60(arg0, func_002FD210);
        }
    } else if (st == 8) {
        func_00305E60(arg0, func_002FDC60);
    }
    return 1;
}
