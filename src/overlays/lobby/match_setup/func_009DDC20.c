/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern s32 func_0093DED0(void);
extern s32 func_0099C7E0(s32);
extern s32 func_009DA8E0(s32);
extern s32 func_009DAF30(u8, s32 *);
extern void * func_009DD7D0(s32, void *);

extern char D_00A7DEC0[];

void func_009DDC20(void) {
    s32 temp_v0;

    if ((*(s32 *)D_00A7DEC0) == 0) {
        temp_v0 = func_0099C7E0(8);
        (*(s32 *)D_00A7DEC0) = temp_v0;
        if (temp_v0 != 0) {
            M2C_FIELD((*(s32 *)D_00A7DEC0), u8 *, 1) = func_0093DED0();
            func_009DAF30(M2C_FIELD((*(s32 *)D_00A7DEC0), u8 *, 1), (s32 *) func_009DD7D0);
            func_009DA8E0(0);
        }
    }
}
