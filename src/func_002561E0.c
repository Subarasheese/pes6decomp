/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern char D_0058CD80[];
extern char D_0058CD84[];
extern char D_0058CD88[];
extern char D_0058CD8C[];
extern char D_0058CD90[];
extern char D_0058CD94[];
extern char D_0058CD98[];
extern char D_0058CD9C[];

void func_002561E0(void *object) {
    (*(s8 *)D_0058CD80) = 1;
    (*(s32 *)D_0058CD84) = M2C_FIELD(object, s32 *, 0);
    (*(s32 *)D_0058CD88) = M2C_FIELD(object, s32 *, 4);
    (*(s32 *)D_0058CD8C) = M2C_FIELD(object, s32 *, 8);
    (*(s32 *)D_0058CD90) = M2C_FIELD(object, s32 *, 0xC);
    (*(s32 *)D_0058CD94) = M2C_FIELD(object, s32 *, 0x10);
    (*(s32 *)D_0058CD98) = M2C_FIELD(object, s32 *, 0x14);
    (*(s32 *)D_0058CD9C) = M2C_FIELD(object, s32 *, 0x18);
}
