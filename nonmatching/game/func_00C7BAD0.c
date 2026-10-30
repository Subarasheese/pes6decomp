/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern s32 func_002F9370(void *);
extern void func_001D78B0(void *, u8);
extern void func_001D7960(void *, s8);
extern void func_001D7D60(void *, s8);
extern void func_00C943F0(u32);
extern void * func_002F9390(s32, s32);
extern int func_002D5410(void);
M2C_UNK func_001C48E8(void **, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_002F9120(void *, s32 *, s32);          /* extern */
s32 func_00C86050(s32 **);                          /* extern */
M2C_UNK func_00C88DD0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
s32 *func_00C94400();                               /* extern */
extern void **D_003EA854;
extern void *D_00CCBF20;
extern char D_00CCBF30[];
extern s32 *D_00CCBF34;
extern char D_00CCBF48[];
extern M2C_UNK func_00C7B910;
extern M2C_UNK func_00C7B9A0;
extern M2C_UNK func_00C7BA30;
extern M2C_UNK func_00C7BAA0;

void func_00C7BAD0(void) {
    s32 *temp_s0_2;
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v0_3;
    s32 var_s0;
    void *temp_v0_2;

    temp_s0 = func_002D5410();
    func_001C48E8(&D_00CCBF20, 0, 0x30);
    D_003EA854 = &D_00CCBF20;
    func_00C943F0((u32) temp_s0);
    D_00CCBF34 = func_00C94400();
    if (!((*(u8 *)D_00CCBF48) & 1)) {
        (*(s32 *)D_00CCBF30) = 0xFF;
        temp_v0 = func_00C86050(&D_00CCBF34);
        temp_s0_2 = D_00CCBF34;
        temp_v0_2 = func_002F9390(temp_v0, *temp_s0_2);
        D_00CCBF20 = temp_v0_2;
        func_002F9120(temp_v0_2, temp_s0_2, temp_v0);
        func_001D7960(func_002F9370(D_00CCBF20), 2);
        func_001D7D60(func_002F9370(D_00CCBF20), 0);
        temp_v0_3 = (*(s32 *)D_00CCBF30) * 0xFF;
        var_s0 = temp_v0_3 >> 8;
        if (temp_v0_3 < 0) {
            var_s0 = (s32) (temp_v0_3 + 0xFF) >> 8;
        }
        func_001D78B0(func_002F9370(D_00CCBF20), var_s0 & 0xFF);
        (*(u8 *)D_00CCBF48) = ((*(u8 *)D_00CCBF48) & ~1) | 1;
    }
    if ((*(u8 *)D_00CCBF48) & 1) {
        func_001D7D60(func_002F9370(D_00CCBF20), 0);
    }
    func_00C88EC0(0x11, &func_00C7BAA0, &func_00C7BA30);
    func_00C88DD0(0x11, &func_00C7B9A0, &func_00C7B910);
}
