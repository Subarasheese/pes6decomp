/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u8 func_00BF6280(void);
extern void func_00284A20(void *);
M2C_UNK func_0027D4E0(u8, u8);                      /* extern */
s32 func_009E1C90(M2C_UNK);                         /* extern */
extern char Pes6MatchState_Current[];
extern char D_00591E57[];
extern char D_00591F24[];

void func_00A9D4B0(u8 *arg0) {
    if ((func_009E1C90(1) & 0xFF) != 0xC) {
        if (((*(u8 *)D_00591F24) != 3) && ((*(u8 *)D_00591F24) != 6)) {
            goto block_3;
        }
    } else if ((func_00BF6280() != 0) && ((*(u8 *)D_00591F24) != 3) && ((*(u8 *)D_00591F24) != 6)) {
block_3:
        func_0027D4E0(*arg0, (*(u8 *)D_00591F24));
        (*(u8 *)D_00591E57) = *arg0;
        (*(u8 *)Pes6MatchState_Current) = *arg0;
        func_00284A20(arg0);
    }
}
