/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_00272800(void);
extern void func_0019FBA0(void);
extern void func_001AAF40(void *, signed char);
extern void func_002A8830(s32);
extern void func_00182AD0(void);
M2C_UNK func_001A2330(M2C_UNK);                     /* extern */
M2C_UNK func_001AAF50(void *, M2C_UNK);             /* extern */
M2C_UNK func_00902460(M2C_UNK);                     /* extern */
M2C_UNK func_0090A390();                            /* extern */
void *func_009177C0(s32);                           /* extern */
extern char D_0059274E[];
extern char D_0092F256[];

s32 func_00902980(void) {
    u32 var_s1;
    void **temp_v0_2;
    void *temp_a0;
    void *temp_v0;

    func_00902460(0);
    func_00902460(1);
    func_002A8830(0);
    func_00272800();
    func_0090A390();
    (*(s16 *)D_0092F256) = 1;
    (*(s8 *)D_0059274E) = 2;
    func_001A2330(1);
    func_0019FBA0();
    var_s1 = 0;
    do {
        temp_v0 = func_009177C0(var_s1 & 0xFF);
        if (temp_v0 != NULL) {
            temp_v0_2 = M2C_FIELD(temp_v0, void ***, 4);
            if (temp_v0_2 != NULL) {
                temp_a0 = *temp_v0_2;
                if (temp_a0 != NULL) {
                    func_001AAF50(temp_a0, 3);
                    func_001AAF40(*M2C_FIELD(temp_v0, void ***, 4), 1);
                }
            }
        }
        var_s1 = (var_s1 + 1) & 0xFF;
    } while (var_s1 < 0x16U);
    func_00182AD0();
    return 1;
}
