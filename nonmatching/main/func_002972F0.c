/* compiler: ee-gcc-2.9 */
#include "pes6/m2c.h"

extern void func_0027B880(void *);
extern void func_0027CB00(void);
extern void func_0027CB30(void);
void func_002972F0(u8 *arg0, void *arg1) {
    s32 var_s1;
    s32 var_s2;
    u8 *var_s0;
    void *temp_a0;
    u8 *var_v1;

    var_v1 = M2C_FIELD(arg1, u8 **, 4);
    if (var_v1 != NULL) {
        var_s2 = 0;
        while (var_v1[1] != 0) {
            var_v1 += 0x20;
            var_s2 += 1;
        }
        var_s1 = 0;
        if (var_s2 > 0) {
            var_s0 = arg0;
            do {
                temp_a0 = *(void **)var_s0;
                if (temp_a0 != NULL) {
                    func_0027B880(temp_a0);
                    *(void **)var_s0 = NULL;
                }
                var_s1 += 1;
                var_s0 += 0x60;
            } while (var_s1 < var_s2);
        }
    }
    func_0027CB30();
    func_0027CB00();
}
