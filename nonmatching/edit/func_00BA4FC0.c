/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001E6E10(s32);
M2C_UNK func_001C48E8(s8 *, M2C_UNK, M2C_UNK);      /* extern */
M2C_UNK func_001E65D0(void *);                      /* extern */
M2C_UNK func_001E8740(void *, s8 *);                /* extern */
M2C_UNK func_001E8B90(void *, s8 *, s16 *);         /* extern */
s32 func_002EE6A0(s8 *, s8 *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_00CB5BA0[];
extern char D_00CB5BA2[];
extern char D_00CB5BA4[];
extern char D_00CB5BA6[];

s32 func_00BA4FC0(s32 arg0) {
    s8 sp20;
    s8 sp1020;
    s8 sp1021;
    s8 sp1022;
    s8 sp1023;
    s16 sp1428;
    s16 sp142A;
    s16 sp142C;
    s16 sp142E;
    void *temp_v0;

    temp_v0 = func_001E6E10(arg0);
    func_001E65D0(temp_v0);
    sp1428 = (*(s16 *)D_00CB5BA0);
    sp142A = (*(s16 *)D_00CB5BA2);
    sp142C = (*(s16 *)D_00CB5BA4);
    sp142E = (*(s16 *)D_00CB5BA6);
    func_001C48E8(&sp20, 0, 0x1000);
    func_001C48E8(&sp1020, 0, 0x400);
    func_001E8740(temp_v0, &sp1020);
    sp1021 = 0xFF;
    sp1022 = 0xFF;
    sp1020 = 0;
    sp1023 = 0;
    func_001E8B90(temp_v0, &sp20, &sp1428);
    if (func_002EE6A0(&sp1020, &sp20, 0x1BA, 0) == 0) {
        return 0x1CA;
    }
    return 0x1BA;
}
