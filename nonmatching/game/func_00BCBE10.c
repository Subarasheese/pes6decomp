/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00182B30(int);
extern void func_001AAF40(void *, signed char);
extern void func_0027A4B0(s8);
extern void func_00270580(int);
extern u8 func_00C00630(void);
extern void func_00182B20(int);
extern void func_002727C0(s32);
extern void func_0027A7B0(s32);
extern void func_0017E120(int);
extern s32 func_00152130(s32, s8);
extern void func_001A58E0(void *, signed char);
extern void func_009B4450(u32);
M2C_UNK func_00209A00(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_00996060();                            /* extern */
M2C_UNK func_009A7540();                            /* extern */
M2C_UNK func_00B26020();                            /* extern */
M2C_UNK func_00BA1660();                            /* extern */
M2C_UNK func_00BA17E0();                            /* extern */
M2C_UNK func_00C04780();                            /* extern */
M2C_UNK func_00C23C70();                            /* extern */
extern void *Pes6Ball_Current;
extern s32 D_003EA780;
extern s32 D_003EA784;
extern s32 D_003EA794;
extern s32 D_003EA79C;
extern char Pes6MatchPlayers[];
extern char D_00591DB4[];
extern char D_00CBD311[];
extern char D_00CBD390[];

void func_00BCBE10(void) {
    M2C_UNK *var_s0;
    s32 var_s1;
    s32 var_v1;
    u8 temp_v0;
    void *temp_v0_2;

    D_003EA784 = 1;
    (*(s8 *)D_00591DB4) = 0;
    if (func_00152130(1, 0x10) != 0) {
        if ((*(s32 *)D_00CBD390) != 0) {
            temp_v0 = func_00C00630();
            if ((temp_v0 != 0x28) && (temp_v0 != 0x26) && (temp_v0 != 0x24)) {
                var_s1 = 0;
                var_s0 = ((void *)Pes6MatchPlayers);
                M2C_FIELD(Pes6Ball_Current, s8 *, 0xC) = 0;
                do {
                    func_00209A00(M2C_FIELD(var_s0, void **, 4), 0, 0);
                    func_001AAF40(M2C_FIELD(M2C_FIELD(var_s0, void **, 4), void **, 0), 0);
                    M2C_FIELD(M2C_FIELD(var_s0, void **, 4), u8 *, 0x2C) = 0U;
                    temp_v0_2 = M2C_FIELD(var_s0, void **, 4);
                    func_001A58E0(M2C_FIELD(temp_v0_2, void **, 0), (s8) M2C_FIELD(temp_v0_2, u8 *, 0x2C));
                    var_s1 = (var_s1 + 1) & 0xFF;
                    var_s0 += 0x240;
                } while (var_s1 < 0x17);
                func_0017E120(0);
                func_00182B30(0);
                func_00182B20(0);
                func_00996060();
                func_00C04780();
                func_00C23C70();
                (*(s8 *)D_00CBD311) = 0;
                func_00270580(1);
                func_009A7540();
                func_009B4450(0U);
                func_0027A7B0(1);
                func_0027A4B0(0);
                D_003EA79C = 0;
                func_002727C0(0x1E);
                func_00BA1660();
                func_00BA17E0();
                func_00B26020();
                var_v1 = 2;
                D_003EA794 = 0;
            } else {
                var_v1 = 0xC;
            }
        } else {
            var_v1 = 0xC;
        }
        D_003EA780 = var_v1;
    }
}
