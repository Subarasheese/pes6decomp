/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


extern char D_00CBBECC[];
extern char D_00CBBED0[];
extern char D_00CBBED4[];
extern char D_00CBBED8[];
extern char D_00CBBEDA[];
extern char D_00CBBEDC[];
extern char D_00CBBEDD[];

void func_00B26020(void) {
    (*(s32 *)D_00CBBED0) = -1;
    (*(s32 *)D_00CBBED4) = -1;
    (*(u8 *)D_00CBBECC) = ((*(u8 *)D_00CBBECC) & ~1) | 1;
    (*(s16 *)D_00CBBED8) = -1;
    (*(s16 *)D_00CBBEDA) = -1;
    (*(s8 *)D_00CBBEDC) = 0;
    (*(s8 *)D_00CBBEDD) = 0;
    (*(u8 *)D_00CBBECC) = ((*(u8 *)D_00CBBECC) & ~2) | 2;
    (*(u8 *)D_00CBBECC) = ((*(u8 *)D_00CBBECC) & ~0x10) | ((0 & 1) * 0x10);
}
