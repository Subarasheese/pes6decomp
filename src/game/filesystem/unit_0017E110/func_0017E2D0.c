/* compiler: mwcc-3.0.1b151 */
#include "types.h"
extern void func_0017B070(void *), func_0017C3B0(void *);
void func_0017E2D0(void **records, s32 *count) {
    s32 i;
    for (i = 0; i < *count; ++i) {
        if (records[i]) {
            func_0017B070(records[i]);
            func_0017C3B0(records[i]);
        }
    }
}
