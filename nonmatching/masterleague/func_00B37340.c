/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7D80(void *, s16);
extern u32 func_00B37A60(void);
extern void * func_001D5A10(s32);
M2C_UNK func_00955F10(M2C_UNK);                     /* extern */
M2C_UNK func_00958000(M2C_UNK);                     /* extern */
M2C_UNK func_00971B80(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_00971C10(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_00971E80(void *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00973AA0(void *, M2C_UNK);             /* extern */
void *func_00973CD0(s32, M2C_UNK);                  /* extern */
M2C_UNK func_00B36BC0();                            /* extern */
M2C_UNK func_00B36EC0();                            /* extern */

void func_00B37340(void) {
    M2C_UNK var_a0;
    s32 temp_v0_4;
    s32 temp_v1;
    u32 temp_v0;
    u32 temp_v0_2;
    void *temp_v0_3;

    temp_v0 = func_00B37A60();
    if (temp_v0 != 0) {
        M2C_FIELD(temp_v0, void **, 0) = func_001D5A10(0x10342);
        temp_v0_2 = func_00B37A60();
        if (temp_v0_2 != 0) {
            temp_v0_3 = func_00973CD0(M2C_FIELD(temp_v0_2, s32 *, 0), 1);
            M2C_FIELD(temp_v0_2, void **, 4) = temp_v0_3;
            func_001D7D80(temp_v0_3, 0);
            temp_v0_4 = func_00971E80(M2C_FIELD(temp_v0_2, void **, 4), 1, 0xFFFF, 0, 0xA);
            M2C_FIELD(temp_v0_2, s32 *, 0x278) = temp_v0_4;
            func_00971C10(temp_v0_4, 0, 0);
            func_00971C10(M2C_FIELD(temp_v0_2, s32 *, 0x278), 1, 1);
            func_00971B80(M2C_FIELD(temp_v0_2, s32 *, 0x278), 2, 0);
            func_00973AA0(temp_v0_3, 0);
            func_00973AA0(temp_v0_3, 1);
            func_00958000(0x16);
        }
        func_00B36EC0();
        func_00B36BC0();
        temp_v1 = M2C_FIELD(temp_v0, s32 *, 0x298);
        var_a0 = 0;
        switch (temp_v1) {                          /* irregular */
        case 0:
            var_a0 = 0x0110002B;
            break;
        case 1:
            var_a0 = 0x0110002C;
            break;
        }
        func_00955F10(var_a0);
    }
}
