/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"


M2C_UNK func_001C48E8(void *, M2C_UNK, M2C_UNK);    /* extern */
s32 func_0085F780(void *, s32);                     /* extern */
s32 func_0085F890(void *, s32);                     /* extern */
s32 func_0085FE30(void *, s32);                     /* extern */
s32 func_008611C0(void *, s32);                     /* extern */
s32 func_00861F40(void *, s32, M2C_UNK);            /* extern */
s32 func_00862040(void *, s32);                     /* extern */
s32 func_008668A0(s32, s32);                        /* extern */
s32 func_00866970(s32, void *);                     /* extern */
s32 func_00866C00(s32, void *);                     /* extern */
s32 func_00866D00(s32, void *);                     /* extern */
s32 func_00867250(s32, void *, s32, void *);        /* extern */
s32 func_008672B0(s32, s32, void *);                /* extern */
s32 func_00867570(s32, void *, s32);                /* extern */
s32 func_0086A980(s32, void *, void *);             /* extern */
s32 func_0086AAC0(s32, void *, void *, void *, void *, void *, void *); /* extern */
s32 func_0086AE00(s32, void *);                     /* extern */
s32 func_0086AE80(s32, void *);                     /* extern */
s32 func_0086AF60(s32, void *);                     /* extern */
s32 func_00871A80(s32, void *);                     /* extern */

