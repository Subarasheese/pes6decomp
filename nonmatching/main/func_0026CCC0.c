/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern s32 func_001BBC60(s32);
s32 func_001BBEC0(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0087F550();                            /* extern */
extern char D_003D9AB8[];
extern char D_0058D7A0[];
extern char D_0058D7A7[];
extern char D_0058D7B0[];
extern char D_00591DB7[];
extern M2C_UNK func_0026C860;

void func_0026CCC0(void) {
    s32 temp_v0;

    if ((*(s16 *)D_0058D7A0) == 0) {
        temp_v0 = func_001BBEC0(0, &func_0026C860, 0, 0, 0, ((void *)D_003D9AB8));
        (*(s32 *)D_0058D7B0) = temp_v0;
        func_001BBC60(temp_v0);
        (*(s16 *)D_0058D7A0) = 1;
        (*(s8 *)D_0058D7A7) = 0;
        if (func_002DCA30() != 0) {
            func_0087F550();
        }
        (*(s8 *)D_00591DB7) = 0;
    }
}
