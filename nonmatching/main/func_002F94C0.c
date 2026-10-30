/* compiler: ee-gcc-2.9 */
/* Low-confidence non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001D6E40(void *);
extern void func_001D67B0(void *);
extern void func_001D7F10(void *);
extern void func_001D6600(void *);
extern void func_00153FA0(void *);
void func_002F94C0(void **arg0) {
    s32 **temp_v0;
    s32 *temp_a0;
    s32 temp_v1;
    s32 var_s0;
    s32 var_s1;
    s32 var_s6;
    u32 var_s3;
    void **var_s2;
    void *var_s4;

    var_s6 = 0;
    var_s2 = arg0;
    do {
        if (arg0 != NULL) {
            var_s4 = M2C_FIELD(var_s2, void **, 4);
        } else {
            var_s4 = NULL;
        }
        if (var_s4 != NULL) {
            if (var_s4 != NULL) {
                var_s0 = M2C_FIELD(var_s4, s32 *, 4);
            } else {
                var_s0 = 0;
            }
            var_s3 = 0;
            if (var_s0 > 0) {
                var_s1 = 0;
                do {
                    if ((var_s4 != NULL) && (var_s3 < (u32) M2C_FIELD(var_s4, s32 *, 4))) {
                        temp_v0 = M2C_FIELD(var_s4, void **, 0) + var_s1;
                        temp_a0 = *temp_v0;
                        *temp_v0 = NULL;
                        if (temp_a0 != NULL) {
                            temp_v1 = *temp_a0;
                            switch (temp_v1) {      /* irregular */
                            case 0:
                                func_001D6E40(temp_a0);
                                break;
                            case 1:
                                func_001D67B0(temp_a0);
                                break;
                            case 2:
                                func_001D6600(temp_a0);
                                break;
                            }
                        }
                    }
                    var_s3 += 1;
                    var_s1 += 4;
                } while ((s32) var_s3 < var_s0);
            }
            if (var_s4 != NULL) {
                func_00153FA0(M2C_FIELD(var_s4, void **, 0));
                func_00153FA0(var_s4);
            }
        }
        if (arg0 != NULL) {
            M2C_FIELD(var_s2, void **, 4) = NULL;
        }
        var_s6 += 1;
        var_s2 += 4;
    } while (var_s6 < 3);
    if (arg0 != NULL) {
        func_001D7F10(*arg0);
        *arg0 = NULL;
    }
    func_00153FA0(arg0);
}