s32 func_008637B0(void *arg0) {
    s32 temp_s0;
    s32 temp_v0;
    s32 temp_v1_2;
    s32 var_s1;
    s32 var_v0;
    void *temp_v1;

    var_v0 = 0;
    temp_v1 = M2C_FIELD(arg0, void **, 0x37E0);
    temp_s0 = temp_v1 + 0x2400;
    temp_v1_2 = M2C_FIELD(temp_v1, s32 *, 0x2400);
    var_s1 = 0;
    switch (temp_v1_2) {                            /* irregular */
    case 0x3134:
        temp_v0 = M2C_FIELD(arg0, s32 *, 0x4868);
        if (temp_v0 == 0) {
            var_v0 = -0x1B;
            M2C_FIELD(arg0, s32 *, 0x4830) = -0x1B;
        } else {
            var_v0 = func_008668A0(temp_s0, temp_v0 + 0x10204);
        }
        break;
    case 0x3133:
        if (M2C_FIELD(arg0, s32 *, 0x4868) == 0) {
            var_v0 = -0x1B;
            M2C_FIELD(arg0, s32 *, 0x4830) = -0x1B;
        } else {
            var_v0 = func_00866970(temp_s0, arg0 + 0x4830);
        }
        break;
    case 0x4B01:
        func_001C48E8(arg0 + 0x16118, 0, 0x2C);
        var_v0 = func_0086A980(temp_s0, arg0 + 0x4830, arg0 + 0x16118);
        var_s1 = 0x4B01;
        break;
    case 0x3101:
        var_v0 = func_00866C00(temp_s0, arg0 + 0x4830);
        break;
    case 0x3091:
        var_v0 = func_00866D00(temp_s0, arg0 + 0x4830);
        break;
    case 0x4A11:
        var_v0 = func_0086AAC0(temp_s0, arg0 + 0x153DC, arg0 + 0x155CC, arg0 + 0x155F8, arg0 + 0x153D9, arg0 + 0x101A4, arg0 + 0x101A7);
        M2C_FIELD(arg0, s32 *, 0x4830) = 0;
        var_s1 = 0x4A11;
        break;
    case 0x4A04:
        var_v0 = func_0086AE00(temp_s0, arg0 + 0x4830);
        var_s1 = 0x4A04;
        break;
    case 0x4A03:
        var_v0 = func_0086AE80(temp_s0, arg0 + 0x4830);
        var_s1 = 0x4A03;
        break;
    case 0x4A01:
        var_v0 = func_0086AF60(temp_s0, arg0 + 0x4830);
        var_s1 = 0x4A01;
        break;
    case 0x3073:
        var_v0 = func_00867250(temp_s0, arg0 + 0x4830, M2C_FIELD(arg0, s32 *, 0x4BB4), arg0 + 0x4BB8);
        break;
    case 0x3072:
        var_v0 = func_008672B0(temp_s0, M2C_FIELD(arg0, s32 *, 0x4BB4), arg0 + 0x4830);
        break;
    case 0x3071:
        var_v0 = func_00867570(temp_s0, arg0 + 0x4830, M2C_FIELD(arg0, s32 *, 0x4BB4));
        break;
    case 0x4402:
        var_v0 = func_00871A80(temp_s0, arg0 + 0x139AC);
        if (var_v0 == 0) {
            var_s1 = 0x4402;
        } else {
            var_s1 = var_v0;
        }
        break;
    default:
        var_s1 = -0x46;
        break;
    case 0x6:
    case 0x4401:
    case 0x5:
    case 0x4:
        var_v0 = func_00862040(arg0, temp_s0);
        break;
    case 0x3004:
    case 0x3002:
        var_v0 = func_00861F40(arg0, temp_s0, 8);
        break;
    case 0x4389:
    case 0x4388:
    case 0x4386:
    case 0x4384:
    case 0x4382:
    case 0x4381:
    case 0x437F:
    case 0x436E:
    case 0x436D:
    case 0x436B:
    case 0x436A:
    case 0x4368:
    case 0x4367:
    case 0x4365:
    case 0x4364:
    case 0x4362:
    case 0x4361:
    case 0x4352:
    case 0x4351:
    case 0x4350:
    case 0x437E:
    case 0x437D:
    case 0x437C:
    case 0x4378:
    case 0x4376:
    case 0x4374:
    case 0x4372:
    case 0x4371:
    case 0x4370:
    case 0x434C:
    case 0x434B:
    case 0x434A:
    case 0x4348:
    case 0x4347:
    case 0x4346:
    case 0x4344:
    case 0x4342:
    case 0x4341:
    case 0x4331:
    case 0x4330:
    case 0x4324:
    case 0x4327:
    case 0x4322:
    case 0x432B:
    case 0x4311:
    case 0x4326:
    case 0x4321:
    case 0x4305:
    case 0x4306:
    case 0x4303:
    case 0x4302:
    case 0x4301:
    case 0x4222:
    case 0x4221:
    case 0x4220:
    case 0x4213:
    case 0x4212:
    case 0x4211:
    case 0x4203:
    case 0x4201:
    case 0x4101:
        var_v0 = func_008611C0(arg0, temp_s0);
        break;
    case 0x5111:
    case 0x5100:
    case 0x50F3:
    case 0x50F1:
    case 0x50E2:
    case 0x50E1:
    case 0x50D2:
    case 0x50D1:
    case 0x50C1:
    case 0x50B2:
    case 0x50B1:
    case 0x50A9:
    case 0x50A8:
    case 0x50A6:
    case 0x50A5:
    case 0x50A4:
    case 0x50A2:
    case 0x50A1:
    case 0x5092:
    case 0x5091:
    case 0x5090:
    case 0x508F:
    case 0x508D:
    case 0x508C:
    case 0x508A:
    case 0x5088:
    case 0x5086:
    case 0x5085:
    case 0x5083:
    case 0x5082:
    case 0x5081:
    case 0x5073:
    case 0x5072:
    case 0x5071:
    case 0x5063:
    case 0x5062:
    case 0x5061:
    case 0x5053:
    case 0x5052:
    case 0x5051:
    case 0x5049:
    case 0x5048:
    case 0x5046:
    case 0x5045:
    case 0x5044:
    case 0x5042:
    case 0x5041:
    case 0x503D:
    case 0x503C:
    case 0x503B:
    case 0x5039:
    case 0x5038:
    case 0x5037:
    case 0x5035:
    case 0x5034:
    case 0x5033:
    case 0x5031:
    case 0x5029:
    case 0x5028:
    case 0x5027:
    case 0x5025:
    case 0x5023:
    case 0x5022:
    case 0x5021:
        var_v0 = func_0085FE30(arg0, temp_s0);
        break;
    case 0x434E:
    case 0x9413:
    case 0x9412:
    case 0x9411:
    case 0x4116:
    case 0x4111:
    case 0x4103:
    case 0x4603:
    case 0x4602:
    case 0x4601:
    case 0x4583:
    case 0x4582:
    case 0x4581:
    case 0x4523:
    case 0x4521:
    case 0x4512:
    case 0x450D:
    case 0x450C:
    case 0x450A:
    case 0x4509:
    case 0x4507:
    case 0x4506:
    case 0x4525:
    case 0x4524:
    case 0x3086:
    case 0x3084:
    case 0x3082:
    case 0x47A1:
    case 0x4791:
    case 0x4786:
    case 0x4784:
    case 0x4782:
    case 0x4704:
    case 0x4702:
        var_v0 = func_0085F890(arg0, temp_s0);
        break;
    case 0x308D:
    case 0x308B:
    case 0x3089:
    case 0x3088:
    case 0x3087:
        var_v0 = func_0085F780(arg0, temp_s0);
        break;
    case 0x3135:
        if (M2C_FIELD(arg0, s32 *, 0x4868) == 0) {
            var_v0 = -0x1B;
            M2C_FIELD(arg0, s32 *, 0x4830) = -0x1B;
        } else {
            var_v0 = 0x3135;
        }
        break;
    }
    if (var_v0 >= 0) {
        M2C_FIELD(arg0, s32 *, 0x158) = 0;
    }
    return var_s1;
}
