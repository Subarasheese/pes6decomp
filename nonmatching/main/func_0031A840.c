/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern s32 func_0030EF70(u8);
extern s32 func_00333600(s32);
extern s32 func_0030E540(s32);
extern s32 func_0030DBA0(void);
extern s32 func_0030E710(u8);
extern s32 func_0030E6C0(u8);
extern s32 func_003395B0(void *);
extern s32 func_00338A60(void *, void *);
extern void *func_00338AD0(u32, void (*)(void), s32, void *);
extern char D_003E1510[];
extern void func_0031A7A0(void);

s32 func_0031A840(void *arg0) {
    u8 id;
    void *temp_s0;
    void *temp_s3;
    void *temp_v0;
    s32 *temp_v1;

    temp_s0 = M2C_FIELD(arg0, void **, 0x3C);
    temp_s3 = M2C_FIELD(arg0, void **, 0x40);
    id = func_0030E540(0) & 0xFF;
    if (id == 0) {
        return 0;
    }
    if (id == 0xFF) {
        return 0;
    }
    if (func_0030DBA0() == 0) {
        return 0;
    }
    if (func_00333600(0xB) != 0) {
        return 0;
    }
    if (func_00333600(0xA) != 0) {
        return 0;
    }
    if (func_0030EF70(func_0030E710(id)) == 0) {
        return 0;
    }
    if ((M2C_FIELD(temp_s0, s32 *, 4) + 0x12C) < func_003395B0(temp_s3)) {
        temp_v1 = (s32 *)((char *)temp_s0 + func_0030E6C0(id) * 4);
        temp_v1[2] = temp_v1[2] + 1;
        temp_v0 = func_00338AD0(0x80000009, func_0031A7A0, 5, (void *)D_003E1510);
        if (temp_v0 != NULL) {
            func_00338A60(temp_v0, arg0);
        }
    }
    return 1;
}
