/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_00D07080(void *, M2C_UNK *);               /* extern */
s32 func_00D070F0(void *, M2C_UNK *, u8, u8);       /* extern */
s32 func_00D071B0(void *, void *);                  /* extern */
M2C_UNK func_00D072A0(s32, void *);                 /* extern */
void *func_00D07350(s32);                           /* extern */
extern char D_00D20000[];

void *func_00D132C0(void *arg0, void *arg1, s32 arg2) {
    u8 temp_a2;
    u8 temp_a3;
    void *temp_v0;

    if (arg0 != NULL) {
        if (arg1 != NULL) {
            temp_v0 = func_00D07350(M2C_FIELD(arg1, s32 *, 0xC));
            if (temp_v0 != NULL) {
                M2C_FIELD(temp_v0, s32 *, 0) = -1;
                M2C_FIELD(temp_v0, s32 *, 0xC) = 3;
                M2C_FIELD(temp_v0, s32 *, 0x148) = arg2;
                M2C_FIELD(temp_v0, s32 *, 0x13C) = (s32) M2C_FIELD(arg0, s32 *, 0x13C);
                temp_a3 = M2C_FIELD(arg0, u8 *, 0x140);
                temp_a2 = M2C_FIELD(arg0, u8 *, 0x141);
                M2C_FIELD(temp_v0, u8 *, 0x140) = temp_a3;
                M2C_FIELD(temp_v0, u8 *, 0x141) = temp_a2;
                M2C_FIELD(temp_v0, u8 *, 0x142) = (u8) M2C_FIELD(arg0, u8 *, 0x142);
                M2C_FIELD(temp_v0, u8 *, 0x143) = (u8) M2C_FIELD(arg0, u8 *, 0x143);
                if (func_00D070F0(temp_v0, ((void *)D_00D20000), temp_a2, temp_a3) == 1) {
                    func_00D072A0(M2C_FIELD(arg1, s32 *, 0xC), temp_v0);
                    return NULL;
                }
                if (func_00D07080(temp_v0, ((void *)D_00D20000)) != 1) {
                    if (func_00D071B0(temp_v0, arg0) != 1) {
                        M2C_FIELD(arg1, s32 *, 0) = (s32) (M2C_FIELD(arg1, s32 *, 0) + 1);
                        M2C_FIELD(arg1, s32 *, 4) = (s32) (M2C_FIELD(arg1, s32 *, 4) + 1);
                        return temp_v0;
                    }
                    func_00D072A0(M2C_FIELD(arg1, s32 *, 0xC), temp_v0);
                    return NULL;
                }
                func_00D072A0(M2C_FIELD(arg1, s32 *, 0xC), temp_v0);
                return NULL;
            }
            return NULL;
        }
        goto block_4;
    }
block_4:
    return NULL;
}
