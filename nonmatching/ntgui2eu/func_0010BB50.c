/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


s32 func_0010DDC0(s32);                             /* extern */
void *func_0010DE90(s32, M2C_UNK);                  /* extern */
M2C_UNK func_0010EAB8(void *, s32, s32);            /* extern */
M2C_UNK func_0019DBD0(M2C_UNK *);                   /* extern */
M2C_UNK func_001AD620(M2C_UNK *, M2C_UNK, M2C_UNK *); /* extern */
extern char D_005F7A58[];
extern char D_005F7A68[];
extern char D_005F7A70[];
extern char D_005F7AE0[];

s32 func_0010BB50(void *arg0) {
    M2C_UNK *var_a0;
    s8 temp_v0_2;
    void *temp_v0;

    if (arg0 == NULL) {
        func_001AD620(((void *)D_005F7A58), 0x185, ((void *)D_005F7A68));
    }
    if (func_0010DDC0(M2C_FIELD(arg0, s32 *, 0)) != 0) {
        temp_v0 = func_0010DE90(M2C_FIELD(arg0, s32 *, 0), 0);
        if (temp_v0 == NULL) {
            var_a0 = ((void *)D_005F7AE0);
            goto block_9;
        }
        func_0010EAB8(temp_v0, M2C_FIELD((void *)0x011B5C80, s32 *, 0xC), M2C_FIELD((void *)0x011B5C80, s32 *, 0x10));
        M2C_FIELD(arg0, s64 *, 8) = (s64) M2C_FIELD(temp_v0, s64 *, 0x18);
        M2C_FIELD(arg0, s32 *, 0x10) = (s32) M2C_FIELD(temp_v0, u16 *, 0x14);
        M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(temp_v0, u16 *, 0x16);
        temp_v0_2 = M2C_FIELD(temp_v0, u8 *, 0x11) + 0xFF;
        M2C_FIELD(arg0, s8 *, 0x18) = temp_v0_2;
        if (temp_v0_2 & 0xFF) {
            M2C_FIELD(arg0, s64 *, 0x20) = (s64) M2C_FIELD(temp_v0, s64 *, 0x30);
            M2C_FIELD(arg0, s64 *, 0x28) = (s64) M2C_FIELD((temp_v0 + 0x30), s64 *, 8);
        } else {
            M2C_FIELD(arg0, s64 *, 0x28) = 0;
            M2C_FIELD(arg0, s64 *, 0x20) = 0;
        }
        return 0;
    }
    var_a0 = ((void *)D_005F7A70);
block_9:
    func_0019DBD0(var_a0);
    return 1;
}
