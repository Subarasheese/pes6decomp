/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AAF40(void *, signed char);
extern void func_002A96D0(void);
extern s32 func_00152130(s32, s8);
M2C_UNK func_0027CB60(M2C_UNK);                     /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
M2C_UNK func_00BDC5A0(s32);                         /* extern */
M2C_UNK func_00BDC6F0(s32);                         /* extern */
M2C_UNK func_00BDCE30(s32);                         /* extern */
M2C_UNK func_00BDCF40(s32);                         /* extern */
M2C_UNK func_00BF6240(M2C_UNK);                     /* extern */
extern char Pes6MatchPlayers[];
extern char D_00591BE4[];

void func_00BDD100(void) {
    M2C_UNK *var_s1;
    s32 temp_a0;
    s32 var_s0;

    temp_a0 = func_009E1C90(3) & 0xFF;
    switch (temp_a0) {                              /* irregular */
    case 0:
        func_00BDCF40(temp_a0);
        return;
    case 1:
        func_00BDCE30(temp_a0);
        return;
    case 2:
        func_00BDC6F0(temp_a0);
        return;
    case 3:
        func_00BDC5A0(temp_a0);
        return;
    case 4:
        if (func_00152130(1, ((0x3C / (s32) (*(u8 *)D_00591BE4)) << 5) & 0xFF) != 0) {
            var_s0 = 0;
            var_s1 = ((void *)Pes6MatchPlayers);
            do {
                func_001AAF40(*M2C_FIELD(var_s1, void ***, 4), 0);
                var_s0 += 1;
                var_s1 += 0x240;
            } while (var_s0 < 0x17);
            func_002A96D0();
            func_0027CB60(5);
            func_00BF6240(1);
        }
        return;
    }
}
