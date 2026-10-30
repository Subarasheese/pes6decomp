/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
M2C_UNK func_001E75A0(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_00226240();                                /* extern */
s32 func_0096DB90(M2C_UNK);                         /* extern */
M2C_UNK func_00B00830(s32);                         /* extern */
M2C_UNK func_00B035E0();                            /* extern */
extern s32 D_003EAD54;
extern char D_00B324B0[];

void func_00B03990(void) {
    s32 temp_a0;
    s32 temp_v0;

    if (D_003EAD54 == 0) {
        if (D_003EAD54 == 0) {
            temp_v0 = func_0096DB90(0x29FB0);
            D_003EAD54 = temp_v0;
            func_001C48E8(temp_v0, 0, 0x29FB0);
        }
        func_00B035E0();
        if ((func_00226240() & 0xFF) == 4) {
            func_001E75A0(0x30118, ((void *)D_00B324B0));
        }
        func_001D5F80(0x102AF);
        func_001D5F80(0x10302);
        func_001D5F80(0x10303);
        func_001D5F80(0x102B3);
        func_001D5F80(0x1030D);
        func_001D5F80(0x10311);
        temp_a0 = func_00226240() & 0xFF;
        if (temp_a0 == 4) {
            func_00B00830(temp_a0);
        }
    }
}
