/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00363C30(void);
extern s32 func_00362BB0(void);
extern void func_00363BD0(void);
M2C_UNK func_001B79C0();                            /* extern */
M2C_UNK func_00363330(M2C_UNK);                     /* extern */
M2C_UNK func_00D141E0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_00D14C10(M2C_UNK *);                   /* extern */
M2C_UNK func_00D14D50(s32);                         /* extern */
M2C_UNK func_00D14F60(M2C_UNK);                     /* extern */
M2C_UNK func_00D15060(M2C_UNK);                     /* extern */
M2C_UNK func_00D15350(M2C_UNK);                     /* extern */
M2C_UNK func_00D15360(M2C_UNK);                     /* extern */
M2C_UNK func_00D15450();                            /* extern */
M2C_UNK func_00D15D80(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_00D16930();                            /* extern */
extern s32 D_003EAF74;
extern char D_00CB5E90[];
extern char D_00CB5FC0[];
extern char D_00CB60F0[];
extern M2C_UNK func_00BAA9B0;

void func_00BAA890(void *arg0) {
    func_001B79C0();
    func_00D15450();
    if (func_00363C30() == 0) {
        D_003EAF74 = 0;
    } else {
        func_00363BD0();
        D_003EAF74 = 1;
    }
    func_00362BB0();
    func_00363330(0);
    func_00D14D50(M2C_FIELD(arg0, s32 *, 0x14) + 0x22);
    func_00D16930();
    func_00D14F60(1);
    if (M2C_FIELD(arg0, s32 *, 0xCC) >= 0) {
        func_00D15060(0);
        func_00D15D80(0, ((void *)D_00CB5E90));
        func_00D14C10(&func_00BAA9B0);
        func_00D141E0(1, 0, 0, 0x2D, 0xF, 0, 0);
        return;
    }
    func_00D15360(-2);
    func_00D15350(1);
    func_00D15D80(0, ((void *)D_00CB5FC0));
    func_00D15D80(0, ((void *)D_00CB60F0));
    func_00D141E0(0, 0, 0, 0x2D, 0xF, 0, 0);
}
