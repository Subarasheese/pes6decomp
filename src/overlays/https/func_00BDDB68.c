/* compiler: ee-gcc-2.9-G0 */
#include "types.h"
typedef struct {
    u8 reserved00[0x1c];
    s32 needsCleanup;
} StoreContext;
extern void func_00BDDBA0(StoreContext *);
extern void func_00BC0A88(void *);
void func_00BDDB68(StoreContext *record) {
    if (record->needsCleanup != 0) {
        func_00BDDBA0(record);
    }
    func_00BC0A88((void *)record);
}
