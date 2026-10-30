/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002CB730(s64);
extern s32 func_001E6C50(void *);
extern void * func_001E6E10(s32);
extern void func_001E64F0(void);
M2C_UNK func_001C4730(s8 *, u8 *, M2C_UNK);         /* extern */
M2C_UNK func_001C48E8(s8 *, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_001E8350(s32, M2C_UNK, s64 *, s8 *, s8 *); /* extern */
u8 *func_002F7F80(s32);                             /* extern */
extern char D_00CBFED0[];

void func_00C18900(s32 arg0) {
    s8 sp40;
    s8 sp240;
    s64 sp288;
    s32 temp_hi;
    s32 temp_s1;
    s32 var_s0;
    s32 var_v0;
    s8 *var_v1;
    s8 *var_v1_2;
    u32 var_a0;
    u8 *temp_s2;
    void *temp_v0;

    var_v0 = 0x200;
    var_v1 = &sp40;
    if (var_v1 != NULL) {
        do {
            *var_v1 = 0;
            var_v0 -= 1;
            var_v1 += 1;
        } while (var_v0 != 0);
    }
    var_s0 = 0;
    temp_hi = arg0 % 84;
    temp_s1 = temp_hi + 0x740B;
    sp288 = (*(s64 *)D_00CBFED0);
    temp_v0 = func_001E6E10(temp_s1);
    if (temp_v0 != NULL) {
        func_001E6C50(temp_v0);
        var_s0 = 1;
    }
    temp_s2 = func_002F7F80(temp_hi);
    func_002CB730(4);
    if (*temp_s2 == 0) {
        func_001C48E8(&sp40, 0, 0x200);
        var_a0 = 0;
        var_v1_2 = &sp240;
        do {
            M2C_FIELD(var_v1_2, s8 *, 0) = 0;
            var_a0 += 1;
            M2C_FIELD(var_v1_2, s8 *, 1) = 0;
            M2C_FIELD(var_v1_2, s8 *, 2) = 0;
            M2C_FIELD(var_v1_2, s8 *, 3) = 0;
            var_v1_2 += 4;
        } while (var_a0 < 0x10U);
    } else {
        func_001C4730(&sp40, temp_s2 + 0x60, 0x200);
        func_001C4730(&sp240, temp_s2 + 0x20, 0x40);
    }
    func_001E8350(temp_s1, 1, &sp288, &sp40, &sp240);
    if (var_s0 != 0) {
        func_001E64F0();
    }
    func_002CB730(1);
}
