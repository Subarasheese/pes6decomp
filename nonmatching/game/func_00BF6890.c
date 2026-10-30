/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


void **func_00B2A420(u8);                           /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern void *Pes6Ball_Current;
extern char D_00591BE4[];
extern char D_00591E14[];
extern char D_00591E57[];
extern char D_00591F24[];
extern char D_005922EA[];

s32 func_00BF6890(void) {
    void *temp_a0;

    if (((*(s32 *)D_00591E14) == ((u8) (*(u8 *)D_00591BE4) >> 1)) && ((s32) (*(u16 *)D_005922EA) <= 0)) {
        if ((*(u8 *)D_00591F24) != 3) {
            goto block_3;
        }
        temp_a0 = *func_00B2A420((*(u8 *)D_00591E57));
        if ((M2C_FIELD(M2C_FIELD(temp_a0, void **, 4), u16 *, 0x30) == 0x48D) || ((M2C_FIELD(temp_a0, u8 *, 0x10) == 0) && (func_00BBB8C0(0xA) < 3) && (M2C_FIELD(Pes6Ball_Current, u16 *, 0xA4) == 9))) {
            return 1;
        }
block_3:
        return 0;
    }
    return 0;
}
