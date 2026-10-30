/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void Pes6Ball_Update(void);
extern int func_002DCA30(void);
extern void func_00BBB960(u32);
extern u8 func_00BF6270(void);
M2C_UNK func_00209A00(s32, M2C_UNK, M2C_UNK);       /* extern */
s16 func_009B3480(M2C_UNK *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_009E1CB0(M2C_UNK);                     /* extern */
M2C_UNK func_009E1D30(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_00AD0A20();                            /* extern */
M2C_UNK func_00AFBFD0();                            /* extern */
M2C_UNK func_00B4A160();                            /* extern */
M2C_UNK func_00B52D70();                            /* extern */
M2C_UNK func_00B5BC40();                            /* extern */
M2C_UNK func_00B5DBD0();                            /* extern */
M2C_UNK func_00C1AD80();                            /* extern */
extern char Pes6MatchPlayers[];
extern char D_0059237C[];
extern char D_008B1180[];
extern char D_008B145C[];
extern char D_00CBCB34[];
extern char D_00CBCB36[];
extern char D_00CBCB37[];
extern char D_00CBCB3D[];
extern char D_00CBCDE1[];

void func_00B5D280(void) {
    M2C_UNK *var_s1;
    M2C_UNK *var_s3;
    s32 temp_f0;
    s32 temp_f1;
    s32 var_a0;
    s32 var_s0;
    s32 var_s2;
    void *temp_s0;

    if (func_00BF6270() == 0xFF) {
        var_a0 = 1;
    } else {
        var_a0 = func_00BF6270() % 23;
    }
    temp_s0 = ((void *)Pes6MatchPlayers) + (var_a0 * 0x240);
    if (func_002DCA30() != 0) {
        var_s1 = ((void *)D_008B1180);
        func_00BBB960((*(u32 *)D_008B145C));
        var_s2 = 0;
        var_s3 = ((void *)Pes6MatchPlayers);
        do {
            M2C_FIELD(var_s3, f32 *, 0xE0) = (f32) ((256.0f * (f32) M2C_FIELD(var_s1, s16 *, 0)) / 100.0f);
            M2C_FIELD(var_s3, f32 *, 0xE8) = (f32) ((256.0f * (f32) M2C_FIELD(var_s1, s16 *, 2)) / 100.0f);
            M2C_FIELD(var_s3, s16 *, 0x26) = (s16) (M2C_FIELD(var_s1, u8 *, 0xC) << 8);
            if (var_s3 == temp_s0) {
                M2C_FIELD(var_s3, s16 *, 0x26) = func_009B3480(var_s3, 0, 0);
            }
            if (var_s2 == 0) {
                temp_f1 = (s32) (M2C_FIELD(var_s3, f32 *, 0xE0) - M2C_FIELD(temp_s0, f32 *, 0xE0));
                temp_f0 = (s32) (M2C_FIELD(var_s3, f32 *, 0xE8) - M2C_FIELD(temp_s0, f32 *, 0xE8));
                if (((temp_f1 * temp_f1) + (temp_f0 * temp_f0)) < 0x24001) {
                    func_00209A00(M2C_FIELD(var_s3, s32 *, 4), 0x489, 0);
                }
            }
            var_s2 += 1;
            var_s3 += 0x240;
            var_s1 += 0x1A;
        } while (var_s2 < 0x17);
    }
    if (func_00BF6270() != 0xFF) {
        func_00BF6270();
    }
    if ((*(u8 *)D_00CBCB36) == 0) {
        func_009E1D30(3, 5);
    } else if ((*(u8 *)D_0059237C) != 0) {
        (*(s8 *)D_00CBCDE1) = 1;
        (*(u8 *)D_00CBCB36) = 0;
        func_009E1D30(3, 5);
    } else {
        func_00B52D70();
        func_00B4A160();
        func_00C1AD80();
        func_00B5BC40();
        func_00B5DBD0();
        if (((*(u16 *)D_00CBCB34) & 0x400) && ((*(u8 *)D_00CBCB37) != 0x1B)) {
            var_s0 = 0;
            if ((s32) (*(u8 *)D_00CBCB3D) > 0) {
                do {
                    func_00AD0A20();
                    if (!((*(u16 *)D_00CBCB34) & 2)) {
                        Pes6Ball_Update();
                    }
                    func_00AFBFD0();
                    var_s0 += 1;
                } while (var_s0 < (s32) (*(u8 *)D_00CBCB3D));
            }
        }
        func_009E1CB0(3);
    }
}
