/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_003387D0(void *, int);
extern void func_00338930(int);
extern s32 func_003389D0(s32, s32);
extern s32 func_00338A60(void *, void *);
extern int func_0030E830(void);
extern int func_003336F0(int);
extern s32 func_003389F0(void *, s32, s32);
void *func_00338AD0(M2C_UNK, M2C_UNK *, s32, M2C_UNK *); /* extern */
extern char D_003E61B0[];
extern M2C_UNK func_00345500;
extern M2C_UNK func_00345670;

s32 func_00345580(void *arg0) {
    s32 temp_s1;
    void *temp_s0;

    temp_s0 = M2C_FIELD(arg0, void **, 0x3C);
    temp_s1 = M2C_FIELD(arg0, s32 *, 0x44);
    if (func_003389D0((s32) arg0, 0) == 0) {
        func_00338A60(func_00338AD0(0x80000047, &func_00345670, M2C_FIELD(arg0, s32 *, 8), ((void *)D_003E61B0)), arg0);
        func_003389F0(arg0, 0, 1);
    }
    if (M2C_FIELD(temp_s0, u8 *, 8) == 0) {
        return 0;
    }
    if ((func_0030E830() == 0) && (func_003336F0(temp_s1) != 0)) {
        func_003387D0(arg0, (s32) &func_00345500);
    } else {
        func_00338930((s32) arg0);
    }
    return 1;
}
