/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern void func_001EDA30(void *, s32);
extern void func_001EEDA0(void *, u8);
extern void func_001ED880(void *, f32);
extern u32 func_00B03A80(void);
extern void * func_001EDD00(void *);
extern void func_001EF860(void *, void *);
extern void func_001EF900(void *, s8);
extern void * func_001E6E10(s32);
extern void func_001EEE60(void *, void *);
void *func_001EE0D0();                              /* extern */
M2C_UNK func_001EE790(void *, s16 *);               /* extern */
M2C_UNK func_001EEAC0(void *, void *);              /* extern */
M2C_UNK func_001EF370(void *, s128 *);              /* extern */
extern f32 D_003E7C18;
extern char D_00B32590[];
extern char D_00B325A0[];

void func_00B04060(void) {
    s128 sp40;
    s128 sp50;
    s16 sp60;
    s16 sp62;
    s16 sp64;
    s16 sp66;
    s16 sp68;
    s16 sp6A;
    s16 sp6C;
    s16 sp6E;
    f32 sp7C;
    s16 temp_v0_3;
    u32 temp_v0;
    void *temp_v0_2;
    void *temp_v0_4;
    void *temp_v0_5;

    sp40 = (*(s128 *)D_00B325A0);
    sp7C = D_003E7C18;
    sp50 = (*(s128 *)D_00B32590);
    temp_v0 = func_00B03A80();
    if (temp_v0 != 0) {
        temp_v0_2 = func_001EE0D0();
        M2C_FIELD(temp_v0, void **, 0) = temp_v0_2;
        func_001EDA30(temp_v0_2, 1);
        func_001ED880(temp_v0_2, 10.0f);
        sp60 = 0;
        temp_v0_3 = ((s64) (0 << 0x30) >> 0x30) + 0x200;
        sp62 = 0;
        sp64 = temp_v0_3;
        sp6A = temp_v0_3;
        sp6C = temp_v0_3;
        sp6E = temp_v0_3;
        sp66 = 0;
        sp68 = 0;
        temp_v0_4 = func_001EDD00(temp_v0_2);
        M2C_FIELD(temp_v0, void **, 8) = temp_v0_4;
        func_001EF900(temp_v0_4, 1);
        func_001EF860(temp_v0_4, &sp50);
        func_001EF370(temp_v0_4, &sp40);
        func_001EEAC0(temp_v0_4, func_001E6E10(M2C_FIELD(temp_v0, s32 *, 0x20)));
        func_001EE790(temp_v0_4, &sp60);
        func_001EEE60(temp_v0_4, &sp7C);
        temp_v0_5 = func_001EDD00(temp_v0_2);
        M2C_FIELD(temp_v0, void **, 8) = temp_v0_5;
        func_001EF900(temp_v0_5, 1);
        func_001EF860(temp_v0_5, &sp50);
        func_001EF370(temp_v0_5, &sp40);
        func_001EEAC0(temp_v0_5, func_001E6E10(M2C_FIELD(temp_v0, s32 *, 0x20)));
        func_001EE790(temp_v0_5, &sp60);
        func_001EEDA0(temp_v0_5, 0U);
        M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
        M2C_FIELD(temp_v0, void **, 4) = temp_v0_5;
    }
}
