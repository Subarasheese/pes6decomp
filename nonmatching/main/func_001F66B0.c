/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern s32 func_001DC900(void *);
extern s32 func_001E6C50(void *);
M2C_UNK func_001DCB40(s32);
s32 func_001DCB80();
void *func_001E7E00(s32, void *, u16 *, s32, s32);

void func_001F66B0(void *arg0, void *arg1, s32 arg2) {
    u16 sp6C;
    u16 sp6E;
    s32 temp_s1;
    s32 temp_s2;
    s32 p;
    void *temp_s0;
    u8 t;

    if ((arg0 != NULL) && (arg1 != NULL)) {
        temp_s1 = func_001DC900(arg0);
        temp_s2 = func_001DCB80();
        sp6C = M2C_FIELD(arg0, u16 *, 0x14);
        sp6E = M2C_FIELD(arg0, u16 *, 0x16);
        temp_s0 = func_001E7E00(temp_s1, arg1, &sp6C, temp_s2, arg2);
        func_001DCB40(M2C_FIELD(arg0, s32 *, 4));
        func_001E6C50((void *) temp_s1);
        M2C_FIELD(arg0, s32 *, 4) = temp_s2;
        M2C_FIELD(arg0, s32 *, 8) = M2C_FIELD(temp_s0, s32 *, 8);
        M2C_FIELD(arg0, void **, 0xC) = temp_s0;
        t = M2C_FIELD(arg0, u8 *, 0);
        if (t == 1 || t == 2) {
            M2C_FIELD(arg0, u16 *, 0x10) = (u16) (u32) ((f32) M2C_FIELD(arg0, u16 *, 0x10) * M2C_FIELD(arg1, f32 *, 0));
            M2C_FIELD(arg0, u16 *, 0x12) = (u16) (u32) ((f32) M2C_FIELD(arg0, u16 *, 0x12) * M2C_FIELD(arg1, f32 *, 4));
            if (t == 1) {
                M2C_FIELD(arg0, u16 *, 0x14) = (u16) (M2C_FIELD(arg0, u16 *, 0x10) << 1);
            } else {
                M2C_FIELD(arg0, u16 *, 0x14) = M2C_FIELD(arg0, u16 *, 0x10);
            }
            M2C_FIELD(arg0, u16 *, 0x16) = M2C_FIELD(arg0, u16 *, 0x12);
            p = 2;
            while (p < (s32) M2C_FIELD(arg0, u16 *, 0x10)) {
                p <<= 1;
            }
            M2C_FIELD(arg0, s16 *, 0x18) = (s16) p;
            p = 2;
            while (p < (s32) M2C_FIELD(arg0, u16 *, 0x12)) {
                p <<= 1;
            }
            M2C_FIELD(arg0, s16 *, 0x1A) = (s16) p;
        }
    }
}
