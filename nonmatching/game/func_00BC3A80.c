/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern u16 func_009B4420(void);
s32 func_009B30B0(u16, s32);                        /* extern */
s32 func_009B3440(u16 *, f32, f32);                 /* extern */
s32 func_009E1C90(M2C_UNK, s32);                    /* extern */
s32 func_00AFBAB0(u8);                              /* extern */
s32 func_00B29640(u8, s32);                         /* extern */
M2C_UNK func_00B63090(u8);                          /* extern */
s32 func_00BC3D00(void *);                          /* extern */
s32 func_00BDB8B0(void *);                          /* extern */
extern u16 *Pes6Ball_Current;
extern char Pes6MatchPlayers[];
extern char D_00591C09[];
extern char D_00591E19[];
extern char D_005926FD[];
extern char D_005926FF[];
extern char D_00CBCDE8[];
extern char D_00CBD260[];
extern char D_00CBD264[];
extern char D_00CBD268[];
extern char D_00CBD26A[];
extern char D_00CBD2A0[];
extern char D_00CBD2A2[];

void func_00BC3A80(void *arg0) {
    f32 temp_f2;
    s16 var_a0;
    s32 var_a1;
    s32 var_a1_2;
    s32 var_s0;
    s32 var_s1;
    s32 var_v1;
    u8 temp_a0;
    void *var_s2;

    var_s0 = 0;
    if ((s32) (*(u16 *)D_00CBD2A0) <= 0) {
        (*(u16 *)D_00CBD2A0) = 0;
        (*(u16 *)D_00CBD260) = 0;
        var_a1 = 0;
        if ((*(u8 *)D_00591C09) == 5) {
            var_a1 = func_00B29640((*(u8 *)D_00591C09), 0) == 0;
        }
        if (var_a1 == 0) {
            if ((*(u8 *)D_005926FD) != 0) {
                if (((func_009E1C90(1, var_a1) & 0xFF) != 0xE) || ((*(u8 *)D_005926FF) != 4)) {

                } else {
                    goto block_6;
                }
            } else {
block_6:
                if ((s32) (*(u16 *)D_00CBCDE8) <= 0) {
                    temp_a0 = M2C_FIELD(arg0, u8 *, 0);
                    if (temp_a0 == (*(u8 *)D_00591E19)) {
                        if ((func_00AFBAB0(temp_a0) & 0xFF) == 0xFF) {
                            var_a1_2 = 1;
                        } else {
                            var_a1_2 = (s32) (func_00AFBAB0(M2C_FIELD(arg0, u8 *, 0)) & 0xFF) % 23;
                        }
                        var_s1 = 0;
                        var_s2 = ((void *)Pes6MatchPlayers) + (var_a1_2 * 0x240);
                        do {
                            var_v1 = M2C_FIELD(var_s2, u8 *, 0) != M2C_FIELD(arg0, u8 *, 0);
                            if (var_v1 != 0) {
                                var_v1 = func_00BDB8B0(var_s2) != 0;
                            }
                            if (var_v1 != 0) {
                                temp_f2 = (f32) M2C_FIELD(arg0, s16 *, 0x14);
                                if (!((temp_f2 * M2C_FIELD(var_s2, f32 *, 0xE0)) <= (temp_f2 * M2C_FIELD(arg0, f32 *, 0xE0))) && (func_00BC3D00(var_s2) != 0)) {
                                    (*(s32 *)D_00CBD264) = 0;
                                    (*(u8 *)D_00CBD26A) = M2C_FIELD(arg0, u8 *, 0);
                                    (*(u8 *)D_00CBD268) = M2C_FIELD(arg0, u8 *, 0x13);
                                    (*(u16 *)D_00CBD260) |= (1 << var_s1) & 0xFFFF;
                                    if (!(func_009B4420() & 0xFFFF)) {
                                        var_a0 = 0x12B;
                                    } else {
                                        var_a0 = (func_009B4420() & 0xFFFF) - 1;
                                    }
                                    (*(s16 *)D_00CBD2A2) = var_a0;
                                    if ((var_s0 == 0) && ((func_009B30B0(*Pes6Ball_Current, func_009B3440(Pes6Ball_Current, M2C_FIELD(var_s2, f32 *, 0xE0), M2C_FIELD(var_s2, f32 *, 0xE8))) & 0xFFFF) < 0x11)) {
                                        func_00B63090(M2C_FIELD(var_s2, u8 *, 0));
                                        var_s0 = 1;
                                    }
                                }
                            }
                            var_s1 += 1;
                            var_s2 += 0x240;
                        } while (var_s1 < 0xB);
                    }
                }
            }
        }
    }
}
