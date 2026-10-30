/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_002F4E10(void *);
extern void func_001BC2B0(void);
extern void func_001BC350(int);
M2C_UNK func_0096DA00(void **);                     /* extern */
extern void **D_003EA94C;

void func_00971050(s32 arg0) {
    void **temp_s0;

    temp_s0 = D_003EA94C;
    if (temp_s0 != NULL) {
        func_001BC350(arg0);
        func_001BC2B0();
        func_002F4E10(*temp_s0);
        func_0096DA00(D_003EA94C);
        D_003EA94C = NULL;
    }
}
