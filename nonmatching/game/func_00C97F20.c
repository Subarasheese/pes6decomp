/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AAF40(void *, signed char);
extern s32 func_00208210(s32);
extern void func_002A9470(u8);
extern s32 func_001A5F20(s32);
extern void func_002A96D0(void);
extern void func_002A8830(s32);
extern s32 func_002A6B20(void);
extern void func_002A9570(int);
M2C_UNK func_002A7D00(M2C_UNK, s32);                /* extern */
s32 func_00BBB8C0(M2C_UNK);                         /* extern */
extern char Pes6MatchPlayers[];
extern char D_0058E7F0[];
extern char D_00592740[];
extern char D_00CBBE09[];

void func_00C97F20(void) {
    s32 var_a0;
    s32 var_s1;

    func_002A96D0();
    func_002A9470((*(u8 *)D_00CBBE09));
    var_s1 = 0;
    do {
        func_001AAF40(*M2C_FIELD(((void *)D_0058E7F0), void ***, 4), 0);
        var_s1 += 1;
    } while (var_s1 < 0x16);
    if (func_00208210(func_001A5F20(5)) != 0xB0) {
        if (func_00208210(func_001A5F20(5)) != 0xB1) {
            func_002A7D00(0xA, (func_00BBB8C0(3) + 7) & 0xFF);
        } else {
            func_002A7D00(0xA, (func_00BBB8C0(3) + 4) & 0xFF);
        }
    } else {
        func_002A7D00(0xA, (func_00BBB8C0(3) + 1) & 0xFF);
    }
    if ((*(u8 *)D_00CBBE09) == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = (s32) (*(u8 *)D_00CBBE09) % 23;
    }
    if (M2C_FIELD(M2C_FIELD((((void *)Pes6MatchPlayers) + (var_a0 * 0x240)), void **, 4), u8 *, 0x2D) != 0) {
        func_002A9570(2);
    } else {
        func_002A9570(0);
    }
    func_002A8830(0);
    func_002A6B20();
    (*(s8 *)D_00592740) = 3;
}
