/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern int func_0023A380(void);
extern int func_0013E290(void);
extern void func_0013E2A0(int);
extern int func_001CDB50(void);
extern int func_0013E2C0(void);
extern u32 func_0017A670(s32);
extern void func_00120CF0(void);
extern char D_003FAE60[];
extern char D_003FAE64[];
extern char D_003FAE65[];
extern char D_00591BCE[];
extern char D_00591DB5[];

void func_00121180(void) {
    s32 temp_s1;
    s32 temp_s2;
    u32 temp_v0;
    u8 temp_s0;
    u8 var_a0;

    if (((*(u8 *)D_003FAE65) == 0) && (((temp_s2 = func_0013E290(), temp_s1 = func_0013E2C0(), temp_v0 = func_0017A670(0), temp_s0 = (*(u8 *)D_00591DB5), (temp_v0 != 9)) && (temp_v0 != 0xC) && (temp_v0 != 0xD)) || (func_0023A380() != 0) || ((*(u8 *)D_00591BCE) == 1) || (temp_s2 != 1) || (temp_s0 != 0) || (temp_s1 >= 2))) {
        (*(u8 *)D_003FAE65) = 0;
        if ((*(u8 *)D_003FAE64) != 0) {
            (*(u8 *)D_003FAE64) = 0;
            (*(u8 *)D_003FAE65) = 0;
        }
    } else {
        if (func_001CDB50() >= 2) {
            if ((*(u8 *)D_003FAE65) != 0) {
                var_a0 = (*(u8 *)D_003FAE65) + 2;
            } else {
                var_a0 = 8;
            }
            (*(u8 *)D_003FAE65) = var_a0;
        }
        if ((*(u8 *)D_003FAE65) != 0) {
            if ((*(u8 *)D_003FAE65) & 0xFF & 1) {
                (*(s32 *)D_003FAE60) = 1;
                func_0013E2A0(1);
            } else {
                (*(s32 *)D_003FAE60) = 2;
                func_0013E2A0(2);
                func_00120CF0();
            }
            (*(u8 *)D_003FAE65) -= 1;
        }
    }
}
