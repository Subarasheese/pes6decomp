/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_00305E60(void *, void *);
extern void func_003044E0(void *);
extern s32 func_00BDA160(void);
extern s32 func_00BDA260(void);
extern void func_00304650(void);
extern void func_003052D0(void);

s32 func_00304810(void *arg0) {
    s32 i;
    void *s0;

    s0 = M2C_FIELD(arg0, void **, 0x18);
    if (func_00BDA160() != 0) {
        func_00305E60(arg0, (void *)func_003052D0);
        M2C_FIELD(s0, s32 *, 0x48) = 0;
        M2C_FIELD(s0, s32 *, 8) = 0;
        M2C_FIELD(s0, s32 *, 0xC) = 0;
        M2C_FIELD(s0, s32 *, 0x10) = 0;
        M2C_FIELD(s0, s32 *, 0x14) = 0;
        M2C_FIELD(s0, s32 *, 0x18) = 0;
        M2C_FIELD(s0, s32 *, 0x1C) = 0;
        M2C_FIELD(s0, s32 *, 0x20) = 0;
        M2C_FIELD(s0, s32 *, 0x24) = 0;
        M2C_FIELD(s0, s32 *, 0) = 0;
        for (i = 0; i < 8; i++) {
            if (M2C_FIELD(s0, s32 *, 8 + i * 4) == 0) {
                M2C_FIELD(s0, void **, 8 + i * 4) = (void *)func_00304650;
                M2C_FIELD(s0, s32 *, 0) = M2C_FIELD(s0, s32 *, 0) + 1;
                break;
            }
        }
    } else if (func_00BDA260() != 0) {
        M2C_FIELD(s0, s32 *, 8) = 0;
        M2C_FIELD(s0, s32 *, 0xC) = 0;
        M2C_FIELD(s0, s32 *, 0x10) = 0;
        M2C_FIELD(s0, s32 *, 0x14) = 0;
        M2C_FIELD(s0, s32 *, 0x18) = 0;
        M2C_FIELD(s0, s32 *, 0x1C) = 0;
        M2C_FIELD(s0, s32 *, 0x20) = 0;
        M2C_FIELD(s0, s32 *, 0x24) = 0;
        M2C_FIELD(s0, s32 *, 0) = 0;
        func_003044E0(s0);
        func_00305E60(arg0, (void *)func_003052D0);
    }
    return 0;
}
