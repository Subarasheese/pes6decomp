/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001D5F80(M2C_UNK);                     /* extern */
M2C_UNK func_001E75A0(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_00949540();                            /* extern */
void *func_0096DB90(M2C_UNK);                       /* extern */
M2C_UNK func_00B1ABB0();                            /* extern */
M2C_UNK func_00B1ACC0();                            /* extern */
extern void *D_003EAD7C;
extern char D_00B32C30[];

void func_00B1B0D0(void) {
    void *temp_s0;
    void *temp_v0;

    if (D_003EAD7C == NULL) {
        if (D_003EAD7C == NULL) {
            temp_v0 = func_0096DB90(0x36C);
            D_003EAD7C = temp_v0;
            func_001C48E8(temp_v0, 0, 0x36C);
        }
        temp_s0 = D_003EAD7C;
        if (temp_s0 != NULL) {
            func_00B1ABB0();
            M2C_FIELD(temp_s0, s8 *, 0x368) = 1;
            M2C_FIELD(temp_s0, s8 *, 0x369) = 0;
            M2C_FIELD(temp_s0, s8 *, 0x36A) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x364) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x5C) = 0;
            M2C_FIELD(temp_s0, s32 *, 0x2B4) = 0;
            func_00B1ACC0();
        }
        func_001E75A0(0x3011E, ((void *)D_00B32C30));
        func_00949540();
        func_001D5F80(0x1030C);
    }
}
