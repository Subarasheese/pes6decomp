/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001A0500(s32, s32, s32);               /* extern */
M2C_UNK func_001A0B90(s32, s32, s32);               /* extern */
M2C_UNK func_001A0FA0(s32, s32);                    /* extern */
void *func_001A10A0(u8, u8);                        /* extern */
extern char D_003978E8[];
extern char D_003978E9[];
extern char D_003978EA[];
extern char D_003978EB[];

void *func_001A03D0(s32 arg0) {
    u8 sp5C;
    u8 sp5D;
    u8 sp5E;
    u8 sp5F;
    s32 var_v0;
    void *temp_s0;
    void *temp_s1;
    void *temp_v0;

    sp5C = (*(u8 *)D_003978E8);
    sp5D = (*(u8 *)D_003978E9);
    sp5E = (*(u8 *)D_003978EA);
    sp5F = (*(u8 *)D_003978EB);
    temp_v0 = func_001A10A0((*(u8 *)D_003978E9), (*(u8 *)D_003978E8));
    if (temp_v0 == NULL) {
        return NULL;
    }
    temp_s1 = temp_v0 + 4;
    temp_s0 = temp_v0 + 0x18;
    if (temp_s1 != NULL) {
        if (arg0 == 1) {
            var_v0 = 0x11;
        } else {
            var_v0 = 0xEB;
        }
        M2C_FIELD(temp_v0, s32 *, 4) = var_v0;
        M2C_FIELD(temp_s1, u8 *, 4) = sp5C;
        M2C_FIELD(temp_s1, u8 *, 5) = sp5D;
        M2C_FIELD(temp_s1, u8 *, 6) = sp5E;
        M2C_FIELD(temp_s1, u8 *, 7) = sp5F;
    }
    if (temp_s0 != NULL) {
        M2C_FIELD(temp_v0, s16 *, 0x18) = 0x24;
        M2C_FIELD(temp_s0, s16 *, 2) = 7;
        M2C_FIELD(temp_s0, u8 *, 4) = sp5C;
        M2C_FIELD(temp_s0, u8 *, 5) = sp5D;
        M2C_FIELD(temp_s0, u8 *, 6) = sp5E;
        M2C_FIELD(temp_s0, u8 *, 7) = sp5F;
    }
    func_001A0FA0(M2C_FIELD(temp_s1, s32 *, 8), arg0);
    func_001A0B90(M2C_FIELD(temp_s0, s32 *, 8), arg0, (s32) sp5C);
    func_001A0500(M2C_FIELD(temp_s1, s32 *, 0x10), M2C_FIELD(temp_s1, s32 *, 0xC), arg0);
    return temp_v0;
}
