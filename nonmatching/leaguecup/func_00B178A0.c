/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
M2C_UNK func_001E75A0(M2C_UNK, M2C_UNK *);          /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_00B176B0();                            /* extern */
extern void *D_003EAD78;
extern char D_00B32BD8[];

void func_00B178A0(void) {
    void *temp_v0;

    if (D_003EAD78 == NULL) {
        if (D_003EAD78 == NULL) {
            temp_v0 = func_0096DB90(0xE10);
            D_003EAD78 = temp_v0;
            func_001C48E8(temp_v0, 0, 0xE10);
        }
        if (D_003EAD78 != NULL) {
            if (D_003EAD78 != NULL) {
                M2C_FIELD(D_003EAD78, s32 *, 0) = 0;
                M2C_FIELD(D_003EAD78, s32 *, 4) = 0;
                M2C_FIELD(D_003EAD78, s16 *, 0x28) = 0xFFFF;
                M2C_FIELD(D_003EAD78, s16 *, 0x2A) = 0xFFFF;
                M2C_FIELD(D_003EAD78, s8 *, 0x63) = 0;
            }
            M2C_FIELD(D_003EAD78, s32 *, 0x3D0) = 0;
            M2C_FIELD(D_003EAD78, s32 *, 0xE00) = 0xB;
            func_00B176B0();
        }
        func_001E75A0(0x3011D, ((void *)D_00B32BD8));
        func_001D5F80(0x1030B);
    }
}
