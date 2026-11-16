/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

extern int func_003387D0(void *, void *, void *);
extern s32 func_00340F80(void *);
extern s32 func_00341260(void *);
extern s32 func_00338A60(void *, void *);
extern void *func_00338AD0(u32, void *, s32, void *);
extern s32 func_00340F30(void *);
extern s32 func_003412D0(void *);
extern char D_003E6228[];
extern void func_003499A0(void);
extern void func_00349BB0(void);

s32 func_00349C70(void *arg0) {
    void *temp_s1;
    void *temp_s2;

    temp_s1 = M2C_FIELD(arg0, void **, 0x40);
    if (M2C_FIELD(temp_s1, u8 *, 8) == 0) {
        return 0;
    }
    temp_s2 = (u8 *)temp_s1 + 0xB4;
    if (func_003412D0((u8 *)temp_s1 + 0x74) == 0) {
        return 0;
    }
    if ((func_00341260(temp_s2) == 0) && (func_00340F30(temp_s2) == 0) && (func_00340F80(temp_s2) == 0)) {
        return 0;
    }
    if (func_003412D0(temp_s2) == 0) {
        func_00338A60(func_00338AD0(0x80000018, (void *)func_003499A0, M2C_FIELD(arg0, s32 *, 8), (void *)D_003E6228), arg0);
        if (M2C_FIELD(temp_s1, s32 *, 0x74) != 7) {
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
        } else if (M2C_FIELD(temp_s1, u8 *, 0x95) != 2) {
            M2C_FIELD(arg0, s32 *, 0x30) = 0;
        } else {
            M2C_FIELD(arg0, s32 *, 0x30) = 1;
        }
        func_003387D0(arg0, (void *)func_00349BB0, (void *)D_003E6228);
        return 1;
    }
    return 0;
}
