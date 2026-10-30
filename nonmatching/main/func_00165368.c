/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0015B478(void *);
extern void func_00159E88(void);
extern void func_00161360(s32);
extern void func_00155EF8(void *);
extern void func_00159EA0(void);
extern int func_00163160(int);
extern void func_001618C8(void *);
extern void func_00171FE0(void *);
extern int func_001637C0(int, int, int);
M2C_UNK func_001652C0();                            /* extern */
M2C_UNK func_001652E8(void *);                      /* extern */
M2C_UNK func_00165310(void *);                      /* extern */
M2C_UNK func_00165998(void *);                      /* extern */
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
extern char D_003C8918[];

void func_00165368(void *arg0) {
    s32 temp_a0;
    s32 temp_s0;
    s32 var_s3;
    void ***var_s2;
    void **temp_a0_4;
    void **temp_a0_5;
    void **temp_a0_6;
    void **temp_v1;
    void *temp_a0_2;
    void *temp_a0_3;
    void *temp_a0_7;
    void *var_s0;

    if (arg0 == NULL) {
        func_0015B478(((void *)D_003C8918));
        return;
    }
    func_001652C0();
    func_001652E8(arg0);
    func_00165310(arg0);
    if (M2C_FIELD(arg0, s8 *, 0) == 1) {
        func_00165998(arg0);
    }
    temp_a0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_a0 != 0) {
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
        func_00161360(temp_a0);
    }
    temp_a0_2 = M2C_FIELD(arg0, void **, 4);
    if (temp_a0_2 != NULL) {
        M2C_FIELD(arg0, void **, 4) = NULL;
        func_001618C8(temp_a0_2);
    }
    temp_s0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_s0 != 0) {
        M2C_FIELD(arg0, s32 *, 8) = 0;
        func_001637C0(temp_s0, 0, 0);
        func_00163160(temp_s0);
    }
    temp_a0_3 = M2C_FIELD(arg0, void **, 0x94);
    if (temp_a0_3 != NULL) {
        M2C_FIELD(arg0, void **, 0x94) = NULL;
        func_00171FE0(temp_a0_3);
    }
    func_00159E88();
    temp_a0_4 = M2C_FIELD(arg0, void ***, 0x10);
    if (temp_a0_4 != NULL) {
        M2C_FIELD(arg0, void ***, 0x10) = NULL;
        M2C_FIELD(*temp_a0_4, M2C_UNK (**)(void **), 0xC)(temp_a0_4);
    }
    var_s3 = 0;
    if (M2C_FIELD(arg0, s8 *, 3) > 0) {
        var_s2 = arg0 + 0x80;
        var_s0 = arg0 + 0x78;
        do {
            temp_v1 = M2C_FIELD(var_s0, void ***, -0x60);
            if (temp_v1 != NULL) {
                M2C_FIELD(var_s0, void ***, -0x60) = NULL;
                M2C_FIELD(*temp_v1, M2C_UNK (**)(void **), 0xC)(temp_v1);
            }
            temp_a0_5 = M2C_FIELD(var_s0, void ***, 0);
            if (temp_a0_5 != NULL) {
                M2C_FIELD(var_s0, void ***, 0) = NULL;
                M2C_FIELD(*temp_a0_5, M2C_UNK (**)(void **), 0xC)(temp_a0_5);
            }
            temp_a0_6 = *var_s2;
            if (temp_a0_6 != NULL) {
                *var_s2 = NULL;
                M2C_FIELD(*temp_a0_6, M2C_UNK (**)(void **), 0xC)(temp_a0_6);
            }
            var_s3 += 1;
            var_s2 += 4;
            var_s0 += 4;
        } while (var_s3 < M2C_FIELD(arg0, s8 *, 3));
    }
    temp_a0_7 = M2C_FIELD(arg0, void **, 0x74);
    if (temp_a0_7 != NULL) {
        M2C_FIELD(arg0, void **, 0x74) = NULL;
        func_00155EF8(temp_a0_7);
    }
    func_001C48E8(arg0, 0, 0xC8);
    M2C_FIELD(arg0, s8 *, 0) = 0;
    func_00159EA0();
}
