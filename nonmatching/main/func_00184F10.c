/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001CEBD0(int);
extern void func_001CEC70(void);
extern void func_001CEB90(void);
M2C_UNK func_001CEAB0();                            /* extern */
M2C_UNK func_001CEC30();                            /* extern */
M2C_UNK func_001CECC0(s32);                         /* extern */
s32 func_001D3090(void *);                          /* extern */
M2C_UNK func_001D3260(void *);                      /* extern */
M2C_UNK func_002562B0(M2C_UNK);                     /* extern */
extern char D_0051FF4E[];
extern void *D_0051FFB8;

void func_00184F10(void) {
    void *temp_s0;

    if ((D_0051FFB8 != NULL) && (M2C_FIELD(D_0051FFB8, s16 *, 6) != 0)) {
        if ((*(u8 *)D_0051FF4E) == 1) {
            if (M2C_FIELD(D_0051FFB8, u8 *, 2) != 1) {
                func_002562B0(7);
                M2C_FIELD(D_0051FFB8, u8 *, 2) = 1U;
            }
        } else if ((D_0051FFB8 != NULL) && (M2C_FIELD(D_0051FFB8, u8 *, 2) != 0)) {
            func_002562B0(8);
            M2C_FIELD(D_0051FFB8, u8 *, 2) = 0U;
        }
        temp_s0 = D_0051FFB8 + 0x54;
        M2C_FIELD(D_0051FFB8, s16 *, 0x56) = (s16) M2C_FIELD(D_0051FFB8, s16 *, 6);
        func_001CECC0(func_001D3090(temp_s0) + 0x60);
        func_001CEB90();
        func_001CEC30();
        func_001CEBD0(2);
        func_001CEAB0();
        func_001D3260(temp_s0);
        func_001CEC70();
        return;
    }
    if ((D_0051FFB8 != NULL) && (M2C_FIELD(D_0051FFB8, u8 *, 2) != 0)) {
        func_002562B0(8);
        M2C_FIELD(D_0051FFB8, u8 *, 2) = 0U;
    }
}
