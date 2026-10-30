/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0017B060(int, int, int);
extern void func_00153FA0(void *);
extern void func_001AC500(s32, s32);
extern void func_00153560(void);
extern void func_001AC410(void);
s32 func_001454C0(M2C_UNK);                         /* extern */
M2C_UNK func_001509A0(s32, M2C_UNK, void *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001A5750();                            /* extern */
M2C_UNK func_001A5900();                            /* extern */
M2C_UNK func_001EDD90(s32);                         /* extern */
M2C_UNK func_0096DA00(void *);                      /* extern */
M2C_UNK func_009BD9B0(M2C_UNK);                     /* extern */
extern void *D_003EA9C4;
extern char D_003FB114[];
extern char D_003FB118[];
extern char Pes6MatchPlayers[];

void func_009BE0B0(void) {
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_5;
    s32 var_s0;
    s32 var_s0_2;
    s32 var_s3;
    void *temp_a0_3;
    void *temp_a0_4;
    void *temp_s1;
    void *temp_s2;
    void *temp_v0;
    void *temp_v0_2;

    temp_s2 = D_003EA9C4;
    if (temp_s2 != NULL) {
        func_009BD9B0(0);
        func_001AC410();
        temp_s1 = D_003EA9C4;
        if (temp_s1 != NULL) {
            var_s3 = 0;
            if ((s32) M2C_FIELD(temp_s1, u8 *, 0x548) > 0) {
                do {
                    temp_a0 = var_s3 & 0xFF;
                    temp_v0 = temp_s1 + (temp_a0 * 0x24);
                    if (M2C_FIELD(temp_v0, s32 *, 0x208) != 0) {
                        func_00153560();
                        M2C_FIELD(temp_v0, s32 *, 0x208) = 0;
                    }
                    temp_a0_2 = M2C_FIELD(*M2C_FIELD((((void *)Pes6MatchPlayers) + ((temp_a0 + 1) * 0x240)), void ***, 4), s32 *, 0x10);
                    if (temp_a0_2 != 0) {
                        func_0017B060(temp_a0_2, 0, 0);
                    }
                    var_s3 = (var_s3 + 1) & 0xFF;
                } while (var_s3 < (s32) M2C_FIELD(temp_s1, u8 *, 0x548));
            }
        }
        if (M2C_FIELD(temp_s2, u8 *, 0x547) == 1) {
            func_001509A0(func_001454C0(0x7530), 0, M2C_FIELD(temp_s2, void **, 0x38), 0, 0x20);
        }
        if (M2C_FIELD(temp_s2, u8 *, 0x546) == 1) {
            func_001AC500(0x7530, 1);
            var_s0 = 0;
            if ((s32) M2C_FIELD(temp_s2, u8 *, 0x548) > 0) {
                do {
                    func_001AC500((var_s0 & 0xFF) + 0x7531, 1);
                    var_s0 = (var_s0 + 1) & 0xFF;
                } while (var_s0 < (s32) M2C_FIELD(temp_s2, u8 *, 0x548));
            }
            M2C_FIELD(temp_s2, u8 *, 0x546) = 0U;
        }
        temp_a0_3 = M2C_FIELD(temp_s2, void **, 0x38);
        if (temp_a0_3 != NULL) {
            func_00153FA0(temp_a0_3);
            M2C_FIELD(temp_s2, u8 *, 0x547) = 0U;
        }
        var_s0_2 = 0;
        if ((s32) M2C_FIELD(temp_s2, u8 *, 0x548) > 0) {
            do {
                temp_v0_2 = temp_s2 + ((var_s0_2 & 0xFF) * 4);
                temp_a0_4 = M2C_FIELD(temp_v0_2, void **, 0x3C);
                if (temp_a0_4 != NULL) {
                    func_00153FA0(temp_a0_4);
                    M2C_FIELD(temp_v0_2, void **, 0x3C) = NULL;
                }
                var_s0_2 = (var_s0_2 + 1) & 0xFF;
            } while (var_s0_2 < (s32) M2C_FIELD(temp_s2, u8 *, 0x548));
        }
        temp_a0_5 = M2C_FIELD(temp_s2, s32 *, 0x554);
        if (temp_a0_5 != 0) {
            func_001EDD90(temp_a0_5);
        }
        if (D_003EA9C4 != NULL) {
            func_0096DA00(D_003EA9C4);
            func_001A5900();
            D_003EA9C4 = NULL;
        }
        func_001A5750();
        (*(s32 *)D_003FB114) = 0;
        (*(s32 *)D_003FB118) = 0;
    }
}
