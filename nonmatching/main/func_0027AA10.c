/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_00270570(void);
extern int func_0017E140(void);
extern void func_0027CF50(void);
extern void func_001A6B00(int);
M2C_UNK func_0027AB50();                            /* extern */
extern char D_00397C28[];
extern char D_00397C2C[];
extern char D_00397C30[];
extern s32 *Pes6Ball_Current;

void func_0027AA10(void) {
    s32 var_v1;

    if (func_0017E140() != 0) {
        func_0027CF50();
        func_0027AB50();
        if (func_00270570() == 0) {
            (*(s32 *)D_00397C28) = 0x3FCCCCCD;
            (*(s32 *)D_00397C2C) = 0x4019999A;
            var_v1 = 0x40800000;
        } else {
            (*(s32 *)D_00397C28) = 0x40000000;
            var_v1 = 0x41200000;
            (*(s32 *)D_00397C2C) = 0x40400000;
        }
        (*(s32 *)D_00397C30) = var_v1;
        func_001A6B00(*Pes6Ball_Current);
    }
}
