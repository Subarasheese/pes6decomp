/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_00153FA0(void *);
extern void func_0017F9A0(s32, void *, void *, s32, s32);
extern s32 D_003E98EC;
extern char D_00522270[];
extern void func_001B2890(void);
extern void func_001B2970(void);
extern void func_001B29C0(void);
extern void func_001B2A50(void);
extern void func_001B2AD0(void);
extern void func_001B2B00(void);
extern void func_001B2BE0(void);
extern void func_001B2C50(void);
extern void func_001B3090(void);
extern void func_001B30C0(void);

void func_001B2760(void *arg0) {
    void (*var_a1)(void);
    char *var_s0;
    s32 temp_a0;
    s32 var_s1;

    if (D_003E98EC == 0) {
        M2C_FIELD(arg0, s8 *, 0x64) = 2;
    }
    temp_a0 = D_003E98EC;
    var_s1 = 0;
    if (temp_a0 > 0) {
        var_s0 = D_00522270;
        do {
            var_a1 = M2C_FIELD(var_s0, void (**)(void), 4);
            if (var_s1 == (temp_a0 - 1)) {
                if (var_a1 == &func_001B30C0) {
                    var_a1 = &func_001B3090;
                }
                if (var_a1 == &func_001B2970) {
                    var_a1 = &func_001B2890;
                }
                if (var_a1 == &func_001B2C50) {
                    var_a1 = &func_001B2BE0;
                }
                if (var_a1 == &func_001B2A50) {
                    var_a1 = &func_001B29C0;
                }
                if (var_a1 == &func_001B2B00) {
                    var_a1 = &func_001B2AD0;
                }
            }
            func_0017F9A0(M2C_FIELD(var_s0, s32 *, 0), var_a1, M2C_FIELD(var_s0, void **, 8), M2C_FIELD(var_s0, s32 *, 0xC), M2C_FIELD(var_s0, s32 *, 0x10));
            func_00153FA0(M2C_FIELD(var_s0, void **, 8));
            var_s1 += 1;
            var_s0 += 0x14;
        } while (var_s1 < D_003E98EC);
    }
    D_003E98EC = 0;
}
