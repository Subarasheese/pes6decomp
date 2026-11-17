/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

M2C_UNK func_002744C0(char *, char *, s32 *);       /* extern */
s32 func_0098F0C0(char *, u8);                      /* extern */
M2C_UNK func_00B98610(char *, char *, s32, s32, s32, s32); /* extern */
M2C_UNK func_00B9A770(s32 *, char *, char *, s32, u8); /* extern */
s32 func_00BBB8C0(u32);                             /* extern */
extern char *Pes6Ball_Current;
extern char D_00591BE4[];
extern char Pes6MatchClock_Remaining[];
extern char D_005926FD[];
extern char D_00CBCDE5[];
extern char D_00CBCDE6[];
extern char D_00CBCDE8[];
extern char D_00CBCDF4[];
extern char D_00CBD2A0[];

void func_00B9CC30(char *arg0, char *arg1) {
    s32 v50[3];
    s32 v5c[9];
    s32 var_a4;
    s32 a, c, h;
    s32 var_v0;
    s32 var_v1;
    u8 temp_s0;

    temp_s0 = M2C_FIELD(M2C_FIELD(M2C_FIELD(arg1, char **, 4), char **, 4), u8 *, 0xC);
    (*(s8 *)D_00CBCDF4) = 1;
    func_00B9A770(v50, arg0, arg1, 0, temp_s0);
    if ((*(u8 *)D_005926FD) == 0 && (*(u16 *)D_00CBCDE8) == 0 && (*(u16 *)D_00CBD2A0) == 0 && (*(s32 *)Pes6MatchClock_Remaining) != 0) {
        func_002744C0(arg0, arg1, v5c);
    }
    h = (u16)v50[1];
    if (h > 0) {
        (*(u8 *)D_00CBCDE6) = temp_s0;
        (*(s8 *)D_00CBCDE5) = 0;
    }
    a = v50[0];
    c = v50[2];
    var_v0 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x10);
    if (var_v0 <= 0) {
        var_v0 = -var_v0;
    }
    if ((f32) var_v0 > 9241.0f) {
        var_v1 = (s32) M2C_FIELD(Pes6Ball_Current, f32 *, 0x18);
        if (var_v1 <= 0) {
            var_v1 = -var_v1;
        }
        if ((f32) var_v1 < 5160.0f) {
            if (func_0098F0C0(arg0, M2C_FIELD(arg0, u8 *, 0x13)) != 0) {
                var_a4 = 1;
            } else {
                var_a4 = func_00BBB8C0((*(u8 *)D_00591BE4) / 6) + (*(u8 *)D_00591BE4) / 10;
            }
            goto done;
        }
    }
    var_a4 = func_00BBB8C0((u32) (*(u8 *)D_00591BE4) >> 2) + ((u32) (*(u8 *)D_00591BE4) >> 1);
done:
    func_00B98610(arg0, arg1, a, (s16) h, var_a4, c);
}
