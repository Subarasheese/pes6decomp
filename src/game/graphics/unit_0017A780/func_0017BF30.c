/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on
#include "pes6/m2c.h"

#include "pes6/texture_release.h"
extern void Pes6Heap_Free(void *);
void func_0017BF30(void *arg0, s32 arg1) {
    s32 *p;

    p = (s32 *)(M2C_FIELD(arg0, char **, 0x20) + (arg1 * 0x14));
    if (p[0] != 0) {
        func_00140FE0(p[2], (void *)p[0]);
        Pes6Heap_Free((void *)p[0]);
        p[0] = 0;
    }
}
