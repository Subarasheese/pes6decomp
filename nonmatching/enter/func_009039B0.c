/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0027A880(int);
extern void func_00182AD0(void);
M2C_UNK func_00903330();                            /* extern */
M2C_UNK func_0090A410(M2C_UNK, M2C_UNK, M2C_UNK, f32); /* extern */
extern void *Pes6Ball_Current;
extern char D_0092F0FA[];

s32 func_009039B0(void) {
    func_00903330();
    func_0090A410(0x32, 0xFF, -1, (f32) (*(s16 *)D_0092F0FA));
    func_0027A880(1);
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x10) = 0;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x18) = 0;
    M2C_FIELD(Pes6Ball_Current, s32 *, 0x14) = 0xC1E00000;
    func_00182AD0();
    return 1;
}
