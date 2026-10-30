/* compiler: mwcc-3.0.1b151 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001A58F0(void *, int);
M2C_UNK func_001A5A20(s32);                         /* extern */
extern char Pes6MatchPlayers[];
extern void **D_0058E5B4;
extern void **D_0058E7F4;
extern char D_0058EA30[];
extern void **D_005900B4;
extern char D_005902F0[];

void func_002873F0(void) {
    M2C_UNK *var_s0;
    M2C_UNK *var_s1_2;
    s32 var_s0_2;
    s32 var_s1;
    void **temp_s1_2;
    void **temp_s1_3;
    void **temp_s2;
    void *temp_s0;
    void *temp_s0_2;
    void *temp_s1;
    void *temp_s2_2;
    void *temp_s2_3;
    void *temp_s3;
    void *temp_s3_2;

    temp_s2 = D_0058E5B4;
    temp_s1 = M2C_FIELD(temp_s2, void **, 0);
    func_001A58F0(temp_s1, 2);
    if ((M2C_FIELD(temp_s2, u8 *, 0x2C) != 0) && (M2C_FIELD(temp_s1, u8 *, 1) == 0)) {
        M2C_FIELD(temp_s1, u8 *, 1) = 1U;
    }
    func_001A5A20(*M2C_FIELD(((void *)Pes6MatchPlayers), s32 **, 4));
    temp_s1_2 = D_0058E7F4;
    temp_s0 = M2C_FIELD(temp_s1_2, void **, 0);
    func_001A58F0(temp_s0, 0);
    if ((M2C_FIELD(temp_s1_2, u8 *, 0x2C) != 0) && (M2C_FIELD(temp_s0, u8 *, 1) == 0)) {
        M2C_FIELD(temp_s0, u8 *, 1) = 1U;
    }
    temp_s1_3 = D_005900B4;
    temp_s0_2 = M2C_FIELD(temp_s1_3, void **, 0);
    func_001A58F0(temp_s0_2, 0);
    if ((M2C_FIELD(temp_s1_3, u8 *, 0x2C) != 0) && (M2C_FIELD(temp_s0_2, u8 *, 1) == 0)) {
        M2C_FIELD(temp_s0_2, u8 *, 1) = 1U;
    }
    var_s1 = 2;
    var_s0 = ((void *)D_0058EA30);
    do {
        temp_s3 = M2C_FIELD(var_s0, void **, 4);
        temp_s2_2 = M2C_FIELD(temp_s3, void **, 0);
        func_001A58F0(temp_s2_2, 1);
        if ((M2C_FIELD(temp_s3, u8 *, 0x2C) != 0) && (M2C_FIELD(temp_s2_2, u8 *, 1) == 0)) {
            M2C_FIELD(temp_s2_2, u8 *, 1) = 1U;
        }
        var_s1 += 1;
        var_s0 += 0x240;
    } while (var_s1 < 0xC);
    var_s0_2 = 0xD;
    var_s1_2 = ((void *)D_005902F0);
    do {
        temp_s3_2 = M2C_FIELD(var_s1_2, void **, 4);
        temp_s2_3 = M2C_FIELD(temp_s3_2, void **, 0);
        func_001A58F0(temp_s2_3, 1);
        if ((M2C_FIELD(temp_s3_2, u8 *, 0x2C) != 0) && (M2C_FIELD(temp_s2_3, u8 *, 1) == 0)) {
            M2C_FIELD(temp_s2_3, u8 *, 1) = 1U;
        }
        var_s0_2 += 1;
        var_s1_2 += 0x240;
    } while (var_s0_2 < 0x17);
}
