/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
M2C_UNK func_001E75A0(M2C_UNK, M2C_UNK *);          /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
extern void *D_003EAD88;
extern char D_00B32CE0[];

void func_00B1DF30(void) {
    s8 var_v0;
    void *temp_v0;

    if (D_003EAD88 == NULL) {
        if (D_003EAD88 == NULL) {
            temp_v0 = func_0096DB90(0xCC);
            D_003EAD88 = temp_v0;
            func_001C48E8(temp_v0, 0, 0xCC);
        }
        if (D_003EAD88 != NULL) {
            M2C_FIELD(D_003EAD88, s32 *, 0xA8) = 0;
            M2C_FIELD(D_003EAD88, s8 *, 0xAC) = 0;
            M2C_FIELD(D_003EAD88, s32 *, 0x94) = 0;
            M2C_FIELD(D_003EAD88, s32 *, 0xB0) = 0;
            if (D_003EAD88 != NULL) {
                var_v0 = 2;
            } else {
                var_v0 = 0;
            }
            M2C_FIELD(D_003EAD88, s8 *, 0xB5) = var_v0;
            M2C_FIELD(D_003EAD88, s8 *, 0xB6) = 0;
            M2C_FIELD(D_003EAD88, u8 *, 0xB4) = 0x15U;
            M2C_FIELD(D_003EAD88, s32 *, 0xA4) = (s32) M2C_FIELD(D_003EAD88, u8 *, 0xB4);
            M2C_FIELD(D_003EAD88, s32 *, 0x98) = 0;
            M2C_FIELD(D_003EAD88, s8 *, 0x90) = 0;
        }
        func_001E75A0(0x3011F, ((void *)D_00B32CE0));
        func_001E75A0(0x300C1, ((void *)D_00B32CE0));
        func_001E75A0(0x300C2, ((void *)D_00B32CE0));
        func_001E75A0(0x300C3, ((void *)D_00B32CE0));
        func_001E75A0(0x300C4, ((void *)D_00B32CE0));
        func_001D5F80(0x1030E);
        func_001D5F80(0x1033D);
        func_001D5F80(0x10344);
    }
}
