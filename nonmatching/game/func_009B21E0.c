/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_009B20D0(M2C_UNK32 *, void *);         /* extern */
extern void *Pes6Ball_Current;
extern char D_005924B4[];

void func_009B21E0(void) {
    M2C_UNK32 sp30;
    M2C_UNK32 sp34;
    M2C_UNK32 sp38;
    s32 var_v1;

    (*(s32 *)D_005924B4) = 0;
    var_v1 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x10);
    if (var_v1 > 0) {

    } else {
        var_v1 = -var_v1;
    }
    if (!((f32) var_v1 < 13465.0f)) {
        if (M2C_FIELD(Pes6Ball_Current, u8 *, 0x1480) == 0) {
            M2C_FIELD(Pes6Ball_Current, u8 *, 0x1480) = 1U;
            (*(s32 *)D_005924B4) = 1;
            sp38 = 0;
            sp34 = 0;
            sp30 = 0;
            func_009B20D0(&sp30, Pes6Ball_Current);
            M2C_FIELD(Pes6Ball_Current, M2C_UNK32 *, 0x1474) = sp30;
            M2C_FIELD(Pes6Ball_Current, M2C_UNK32 *, 0x1478) = (M2C_UNK32) sp34;
            M2C_FIELD(Pes6Ball_Current, M2C_UNK32 *, 0x147C) = (M2C_UNK32) sp38;
        }
    } else {
        M2C_FIELD(Pes6Ball_Current, u8 *, 0x1480) = 0U;
    }
}
