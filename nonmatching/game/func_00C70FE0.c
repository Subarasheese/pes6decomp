/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001F70D0(s32);
extern void func_001EF900(void *, s8);
extern void * func_001F7B30(s32);
extern void func_001F7030(void *, s32);
M2C_UNK func_00C71380();                            /* extern */
M2C_UNK func_00C719E0();                            /* extern */
M2C_UNK func_00C71AB0();                            /* extern */
s32 func_00C86030(M2C_UNK);                         /* extern */
extern char D_00CCBCD0[];
extern void *D_00CCBCD8;
extern char D_00CCBD06[];
extern char D_00CCBD0A[];
extern char D_00CCBD0E[];
extern char D_00CCBD12[];
extern char D_00CCBD16[];
extern char D_00CCBD18[];
extern char D_00CCBD19[];
extern char D_00CCBD1A[];
extern char D_00CCBD1B[];
extern char D_00CCBD1E[];
extern char D_00CCBD21[];
extern char D_00CCCE30[];
extern void *D_00CCCF74;
extern void *D_00CCCF88;
extern void *D_00CCCF98;
extern void *D_00CCCFB0;

void func_00C70FE0(void) {
    M2C_UNK *var_s3;
    s32 var_s0_2;
    s32 var_s1;
    s32 var_s1_3;
    s32 var_s2;
    s32 var_s4;
    s32 var_s5;
    void **var_s0;
    void **var_s0_3;
    void **var_s1_2;
    void *temp_v0;

    (*(s16 *)D_00CCBD06) = 0xFFFF;
    (*(s16 *)D_00CCBD0A) = 0xFFFF;
    (*(s16 *)D_00CCBD0E) = 0xFFFF;
    (*(s16 *)D_00CCBD12) = 0xFFFF;
    (*(s16 *)D_00CCBD16) = 0xFFFF;
    (*(s8 *)D_00CCBD18) = 0xFF;
    (*(s8 *)D_00CCBD1A) = 0xFF;
    (*(s8 *)D_00CCBD19) = 0xFF;
    (*(s8 *)D_00CCBD1B) = 0xFF;
    (*(s8 *)D_00CCBD1E) = 0xFF;
    (*(s8 *)D_00CCBD21) = 0xFF;
    temp_v0 = func_001F70D0(func_001F7B30(func_00C86030(0xFFFF)));
    D_00CCBCD8 = temp_v0;
    func_001F7030(temp_v0, 2);
    func_00C71AB0();
    func_00C71380();
    func_00C719E0();
    var_s1 = 0;
    var_s0 = &D_00CCCF98;
    do {
        func_001EF900(*var_s0, 0);
        var_s1 += 1;
        var_s0 += 4;
    } while (var_s1 < 6);
    func_001EF900(D_00CCCFB0, 0);
    var_s5 = 0;
    var_s3 = ((void *)D_00CCBCD0);
    var_s2 = 0x4B;
    do {
        if (((M2C_FIELD(var_s3, u16 *, 0x34) / 10) + ((u16) M2C_FIELD(var_s3, u16 *, 0x34) >> 0x1F)) == 0) {
            var_s0_2 = 1;
        } else {
            var_s0_2 = 2;
        }
        var_s4 = 0;
        var_s1_2 = ((void *)D_00CCCE30) + (var_s2 * 4) + 0x1C;
        if (var_s0_2 > 0) {
            do {
                func_001EF900(*var_s1_2, 0);
                var_s4 += 1;
                var_s1_2 += 4;
            } while (var_s4 < var_s0_2);
        }
        var_s5 += 1;
        var_s3 += 4;
        var_s2 += 2;
    } while (var_s5 < 2);
    var_s1_3 = 0;
    var_s0_3 = &D_00CCCF88;
    do {
        func_001EF900(*var_s0_3, 0);
        var_s1_3 += 1;
        var_s0_3 += 4;
    } while (var_s1_3 < 4);
    func_001EF900(D_00CCCF74, 0);
}
