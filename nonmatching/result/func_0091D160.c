/* compiler: mwcc-3.0.1b210 */
/* Non-matching reconstruction; types, layouts and ABI remain provisional. */
#include "pes6/m2c.h"

extern void func_001EF900(void *, s8);
extern void * func_001EDD00(void *);
extern void func_001EEE60(void *, void *);
M2C_UNK func_001EF370(void *, s32);                 /* extern */

void *func_0091D160(void *arg0, s32 arg1, void *arg2) {
    void *temp_v0;

    if (arg0 == NULL) {
        return NULL;
    }
    temp_v0 = func_001EDD00(arg0);
    func_001EF900(temp_v0, 1);
    func_001EF370(temp_v0, arg1);
    func_001EEE60(temp_v0, arg2);
    return temp_v0;
}
