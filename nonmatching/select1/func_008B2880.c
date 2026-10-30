/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void * func_001EDBA0(void *, void *);
extern void func_0020A540(void);
M2C_UNK func_001C48E8(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_001EDD90(void *);                      /* extern */
extern void *D_003EA3E0;
extern s32 D_003EA3E4;
extern void *D_008DAB80;
extern char D_008DAC10[];

void func_008B2880(void) {
    s32 var_s1;
    void **var_s0;
    void *temp_a1;

    if (D_003EA3E0 != NULL) {
        var_s1 = 0;
        var_s0 = &D_008DAB80;
        do {
            temp_a1 = *var_s0;
            if (temp_a1 != NULL) {
                func_001EDBA0(D_003EA3E0, temp_a1);
                *var_s0 = NULL;
            }
            var_s1 += 1;
            var_s0 += 4;
        } while (var_s1 < 0x21);
        func_001EDD90(D_003EA3E0);
        D_003EA3E0 = NULL;
    }
    func_0020A540();
    D_003EA3E4 = 0;
    func_001C48E8(((void *)D_008DAC10), 0, 0x1338);
}
