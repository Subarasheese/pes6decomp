/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001C48E8(void *, s32, s32);
extern char D_0050AE30[];
extern char D_0050AE38[];
extern char D_0050AE3C[];
extern char D_0050AE58[];
extern char D_0050D180[];
extern char D_0050D184[];
extern char D_0050D188[];
extern char D_0050D18C[];

void func_0014A5A0(void) {
    char *var_a2;
    s32 var_a3;
    s32 var_a4;
    u8 var_s0;

    var_s0 = *(u8 *)D_0050D18C;
    func_001C48E8(D_0050AE30, 0, 0x2360);
    if (var_s0 == 0) {
        var_s0 = 0xE1;
    }
    *(u8 *)D_0050D18C = var_s0;
    var_a4 = 1;
    if ((s32) *(u8 *)D_0050D18C >= 2) {
        var_a3 = 0x28;
        var_a2 = D_0050AE58;
        do {
            var_a3 += 0x28;
            var_a4 += 1;
            *(char **)(var_a2 + 4) = D_0050AE30 + var_a3;
            var_a2 += 0x28;
        } while (var_a4 < (s32) *(u8 *)D_0050D18C);
    }
    *(char **)D_0050AE3C = D_0050AE30;
    *(s16 *)(D_0050AE58 + 0x14) = 0x100;
    *(char **)D_0050AE38 = D_0050AE30;
    *(s32 *)(D_0050AE58 + 0) = 0;
    *(s32 *)(D_0050AE58 + 0x10) = 0;
    *(s16 *)(D_0050AE58 + 0x16) = (s16) *(u8 *)D_0050D18C;
    *(char **)D_0050D180 = D_0050AE58;
    *(char **)D_0050D184 = D_0050AE58;
    *(char **)D_0050D188 = *(char **)(D_0050AE58 + 4);
    *(s32 *)(D_0050AE58 + 4) = 0;
}
