/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_00134430(s32 *);                       /* extern */
extern char D_011D6F04[];
extern char D_011D6F08[];
extern char D_011D6F0C[];

void func_00134400(s32 arg0, s32 arg1, s32 arg2) {
    (*(s32 *)D_011D6F08) = arg0;
    (*(s32 *)D_011D6F04) = arg1;
    (*(s32 *)D_011D6F0C) = arg2;
    func_00134430(((void *)D_011D6F0C));
}
