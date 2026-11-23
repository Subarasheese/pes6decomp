/* compiler: mwcc-3.0.1b210 */
#pragma no_branch_likely on
#include "types.h"
typedef struct {
    s32 reserved;
    void **resource;
} MatchResource;
extern void func_00BA1840(s32 count, s32 *ids);
extern void func_00147ED0(s32);
extern void func_00147F00(s32, s32, s32 *, void (*)(s32, s32 *), s32, s32);
extern void func_001AC550(void *);
extern void *func_001454C0(s32);
extern void func_001AB650(void *);
void func_00BA1950(MatchResource *entry) {
    s32 id;
    void *resource = *entry->resource;
    func_001AB650(resource);
    func_001AC550(resource);
    id = 0x8D19;
    if (func_001454C0(0x8D19) != 0) {
        func_00147ED0(id);
        func_00147F00(1, 1, &id, func_00BA1840, 0, 0);
    }
}
