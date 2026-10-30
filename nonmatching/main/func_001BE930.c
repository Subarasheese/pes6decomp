/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D6E40(void *);
extern void func_001BBC20(s32);
extern void func_001D7F10(void *);
extern int func_001BC060(int);
M2C_UNK func_001BF780(void *);                      /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
extern char D_00398660[];
extern s32 D_003E9934;

void func_001BE930(void) {
    s32 temp_a0_2;
    s32 temp_s1;
    u32 var_s3;
    void *temp_a0;
    void *temp_s4;
    void *var_s2;

    temp_s1 = D_003E9934;
    if (temp_s1 != 0) {
        func_001BC060(temp_s1);
        temp_s4 = ((void *)D_00398660) + 0x2C;
        if (M2C_FIELD(((void *)D_00398660), s32 *, 0x34) != 0) {
            temp_a0 = M2C_FIELD(temp_s4, void **, 0x18);
            if (temp_a0 != NULL) {
                func_001D6E40(temp_a0);
                M2C_FIELD(temp_s4, void **, 0x18) = NULL;
            }
            var_s3 = 0;
            var_s2 = temp_s4;
            do {
                func_001D7F10(M2C_FIELD(var_s2, void **, 8));
                var_s3 += 1;
                var_s2 += 4;
            } while (var_s3 < 4U);
            M2C_FIELD(temp_s4, s32 *, 4) = -1;
            func_001C48E8(temp_s4 + 8, 0, 0x10);
            temp_a0_2 = M2C_FIELD(temp_s4, s32 *, 0x30);
            if (temp_a0_2 != 0) {
                func_001EDD90(temp_a0_2);
                M2C_FIELD(temp_s4, s32 *, 0x30) = 0;
            }
        }
        func_001BF780(((void *)D_00398660) + 0x64);
        D_003E9934 = 0;
        func_001BBC20(temp_s1);
        D_003E9934 = 0;
    }
}
