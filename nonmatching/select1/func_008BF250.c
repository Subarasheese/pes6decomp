/* compiler: mwcc-3.0.1b210 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00227220(s32);
extern void func_002278F0(s32);
extern void func_00228030(s32);
extern void func_00227D10(s32);
extern int func_002211C0(int, int, int, int);
extern void func_002279F0(s32);
extern void func_00227110(s32);
extern void func_00227750(s32);
extern void func_00227540(s32);
extern void func_00228120(u8);
extern char D_0053C309[];
extern char D_008D8C00[];
extern char D_008E49B0[];
extern char D_008E4B64[];
extern char D_008E4D0C[];
extern char D_008E4EB4[];
extern char D_008E505C[];
extern char D_008E5204[];
extern char D_008E53AC[];
extern char D_008E5554[];
extern char D_008E56FC[];
extern char D_008E58A4[];

s32 func_008BF250(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a3;
    M2C_UNK *var_a4;
    s32 temp_s0;
    s32 var_a1;
    s32 var_a2;

    temp_s0 = func_002211C0(arg0, arg1, arg2, arg3);
    if ((*(s8 *)D_0053C309) == 2) {
        var_a1 = 0;
        var_a0 = ((void *)D_008E49B0);
        do {
            var_a1 += 5;
            M2C_FIELD(var_a0, s16 *, 0xC) = (s16) M2C_FIELD(var_a0, s16 *, 0xE);
            M2C_FIELD(var_a0, s16 *, 0x14) = (s16) M2C_FIELD(var_a0, s16 *, 0x16);
            M2C_FIELD(var_a0, s16 *, 0x10) = (s16) M2C_FIELD(var_a0, s16 *, 0x12);
            M2C_FIELD(var_a0, s16 *, 0x1B4) = (s16) M2C_FIELD(var_a0, s16 *, 0x1B6);
            M2C_FIELD(var_a0, s16 *, 0x1BC) = (s16) M2C_FIELD(var_a0, s16 *, 0x1BE);
            M2C_FIELD(var_a0, s16 *, 0x1B8) = (s16) M2C_FIELD(var_a0, s16 *, 0x1BA);
            M2C_FIELD(var_a0, s16 *, 0x35C) = (s16) M2C_FIELD(var_a0, s16 *, 0x35E);
            M2C_FIELD(var_a0, s16 *, 0x364) = (s16) M2C_FIELD(var_a0, s16 *, 0x366);
            M2C_FIELD(var_a0, s16 *, 0x360) = (s16) M2C_FIELD(var_a0, s16 *, 0x362);
            M2C_FIELD(var_a0, s16 *, 0x504) = (s16) M2C_FIELD(var_a0, s16 *, 0x506);
            M2C_FIELD(var_a0, s16 *, 0x50C) = (s16) M2C_FIELD(var_a0, s16 *, 0x50E);
            M2C_FIELD(var_a0, s16 *, 0x508) = (s16) M2C_FIELD(var_a0, s16 *, 0x50A);
            M2C_FIELD(var_a0, s16 *, 0x6AC) = (s16) M2C_FIELD(var_a0, s16 *, 0x6AE);
            M2C_FIELD(var_a0, s16 *, 0x6B4) = (s16) M2C_FIELD(var_a0, s16 *, 0x6B6);
            M2C_FIELD(var_a0, s16 *, 0x6B0) = (s16) M2C_FIELD(var_a0, s16 *, 0x6B2);
            var_a0 += 0x848;
        } while (var_a1 < 0xA);
    }
    func_00228120((u8) (*(s16 *)D_008E4D0C));
    func_00228030((s32) (*(s16 *)D_008E4EB4));
    func_00227540((s32) (*(s16 *)D_008E505C));
    func_00227D10((s32) (*(s16 *)D_008E5204));
    func_002279F0((s32) (*(s16 *)D_008E53AC));
    func_00227110((s32) (*(s16 *)D_008E5554));
    func_002278F0((s32) (*(s16 *)D_008E56FC));
    func_00227750((s32) (*(s16 *)D_008E58A4));
    M2C_FIELD(temp_s0, s8 *, 2) = (s8) (*(s16 *)D_008E58A4);
    func_00227220((s32) (*(s16 *)D_008E4B64));
    var_a2 = 0;
    var_a4 = ((void *)D_008E49B0);
    var_a3 = ((void *)D_008D8C00);
    do {
        var_a2 += 1;
        M2C_FIELD(var_a3, s16 *, 0) = (s16) M2C_FIELD(var_a4, s16 *, 0xC);
        M2C_FIELD(var_a3, s16 *, 0) = (s16) M2C_FIELD(var_a4, s16 *, 0xE);
        M2C_FIELD(var_a3, s16 *, 4) = (s16) M2C_FIELD(var_a4, s16 *, 0x10);
        M2C_FIELD(var_a3, s16 *, 4) = (s16) M2C_FIELD(var_a4, s16 *, 0x12);
        M2C_FIELD(var_a3, s16 *, 8) = (s16) M2C_FIELD(var_a4, s16 *, 0x14);
        M2C_FIELD(var_a3, s16 *, 8) = (s16) M2C_FIELD(var_a4, s16 *, 0x16);
        M2C_FIELD(var_a3, s32 *, 0xC) = (s32) M2C_FIELD(var_a4, s32 *, 0x18);
        M2C_FIELD(var_a3, s8 *, 0x10) = (s8) M2C_FIELD(var_a4, s8 *, 0x1C);
        M2C_FIELD(var_a3, s8 *, 0x11) = (s8) M2C_FIELD(var_a4, s8 *, 0x1D);
        var_a4 += 0x1A8;
        var_a3 += 0x1A8;
    } while (var_a2 < 0xA);
    return 1;
}
