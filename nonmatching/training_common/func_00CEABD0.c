/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002EC160(int, int);
extern void func_001D7D60(void *, s8);
M2C_UNK func_00CE3BF0(s32);                         /* extern */
extern s32 D_003E7E1C;
extern void **D_00CFFC28;
extern char D_00CFFC30[];
extern void *D_00CFFCF4;
extern void *D_00CFFCF8;
extern char D_00CFFCFC[];

void func_00CEABD0(void) {
    s32 var_s1;
    void **var_s0;

    var_s0 = D_00CFFC28;
    func_002EC160((*(s32 *)D_00CFFCFC), 0);
    var_s1 = 0;
    if ((*(s32 *)D_00CFFC30) > 0) {
        do {
            func_001D7D60(*var_s0, 0);
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < (*(s32 *)D_00CFFC30));
    }
    func_001D7D60(D_00CFFCF4, 0);
    func_001D7D60(D_00CFFCF8, 0);
    func_00CE3BF0(D_003E7E1C);
}
