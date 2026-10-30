/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00277C30(void *, signed char);
M2C_UNK func_00274740(void *);                      /* extern */
s32 func_00277220(void *, M2C_UNK);                 /* extern */
M2C_UNK func_00278240(s32);                         /* extern */
s32 func_00997C30(void *);                          /* extern */
s32 func_00997E10(void *);                          /* extern */
s32 func_00BDB5F0(void *);                          /* extern */
s32 func_00C00D60(s32);                             /* extern */
s32 func_00C01090();                                /* extern */
extern char Pes6MatchPlayers[];
extern char D_005927B8[];
extern char D_005927BA[];
extern char D_005927BB[];
extern char Pes6MatchSquads[];

void func_00BFAF80(s32 arg0) {
    s32 temp_v1;
    s32 var_a0;
    void *temp_s0;
    void *temp_s1;

    if (func_00C01090() != 0) {
        temp_v1 = func_00C00D60(arg0) & 0xFF;
        if (temp_v1 == 0xFF) {
            var_a0 = 1;
        } else {
            var_a0 = temp_v1 % 23;
        }
        temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
        temp_s1 = (M2C_FIELD(temp_s0, u8 *, 0x11) * 0x348) + (((void *)Pes6MatchSquads) + (M2C_FIELD(temp_s0, u8 *, 0x12) * 0x6900)) + 0xF0;
        func_00277C30(temp_s1, 0);
        if (func_00277220(temp_s1, 1) == 2) {
            func_00274740(temp_s0);
        }
        if ((func_00997C30(temp_s0) != 0) && (func_00BDB5F0(temp_s0) == 0)) {
            func_00278240(func_00997E10(temp_s0));
        }
        if (func_00277220(temp_s1, 1) == 2) {
            (*(s8 *)D_005927B8) = 1;
            (*(u8 *)D_005927BA) = M2C_FIELD(temp_s0, u8 *, 0x12);
            (*(u8 *)D_005927BB) = M2C_FIELD(temp_s0, u8 *, 0x11);
        }
    }
}
