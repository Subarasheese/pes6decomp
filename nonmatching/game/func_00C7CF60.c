/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00C943C0(u32);
extern s32 func_002F9370(void *);
extern void func_001D78B0(void *, u8);
extern void func_001D7960(void *, s8);
extern void func_001D7D60(void *, s8);
extern void * func_002F9390(s32, s32);
extern int func_002D5410(void);
M2C_UNK func_001C48E8(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_002F9120(void *, s32 *, s32);          /* extern */
s32 func_00C86050(s32 **);                          /* extern */
M2C_UNK func_00C88DD0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 *func_00C943D0();                               /* extern */
extern void **D_003EA860;
extern void *D_00CCBFA0;
extern s32 *D_00CCBFAC;
extern char D_00CCBFB4[];
extern char D_00CCBFC8[];
extern char D_00CCBFD0[];
extern M2C_UNK func_00C7CDA0;
extern M2C_UNK func_00C7CE30;
extern M2C_UNK func_00C7CEC0;
extern M2C_UNK func_00C7CF30;

void func_00C7CF60(void) {
    s32 *temp_s0_2;
    s32 temp_a0;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_v1;
    void *temp_v0_2;

    temp_s0 = func_002D5410();
    func_001C48E8(&D_00CCBFA0, 0, 0x34);
    (*(s32 *)D_00CCBFD0) = 7;
    D_003EA860 = &D_00CCBFA0;
    func_00C943C0((u32) temp_s0);
    D_00CCBFAC = func_00C943D0();
    if (!((*(u8 *)D_00CCBFC8) & 1)) {
        (*(s32 *)D_00CCBFB4) = 0xFF;
        temp_v0 = func_00C86050(&D_00CCBFAC);
        temp_s0_2 = D_00CCBFAC;
        temp_v0_2 = func_002F9390(temp_v0, *temp_s0_2);
        D_00CCBFA0 = temp_v0_2;
        func_002F9120(temp_v0_2, temp_s0_2, temp_v0);
        func_001D7960(func_002F9370(D_00CCBFA0), 2);
        func_001D7D60(func_002F9370(D_00CCBFA0), 0);
        temp_v0_3 = func_002F9370(D_00CCBFA0);
        temp_a0 = (*(s32 *)D_00CCBFB4) * 0xFF;
        var_v1 = temp_a0 >> 8;
        if (temp_a0 < 0) {
            var_v1 = (s32) (temp_a0 + 0xFF) >> 8;
        }
        func_001D78B0((void *) temp_v0_3, var_v1 & 0xFF);
        (*(u8 *)D_00CCBFC8) = ((*(u8 *)D_00CCBFC8) & ~1) | 1;
    }
    if ((*(u8 *)D_00CCBFC8) & 1) {
        func_001D7D60(func_002F9370(D_00CCBFA0), 0);
    }
    func_00C88EC0(0xC, &func_00C7CF30, &func_00C7CEC0);
    func_00C88DD0(0xC, &func_00C7CE30, &func_00C7CDA0);
}
