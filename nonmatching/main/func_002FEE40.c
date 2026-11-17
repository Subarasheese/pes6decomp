/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern void func_002D4BE0(s32);
extern void func_00305E60(void *, void (*)(void));
extern s32 func_00BD9A40(void);
extern char D_003B4FF0[];
extern char D_003B4FF4[];
extern void func_002FEEC0(void);

s32 func_002FEE40(char *arg0) {
    s32 off;

    if (func_00BD9A40() == 0) {
        off = M2C_FIELD(M2C_FIELD(arg0, char **, 0x18), u8 *, 0x2C) * 8;
        func_002D4BE0(*(s32 *)(D_003B4FF0 + off));
        func_002D4BE0(*(s32 *)(D_003B4FF4 + off));
        func_00305E60(arg0, func_002FEEC0);
        return 1;
    }
    return 0;
}
