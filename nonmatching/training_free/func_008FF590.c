/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

void *func_00154060(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_001BC300();                            /* extern */
s32 func_0026B4F0(M2C_UNK *, M2C_UNK *, M2C_UNK);   /* extern */
M2C_UNK func_0026E840(M2C_UNK);                     /* extern */
M2C_UNK func_002CAFB0();                            /* extern */
M2C_UNK func_00363BD0();                            /* extern */
M2C_UNK func_008FAB70(M2C_UNK);                     /* extern */
M2C_UNK func_009B3F70();                            /* extern */
s8 func_009B4440(s8 *, void **, void *);            /* extern */
M2C_UNK func_009B4450(M2C_UNK);                     /* extern */
M2C_UNK func_009B4630(M2C_UNK);                     /* extern */
s32 func_009B4650();                                /* extern */
s32 func_009B4860();                                /* extern */
extern void *D_003AE9D0;
extern char D_00591DB4[];
extern char D_00591DB5[];
extern char D_00591F12[];
extern M2C_UNK func_008FF400;
extern M2C_UNK func_008FF490;

s32 func_008FF590(void) {
    if (func_009B4860() != 0) {
        func_0026E840(0x84028400);
        func_00363BD0();
        func_001BC300();
        D_003AE9D0 = func_00154060(1, 0x28);
        func_008FAB70(0);
        M2C_FIELD(D_003AE9D0, s32 *, 0x1C) = func_0026B4F0(&func_008FF490, &func_008FF400, 0);
        M2C_FIELD(D_003AE9D0, s32 *, 0x24) = 0;
        (*(s8 *)D_00591DB5) = 0;
        (*(s8 *)D_00591DB4) = 0;
        M2C_FIELD(D_003AE9D0, s8 *, 0x20) = func_009B4440(((void *)D_00591DB5), &D_003AE9D0, D_003AE9D0);
        func_009B4450(0);
        (*(s8 *)D_00591F12) = 0;
        M2C_FIELD(D_003AE9D0, s32 *, 0x18) = (s32) (func_009B4650() & 0xFF);
        func_009B4630(4);
        func_009B3F70();
        func_002CAFB0();
    } else {
        func_0026E840(0x8C008005);
    }
    return 0;
}
