/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002D8FB0(void);
extern void func_002D8EB0(void *);
extern void func_00264790(void *, u8);
extern u32 func_00824010(void);
void func_00820B30(void **arg0) {
    s32 var_s0_2;
    s32 var_s2_2;
    s32 var_s3;
    u32 var_s0;
    u32 var_s2;
    void **var_s2_3;

    var_s0 = func_00824010();
    func_002D8FB0();
    func_002D8EB0(var_s0 + 0x16E3C);
    var_s3 = 0;
    var_s2 = var_s0;
    do {
        func_002D8EB0(var_s2 + 0x94);
        var_s3 += 1;
        var_s2 += 0x18;
    } while (var_s3 < 0x32);
    var_s2_2 = 0;
    do {
        func_002D8EB0(var_s0 + 0xB768);
        var_s2_2 += 1;
        var_s0 += 0x18;
    } while (var_s2_2 < 0x32);
    var_s0_2 = 0;
    var_s2_3 = arg0;
    do {
        func_002D8EB0(var_s2_3 + 0x21C);
        var_s0_2 += 1;
        var_s2_3 += 0x18;
    } while (var_s0_2 < 4);
    func_00264790(*arg0, 4U);
}
