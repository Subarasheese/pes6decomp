/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_002DCA30(void);
extern void func_0023EC10(void *, s32);
M2C_UNK func_0023E0E0(M2C_UNK);                     /* extern */
s32 func_002DEC40(M2C_UNK *);                       /* extern */
M2C_UNK func_00944100();                            /* extern */
M2C_UNK func_00D0CB50();                            /* extern */
extern s16 D_003E7B88;
extern s16 D_003E7B8C;
extern s32 D_003E7B90;
extern s32 D_003E9A5C;
extern char D_0053C300[];
extern char D_0053C388[];
extern char D_00591C09[];
extern M2C_UNK func_009429D0;

void func_00943240(void) {
    func_00944100();
    if ((*(u8 *)D_00591C09) == 5) {
        (*(s32 *)D_0053C388) = 1;
    }
    if (func_002DCA30() == 0) {
        func_0023E0E0(3);
    } else {
        D_003E9A5C = func_002DEC40(&func_009429D0);
        func_0023E0E0(0x1E);
        func_00D0CB50();
        D_003E7B8C = 0xFFFF;
        D_003E7B88 = -1;
        D_003E7B90 = -1;
    }
    func_0023EC10(((void *)D_0053C300) + 0x10, 0x40);
}
