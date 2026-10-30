/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"
typedef int s128 __attribute__((mode(TI)));
typedef unsigned int u128 __attribute__((mode(TI)));
typedef char Check128Width[sizeof(s128)==16?1:-1];

extern u8 func_00229870(void);
extern u32 func_00B59340(void);
M2C_UNK func_001B9D90(s128 *);                      /* extern */
s32 func_0094C730();                                /* extern */
M2C_UNK func_0095EF70(f32 *, M2C_UNK);              /* extern */
s32 func_0099B570(M2C_UNK);                         /* extern */
s32 func_00B56890();                                /* extern */
extern char D_00B85970[];
extern char D_00B85980[];
extern char D_00B85984[];
extern char D_00B85988[];
extern char D_00B8598C[];

s32 func_00B59940(void) {
    f32 sp30;
    f32 sp34;
    f32 sp38;
    f32 sp3C;
    s128 sp40;
    s32 temp_s1;
    u32 temp_v0;

    sp30 = (*(f32 *)D_00B85980);
    sp34 = (*(f32 *)D_00B85984);
    sp38 = (*(f32 *)D_00B85988);
    sp3C = (*(f32 *)D_00B8598C);
    sp40 = (*(s128 *)D_00B85970);
    if ((func_0094C730() & 0xFF) != 0x19) {
        if ((func_0094C730() & 0xFF) == 0x1A) {
            return 0;
        }
        temp_v0 = func_00B59340();
        if (temp_v0 == 0) {

        } else if (((func_00B56890() & 0xFF) != 1) && ((func_00B56890() & 0xFF) != 2) && (func_00B56890() & 0xFF)) {

        } else if (!(func_00B56890() & 0xFF) && (M2C_FIELD(temp_v0, s32 *, 0x6C) == 1) && (temp_s1 = func_0099B570(0) & 0xFF, (temp_s1 == func_00229870()))) {

        } else if (M2C_FIELD(temp_v0, s32 *, 0x6C) != 1) {
            func_001B9D90(&sp40);
            func_0095EF70(&sp30, 4);
        }
        goto block_18;
    }
block_18:
    return 0;
}
