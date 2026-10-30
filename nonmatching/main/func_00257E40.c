/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types and call contracts remain provisional. */
#include "pes6/m2c.h"

s32 func_00154060(M2C_UNK, s32);                    /* extern */
s32 func_0025EC80(M2C_UNK);                         /* extern */
s32 func_0025ECE0(M2C_UNK);                         /* extern */
M2C_UNK func_0025ED00(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0025ED80();                                /* extern */
extern char D_0058CF00[];
extern char D_0058CF04[];
extern char D_0058CF08[];
extern char D_0058CF0C[];
extern char D_0058CF10[];

void func_00257E40(void) {
    s32 temp_v0;

    if (func_0025ED80() != 0) {
        func_0025ED00(1, ((void *)D_0058CF00));
        (*(s32 *)D_0058CF0C) = func_0025ECE0(1);
        temp_v0 = func_0025EC80(1);
        (*(s32 *)D_0058CF04) = temp_v0;
        (*(s32 *)D_0058CF08) = func_00154060(1, temp_v0);
        (*(s8 *)D_0058CF10) = 1;
    }
}
