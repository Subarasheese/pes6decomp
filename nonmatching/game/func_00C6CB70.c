/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u32 func_00C6DBB0(void);
extern void func_002F9110(void);
extern void func_00153FA0(void *);
extern void func_00C6DC00(u32);
extern int func_002D5410(void);
M2C_UNK func_001C48E8(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_00C6D340();                            /* extern */
M2C_UNK func_00C6D7A0();                            /* extern */
s32 func_00C6DA10();                                /* extern */
s32 func_00C6DB90(s32);                             /* extern */
s32 func_00C6DBC0(s32);                             /* extern */
s32 func_00C6DBE0(s32);                             /* extern */
s32 func_00C6DC10();                                /* extern */
M2C_UNK func_00C88DD0(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_00C88E50(M2C_UNK);                     /* extern */
M2C_UNK func_00C88EC0(M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
extern s32 *D_003EA80C;
extern char D_00CCBB50[];
extern char D_00CCBB64[];
extern char D_00CCBB78[];
extern char D_00CCBB7C[];
extern char D_00CCBB94[];
extern char D_00CCBB98[];
extern char D_00CCBBAC[];
extern char D_00CCBBB0[];
extern M2C_UNK func_00C6CAA0;
extern M2C_UNK func_00C6CD50;

s32 func_00C6CB70(void) {
    s32 *var_s0;
    s32 *var_s0_2;
    s32 temp_v0;
    s32 var_s1;
    s32 var_s2;
    void *temp_s1;
    void *var_a0;

    if (D_003EA80C == NULL) {
        func_001C48E8(((void *)D_00CCBB50), 0, 0x64);
        (*(s32 *)D_00CCBB94) = 0;
        D_003EA80C = ((void *)D_00CCBB50);
        (*(s32 *)D_00CCBBAC) = 0;
        (*(s32 *)D_00CCBB98) = 0;
        (*(s32 *)D_00CCBBB0) = 0;
        if (func_00C6DA10() != 0) {
            func_00C6DC00(func_002D5410());
            var_s1 = 0;
            (*(s32 *)D_00CCBB64) = func_00C6DC10();
            var_s0 = ((void *)D_00CCBB50);
            do {
                M2C_FIELD(var_s0, s32 *, 0x38) = func_00C6DBE0(var_s1);
                M2C_FIELD(var_s0, u32 *, 0x3C) = func_00C6DBB0();
                M2C_FIELD(var_s0, s32 *, 0x40) = func_00C6DBC0(var_s1);
                temp_v0 = func_00C6DB90(var_s1);
                var_s1 += 1;
                M2C_FIELD(var_s0, s32 *, 0x34) = temp_v0;
                var_s0 += 0x18;
            } while (var_s1 < 2);
            func_00C6D7A0();
            func_00C6D340();
            func_00C88EC0(0x1B, &func_00C6CD50, &func_00C6CAA0);
            func_00C88DD0(0x1B, 0, 0);
            (*(s32 *)D_00CCBB78) = 0;
            (*(s32 *)D_00CCBB7C) = 2;
            return 1;
        }
        var_s2 = 0;
        var_s0_2 = ((void *)D_00CCBB50);
        do {
            var_a0 = M2C_FIELD(var_s0_2, void **, 0x44);
            if (var_a0 != NULL) {
                do {
                    temp_s1 = M2C_FIELD(var_a0, void **, 8);
                    func_00153FA0(var_a0);
                    var_a0 = temp_s1;
                } while (temp_s1 != NULL);
            }
            M2C_FIELD(var_s0_2, void **, 0x44) = NULL;
            var_s2 += 1;
            M2C_FIELD(var_s0_2, s32 *, 0x48) = 0;
            var_s0_2 += 0x18;
        } while (var_s2 < 2);
        if (D_003EA80C != NULL) {
            func_002F9110();
            (*(s32 *)D_00CCBB50) = 0;
            D_003EA80C = NULL;
            func_001C48E8(((void *)D_00CCBB50), 0, 0x64);
            func_00C88E50(0x1B);
            D_003EA80C = NULL;
        }
        /* Duplicate return node #13. Try simplifying control flow for better match */
        return 0;
    }
    return 0;
}
