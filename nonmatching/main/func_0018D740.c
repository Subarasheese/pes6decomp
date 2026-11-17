/* compiler: mwcc-3.0.1b151 */
#include "pes6/m2c.h"

extern void func_0019EE90(void);
extern void func_001A03B0(s32);
extern void *func_001C48E8(void *, s32, s32);
extern char D_00520150[];

void func_0018D740(void) {
    char *var_s0;
    char *var_s1;
    s32 var_s2;
    s32 var_s3;

    var_s3 = 0;
    var_s1 = D_00520150;
    do {
        var_s2 = 0;
        var_s0 = var_s1;
        do {
            if (var_s3 == 0) {
                func_001A03B0(*(s32 *)(var_s0 + 4));
            }
            var_s2 += 1;
            var_s0 += 4;
        } while (var_s2 < 2);
        func_001C48E8(var_s1, 0, 0x60);
        var_s3 += 1;
        var_s1 += 0x60;
    } while (var_s3 < 2);
    func_0019EE90();
}
