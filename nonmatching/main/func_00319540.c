/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern int func_003387D0(void *, void (*)(void), void *);
extern int func_0030DA60(void);
extern u32 func_00333620(s32, u8);
extern void func_00338930(void *);
extern int func_00310930(void);
extern int func_0030E6C0(int);
extern void func_00333320(s32);
extern s32 func_00338A60(void *, void *);
extern s32 func_003389F0(void *, s32, s32);
extern void func_00314920(void *, s32);
extern s32 func_00333190(s32);
extern void func_003338C0(s32, u8, s32, s32);
extern void func_003387E0(s32);
extern void *func_00338AD0(s32, void (*)(void), s32, void *);
extern s32 func_009E1C90(s32);
extern s32 func_00BF6280(void);
extern char D_003E1508[];
extern u8 D_003E9F0C;
extern void func_003152B0(void);
extern void func_00315340(void);
extern void func_00315390(void);
extern void func_003191F0(void);
extern void func_003193D0(void);

s32 func_00319540(void *arg0) {
    s32 var_v0;
    s32 temp_s0;
    s32 temp_s0_2;
    s32 r;
    s32 var_a0;
    u8 var_v0_3;
    u8 *temp_s1;
    void *temp_a1;
    void *temp_v0_2;

    if ((func_009E1C90(1) & 0xFF) != 0xC) {
        var_v0 = 0;
    } else {
        r = func_00BF6280();
        if (r == 1) var_v0 = 1;
        else if (r == 0) var_v0 = 1;
        else var_v0 = 0;
    }
    if (var_v0 != 0) {
        temp_s1 = M2C_FIELD(arg0, u8 **, 0x3C);
        func_00333620(9, 1);
        if (temp_s1[8] != 0) {
            r = func_0030E6C0(func_00310930()) & 0xFF;
        } else {
            r = func_0030DA60();
        }
        temp_s0 = r & 0xFF;
        func_00314920(arg0, temp_s0);
        var_v0_3 = temp_s1[6] != 0;
        if (var_v0_3 != 0) {
            var_v0_3 = temp_s1[7] != 0;
        }
        D_003E9F0C = var_v0_3;
        var_a0 = func_00333190(0x5DC0) != 0;
        if (var_a0 != 0) {
            var_a0 = (D_003E9F0C != 0) ^ 1;
        }
        func_00333320(var_a0);
        if (temp_s1[6] == 0) {
            if (temp_s1[8] == 0) {
                func_00338A60(func_00338AD0(0x8000002D, func_003191F0, M2C_FIELD(arg0, s32 *, 8), D_003E1508), arg0);
                func_003387D0(arg0, func_003193D0, D_003E1508);
            } else {
                temp_v0_2 = func_00338AD0(0x2E, func_00315340, M2C_FIELD(arg0, s32 *, 8), D_003E1508);
                func_00338A60(temp_v0_2, arg0);
                temp_s0_2 = temp_s0 & 0xFF;
                func_003389F0(temp_v0_2, 0, temp_s0_2);
                func_003389F0(arg0, 0, temp_s0_2);
                func_003387D0(arg0, func_003152B0, D_003E1508);
            }
        } else if (D_003E9F0C != 0) {
            u8 *a1 = M2C_FIELD(arg0, u8 **, 0x3C);
            a1[0xB] = 1;
            func_003338C0(M2C_FIELD(arg0, s32 *, 0x40), a1[5], *M2C_FIELD(arg0, s32 **, 0x44), 3);
            func_00338930(arg0);
        } else {
            func_00338A60(func_00338AD0(0x80000023, func_00315390, M2C_FIELD(arg0, s32 *, 8), D_003E1508), arg0);
            func_003387D0(arg0, func_003193D0, D_003E1508);
        }
        func_003387E0(4);
    }
    return 1;
}
