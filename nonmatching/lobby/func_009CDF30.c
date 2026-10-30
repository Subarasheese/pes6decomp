/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001BC2B0(void);
extern void func_001BC350(int);
extern void func_00153FA0(void *);
extern void func_001B9C60(void *);
extern void func_001D7F10(void *);
M2C_UNK func_002DC1D0(s32);                         /* extern */
M2C_UNK func_002DF960(s32);                         /* extern */
M2C_UNK func_002E33D0(s32);                         /* extern */

void func_009CDF30(s32 arg0) {
    s32 var_s2_2;
    s32 var_s3;
    void **temp_s0;
    void **var_s2;
    void **var_s3_2;

    func_001BC350(arg0);
    func_001BC2B0();
    temp_s0 = M2C_FIELD(arg0, void ***, 4);
    var_s3 = 0;
    var_s2 = temp_s0;
    do {
        func_001D7F10(*var_s2);
        var_s3 += 1;
        var_s2 += 4;
    } while (var_s3 < 8);
    var_s2_2 = 0;
    var_s3_2 = temp_s0;
    do {
        func_001D7F10(M2C_FIELD(var_s3_2, void **, 0x4C));
        var_s2_2 += 1;
        var_s3_2 += 4;
    } while (var_s2_2 < 3);
    func_002E33D0(M2C_FIELD(temp_s0, s32 *, 0x48));
    func_002DC1D0(M2C_FIELD(temp_s0, s32 *, 0xDC));
    func_002DF960(M2C_FIELD(temp_s0, s32 *, 0xE4));
    func_001B9C60(M2C_FIELD(temp_s0, void **, 0xE0));
    func_00153FA0(temp_s0);
    M2C_FIELD(arg0, s32 *, 8) = 1;
}
