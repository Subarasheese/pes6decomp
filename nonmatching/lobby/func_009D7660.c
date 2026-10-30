/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D7F10(void *);
M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
void *func_0099AF50(s32, M2C_UNK, M2C_UNK);         /* extern */
s32 func_0099B690(void *, M2C_UNK, M2C_UNK *);      /* extern */
M2C_UNK func_009D72A0(void *, s32);                 /* extern */
extern char D_00A03108[];

void func_009D7660(s32 arg0, void *arg1, s32 arg2, s32 arg3) {
    M2C_UNK var_s3_2;
    M2C_UNK var_s4;
    M2C_UNK var_s5;
    s32 var_s3;
    s32 var_s3_3;
    void *temp_v1;

    func_001D7F10(M2C_FIELD(arg1, void **, 0));
    func_001D7F10(M2C_FIELD(arg1, void **, 4));
    func_001D7F10(M2C_FIELD(arg1, void **, 8));
    func_001D7F10(M2C_FIELD(arg1, void **, 0xC));
    var_s3 = 0;
    do {
        func_001D7F10(M2C_FIELD((arg1 + (var_s3 * 4)), void **, 0x10));
        var_s3 += 1;
    } while (var_s3 < 8);
    func_001C48E8(arg1, 0, 0x40);
    M2C_FIELD(arg1, s32 *, 0x3C) = arg3;
    if (arg3 != 0) {
        var_s3_2 = 0x17;
        var_s5 = 0x29;
        var_s4 = 0x2A;
    } else {
        var_s3_2 = 9;
        var_s5 = 8;
        var_s4 = 9;
    }
    M2C_FIELD(arg1, void **, 0) = func_0099AF50(arg0, 0xA, 1);
    M2C_FIELD(arg1, void **, 4) = func_0099AF50(arg0, var_s3_2, 1);
    M2C_FIELD(arg1, void **, 8) = func_0099AF50(arg0, 0, 1);
    M2C_FIELD(arg1, void **, 0xC) = func_0099AF50(arg0, 1, 1);
    var_s3_3 = 0;
    do {
        temp_v1 = arg1 + (var_s3_3 * 4);
        var_s3_3 += 1;
        M2C_FIELD(temp_v1, void **, 0x10) = func_0099AF50(arg0, 0xB, 1);
    } while (var_s3_3 < 8);
    M2C_FIELD(arg1, s32 *, 0x30) = func_0099B690(M2C_FIELD(arg1, void **, 4), var_s5, ((void *)D_00A03108));
    M2C_FIELD(arg1, s32 *, 0x34) = func_0099B690(M2C_FIELD(arg1, void **, 4), var_s4, ((void *)D_00A03108));
    func_009D72A0(arg1, arg2);
}
