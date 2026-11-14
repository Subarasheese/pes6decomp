/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001DF820(void *, char *);
extern int sprintf(char *, char *, s32);
extern char D_00CB4BE0[];
extern char D_00CB4BE8[];

void func_00C74D60(void **arg0, s32 arg1) {
    char buf[16];
    void *temp_a0;

    if ((arg0 != NULL) && (sprintf(buf, D_00CB4BE0, arg1), (arg0 != NULL)) && (temp_a0 = *arg0, (temp_a0 != NULL)) && (M2C_FIELD(temp_a0, s32 *, 0) == 0)) {
        if (buf == NULL || buf[0] == 0) {
            func_001DF820(M2C_FIELD(temp_a0, void **, 0xC), D_00CB4BE8);
        } else {
            func_001DF820(M2C_FIELD(temp_a0, void **, 0xC), buf);
        }
    }
}
