/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001AFBF0(s32, s32);
extern void func_0027AA00(int);
M2C_UNK func_001B43B0(s32, s32);                    /* extern */
s32 func_00B29CB0(u8, s32, M2C_UNK *);              /* extern */
M2C_UNK func_00BF4000(M2C_UNK);                     /* extern */
s32 func_00C5A620(u8);                              /* extern */
s32 func_00C5A6D0(u8);                              /* extern */
extern char Pes6MatchPlayers[];
extern char D_0058E7F0[];
extern char D_00591C09[];
extern char D_00CBBE39[];
extern char D_00CBCC60[];
extern char D_00CBCC61[];
extern char D_00CBCC62[];
extern char D_00CBCC64[];
extern char D_00CBCC68[];
extern char D_00CBCC6C[];

void func_00B7B6C0(void) {
    M2C_UNK *var_a0;
    M2C_UNK *var_a2;
    M2C_UNK *var_s1;
    s32 temp_s2;
    s32 temp_s3;
    s32 var_a1;
    s32 var_s0;
    s32 var_v1;

    func_0027AA00(0);
    var_v1 = 0;
    var_a0 = ((void *)D_0058E7F0);
    do {
        M2C_FIELD(var_a0, s8 *, 0x103) = 0;
        var_v1 += 7;
        M2C_FIELD(var_a0, s8 *, 0x343) = 0;
        M2C_FIELD(var_a0, s8 *, 0x583) = 0;
        M2C_FIELD(var_a0, s8 *, 0x7C3) = 0;
        M2C_FIELD(var_a0, s8 *, 0xA03) = 0;
        M2C_FIELD(var_a0, s8 *, 0xC43) = 0;
        M2C_FIELD(var_a0, s8 *, 0xE83) = 0;
        var_a0 += 0xFC0;
    } while (var_v1 < 0xF);
    M2C_FIELD(var_a0, s8 *, 0x103) = 0;
    (*(u8 *)D_00CBCC68) = 0x80;
    var_a2 = ((void *)Pes6MatchPlayers);
    var_a1 = 0;
    (*(u8 *)D_00CBCC60) = (*(u8 *)D_00CBCC68);
    (*(s8 *)D_00CBCC62) = 0;
    (*(s8 *)D_00CBCC61) = 0;
    (*(s32 *)D_00CBCC64) = 0;
    do {
        M2C_FIELD(var_a2, s8 *, 0x104) = 0;
        var_a1 += 7;
        M2C_FIELD(var_a2, s8 *, 0x344) = 0;
        M2C_FIELD(var_a2, s8 *, 0x584) = 0;
        M2C_FIELD(var_a2, s8 *, 0x7C4) = 0;
        M2C_FIELD(var_a2, s8 *, 0xA04) = 0;
        M2C_FIELD(var_a2, s8 *, 0xC44) = 0;
        M2C_FIELD(var_a2, s8 *, 0xE84) = 0;
        var_a2 += 0xFC0;
    } while (var_a1 < 0x10);
    (*(s32 *)D_00CBCC6C) = 0;
    M2C_FIELD(var_a2, s8 *, 0x104) = 0;
    M2C_FIELD(var_a2, s8 *, 0x344) = 0;
    if ((*(u8 *)D_00591C09) != 5) {
        goto block_5;
    }
    if (func_00B29CB0((*(u8 *)D_00CBCC68), var_a1, var_a2) == 0) {
block_5:
        var_s0 = 0;
        var_s1 = ((void *)D_0058E7F0);
        do {
            temp_s3 = func_00C5A620(M2C_FIELD(var_s1, u8 *, 0));
            temp_s2 = func_00C5A6D0(M2C_FIELD(var_s1, u8 *, 0));
            func_001AFBF0(*M2C_FIELD(var_s1, s32 **, 4), temp_s3);
            func_001B43B0(*M2C_FIELD(var_s1, s32 **, 4), temp_s2);
            var_s0 += 1;
            var_s1 += 0x240;
        } while (var_s0 < 0x16);
    }
    func_00BF4000(0);
    (*(s8 *)D_00CBBE39) = 0;
}
