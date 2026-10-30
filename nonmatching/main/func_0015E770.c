/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00162DD0(void);
extern void func_00176F40(void);
extern void func_0015B418(void);
extern void func_001616C0(void);
extern void func_00159E88(void);
extern void func_00176528(void);
extern void func_00165540(void);
extern int func_00179B30(int, int);
extern void func_00159E58(void);
extern void func_00177B48(void);
extern void func_00159EA0(void);
extern void func_00161328(void);
M2C_UNK func_0015B7C8();                            /* extern */
M2C_UNK func_00172940();                            /* extern */
M2C_UNK func_0017A1C8();                            /* extern */
extern char D_0037AC88[];
extern char D_0037AC90[];
extern char D_0037AC9C[];
extern char D_0038592C[];

void func_0015E770(void) {
    s32 temp_v0;

    temp_v0 = (*(s32 *)D_0037AC88) - 1;
    (*(s32 *)D_0037AC88) = temp_v0;
    if (temp_v0 == 0) {
        (*(s32 *)D_0038592C) = 0;
        func_00165540();
        func_00161328();
        func_0015B7C8();
        func_00162DD0();
        func_00172940();
        func_00159E88();
        func_00179B30(2, 1);
        func_00179B30(4, (*(s32 *)D_0037AC9C));
        func_00179B30(5, (*(s32 *)D_0037AC90));
        func_0017A1C8();
        func_001616C0();
        func_0015B418();
        func_00176528();
        func_00176F40();
        func_00177B48();
        func_00159EA0();
        func_00159E58();
        (*(s32 *)D_0038592C) = 1;
    }
}
