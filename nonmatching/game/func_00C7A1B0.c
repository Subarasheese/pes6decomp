/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F9370(void *);
extern void func_001D7D80(void *, s16);
M2C_UNK func_001C48E8(void **, M2C_UNK, M2C_UNK);   /* extern */
s32 func_00C6CB70();                                /* extern */
M2C_UNK func_00C7A2F0(M2C_UNK, u8);                 /* extern */
M2C_UNK func_00C88DD0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern void **D_003EA848;
extern void *D_00CCBEE0;
extern char D_00CCBF18[];
extern M2C_UNK func_00C7A140;
extern M2C_UNK func_00C7A1A0;

void func_00C7A1B0(void) {
    u8 temp_a1;

    if (D_003EA848 == NULL) {
        func_001C48E8(&D_00CCBEE0, 0, 0x3C);
        temp_a1 = (*(u8 *)D_00CCBF18);
        (*(u8 *)D_00CCBF18) = (temp_a1 & ~4) | 4;
        func_00C7A2F0(4, temp_a1);
        func_00C88EC0(0x10, &func_00C7A1A0, &func_00C7A140);
        func_00C88DD0(0x10, 0, 0);
        D_003EA848 = &D_00CCBEE0;
        if (func_00C6CB70() != 0) {
            func_001D7D80(func_002F9370(D_00CCBEE0), 1);
        }
    }
}
