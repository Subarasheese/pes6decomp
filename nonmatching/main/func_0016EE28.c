/* compiler: ee-gcc-2.9 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_0016E9E0(void *, void *);
extern s32 func_0016EE08(s32);
extern int func_00113D78(int);
M2C_UNK func_001610B0(M2C_UNK *, M2C_UNK *);        /* extern */
M2C_UNK func_0016D5C0(M2C_UNK);                     /* extern */
s32 func_0016EA10(s32, M2C_UNK *);                  /* extern */
void *func_0016EDD0(M2C_UNK *);                     /* extern */
M2C_UNK func_0016F5E8(void *, M2C_UNK *);           /* extern */
s32 func_0016FE58(void *, s32);                     /* extern */
extern char D_00387110[];
extern char D_003CA620[];
extern char D_003CA648[];
extern char D_003CA670[];
extern char D_003CA6A0[];
extern char D_003CA6C8[];

void *func_0016EE28(void *arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK *var_a1;
    s32 temp_s3;
    s32 temp_s4;
    void *temp_v0;
    void *var_a0;

    var_a0 = arg0;
    if (var_a0 == NULL) {
        var_a1 = ((void *)D_003CA620);
        goto block_7;
    }
    if (arg2 != 0) {
        var_a0 = NULL;
        var_a1 = ((void *)D_003CA648);
        goto block_7;
    }
    temp_v0 = func_0016EDD0(((void *)D_003CA648));
    temp_s3 = temp_v0 + 0x20;
    if (temp_v0 == NULL) {
        var_a0 = NULL;
        var_a1 = ((void *)D_003CA670);
block_7:
        func_0016E9E0(var_a0, var_a1);
        return NULL;
    }
    temp_s4 = func_0016FE58(var_a0, temp_s3);
    if (M2C_FIELD(temp_v0, s32 *, 0x24) == 0) {
        func_0016F5E8(var_a0, ((void *)D_00387110));
        func_001610B0(((void *)D_003CA6A0), ((void *)D_00387110));
        func_0016D5C0(0x8300);
        func_00113D78(0);
        func_0016D5C0(0x8301);
        if (func_0016EA10(temp_s3, ((void *)D_00387110)) != 0) {
            M2C_FIELD(temp_v0, s8 *, 1) = 0;
            goto block_15;
        }
        func_0016E9E0(NULL, ((void *)D_003CA6C8));
        func_0016EE08((s32) temp_v0);
        return NULL;
    }
    M2C_FIELD(temp_v0, s8 *, 1) = 1;
block_15:
    M2C_FIELD(temp_v0, u32 *, 8) = (u32) ((u32) (M2C_FIELD(temp_v0, s32 *, 0x24) + 0x7FF) >> 0xB);
    M2C_FIELD(temp_v0, s8 *, 0) = 1;
    M2C_FIELD(temp_v0, s32 *, 4) = M2C_FIELD(temp_v0, s32 *, 0x24);
    M2C_FIELD(temp_v0, s32 *, 0xC) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x18) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x10) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x14) = 0;
    M2C_FIELD(temp_v0, s8 *, 2) = 0;
    M2C_FIELD(temp_v0, s32 *, 0x1C) = 0;
    if (temp_s4 == 1) {
        M2C_FIELD(temp_v0, u32 *, 8) = 0x7FFFFFFFU;
    }
    return temp_v0;
}
