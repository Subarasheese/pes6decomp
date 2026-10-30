/* compiler: mwcc-3.0.1b151 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002506F0(s32);
extern void func_00251BF0(int);
extern void func_00251740(s32, s32);
extern void func_00251C10(int);
extern void func_00251880(void);
extern void func_00251C00(int);
extern void func_00251C20(int);
M2C_UNK func_0024EEF0(M2C_UNK, M2C_UNK);            /* extern */
s32 func_0024FA00(s32, s32, s32, s32);              /* extern */
s32 func_00250E70(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_00251C80(M2C_UNK);                     /* extern */
M2C_UNK func_00253F60(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_0024FB20(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 var_s3;

    var_s3 = arg0;
    switch (var_s3) {                               /* irregular */
    case 0x22000101:
        func_0024FA00(0x22000039, 0, 0x32, 0);
        func_0024FA00(0x22000039, 1, 0x32, 0);
        return 0;
    case 0x8200000E:
        func_00251BF0(arg1);
        if (func_00250E70(0, 1) == 2) {
            func_002506F0(0);
        }
        if (func_00250E70(2, 1) == 2) {
            func_002506F0(2);
        }
        return 0;
    case 0x2200000D:
        func_00251C00(arg1);
        if (func_00250E70(1, 1) == 1) {
            func_002506F0(1);
        }
        if (func_00250E70(3, 1) == 1) {
            func_002506F0(3);
        }
        return func_0024FA00(0x82000007, arg1, 0, 0);
    case 0x2200000C:
        func_00251C10(arg1);
        if (func_00250E70(1, 1) == 0) {
            func_002506F0(1);
        }
        if (func_00250E70(3, 1) == 0) {
            func_002506F0(3);
        }
        return func_0024FA00(0x82000006, arg1, 0, 0);
    case 0x82000005:
        func_00251740(0, 0);
        func_00251740(2, 0);
        func_00251740(1, 0);
        func_00251740(3, 0);
        func_00253F60(0, 0xD, 0, 0, 0, 0, 0);
        var_s3 = 0x82000117;
block_38:
    default:
        return func_0024FA00(var_s3, arg1, arg2, arg3);
    case 0x82000004:
        func_0024EEF0(0, 0x22000000);
        goto block_38;
    case 0x82000003:
        func_0024EEF0(1, 0x22000000);
        goto block_38;
    case 0x82000002:
        func_00251740(0, 0);
        func_00251740(2, 0);
        func_00251740(1, 0);
        func_00251740(3, 0);
        func_00251880();
        func_00251880();
        func_00251880();
        func_00251880();
        func_00253F60(0, 0xD, 0, 0, 0, 0, 0);
        func_00251C80(0);
        func_00251C20(0);
        goto block_38;
    case 0x82000001:
        func_00251880();
        func_00251880();
        func_00251880();
        func_00251880();
        func_00251C80(0);
        func_00251C20(0);
        goto block_38;
    case 0x82000000:
        func_00251880();
        func_00251880();
        func_00251880();
        func_00251880();
        func_00251C80(1);
        func_00251C20(1);
        goto block_38;
    case 0x22000029:
        return func_0024FA00(0x22000029, 0xF, 0, 0);
    }
}
