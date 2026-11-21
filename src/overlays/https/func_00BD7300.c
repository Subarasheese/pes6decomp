/* compiler: ee-gcc-2.9-G0 */
#include "pes6/m2c.h"

s32 func_00BB4AD0(M2C_UNK *);
s32 func_00BB4AF0(M2C_UNK *);
extern char D_00C3FE90[];
extern char D_00C3FEB0[];
extern s32 D_00C40480;
extern char D_00C4DEB8[];
extern char D_00C4DEC0[];
extern char D_00C4DEE8[];
extern char D_00C4DF70[];
extern char D_00C4DF78[];
extern char D_00C4DF88[];
extern char D_00C4DF90[];

void func_00BD7300(void) {
    D_00C40480 = 0;
    M2C_FIELD(((void *)D_00C3FE90), s32 *, 0) = func_00BB4AD0(((void *)D_00C4DF70));
    M2C_FIELD(((void *)D_00C3FE90), s32 *, 4) = func_00BB4AD0(((void *)D_00C4DF78));
    M2C_FIELD(((void *)D_00C3FE90), s32 *, 8) = func_00BB4AD0(((void *)D_00C4DEE8));
    M2C_FIELD(((void *)D_00C3FE90), s32 *, 0xC) = func_00BB4AD0(((void *)D_00C4DF88));
    M2C_FIELD(((void *)D_00C3FE90), s32 *, 0x10) = func_00BB4AD0(((void *)D_00C4DF90));
    M2C_FIELD(((void *)D_00C3FEB0), s32 *, 0) = func_00BB4AF0(((void *)D_00C4DEC0));
    M2C_FIELD(((void *)D_00C3FEB0), s32 *, 4) = func_00BB4AF0(((void *)D_00C4DEB8));
}
