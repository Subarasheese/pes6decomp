/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00225820(void);
extern s32 func_00B00D40(void);
s32 func_00292ED0(u64);                             /* extern */
void *func_00970870(u16);                           /* extern */
extern void *D_003EAD54;

void func_00B00B80(void) {
    s32 temp_v1;
    s32 var_s2;
    void *temp_s0;
    void *temp_v0;
    void *var_s1;

    func_00225820();
    temp_s0 = D_003EAD54;
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_s0, s32 *, 0x73C) = 0;
        var_s2 = 0;
        M2C_FIELD(temp_s0, s32 *, 0x740) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x744) = 0;
        M2C_FIELD(temp_s0, s32 *, 0x748) = 0;
        if ((func_00B00D40() & 0xFF) > 0) {
            var_s1 = temp_s0;
            do {
                temp_v0 = func_00970870(M2C_FIELD(var_s1, u16 *, 0xA0C));
                if (temp_v0 != NULL) {
                    temp_v1 = func_00292ED0((u64) ((s64) M2C_FIELD(temp_v0, u8 *, 1) << 0x38) >> 0x3C) & 0xFF;
                    switch (temp_v1) {              /* irregular */
                    case 0:
                        M2C_FIELD(temp_s0, s32 *, 0x73C) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x73C) + 1);
                        break;
                    case 1:
                        M2C_FIELD(temp_s0, s32 *, 0x740) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x740) + 1);
                        break;
                    case 2:
                        M2C_FIELD(temp_s0, s32 *, 0x744) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x744) + 1);
                        break;
                    case 3:
                        M2C_FIELD(temp_s0, s32 *, 0x748) = (s32) (M2C_FIELD(temp_s0, s32 *, 0x748) + 1);
                        break;
                    }
                }
                var_s1 += 0x1C;
                var_s2 += 1;
            } while (var_s2 < (func_00B00D40() & 0xFF));
        }
    }
}
