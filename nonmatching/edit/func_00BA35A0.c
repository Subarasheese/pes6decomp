/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
M2C_UNK func_001EDD90(s32);                         /* extern */
extern char D_00CE4188[];
extern void *D_00CE418C;
extern void *D_00CE4190;
extern char D_00CE41A0[];

void func_00BA35A0(void) {
    if ((*(s32 *)D_00CE4188) != 0) {
        func_001EDD90((*(s32 *)D_00CE4188));
        func_00153FA0(D_00CE418C);
        func_00153FA0(D_00CE4190);
        (*(s32 *)D_00CE4188) = 0;
        D_00CE418C = NULL;
        D_00CE4190 = NULL;
    }
    if ((*(s32 *)D_00CE41A0) != 0) {
        func_001EDD90((*(s32 *)D_00CE41A0));
        (*(s32 *)D_00CE41A0) = 0;
    }
}
