/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void **func_00B22A90(void);
extern void *func_001D5A10(s32 assetId);
extern void func_00B22500(void);
extern void func_00955FA0(s32 value);
extern void func_00958000(s32 value);

void func_00B22870(void) {
    void **state = func_00B22A90();
    if (state != 0) {
        void *asset = func_001D5A10(0x10333);
        state[0] = asset;
        func_00B22500();
        func_00955FA0(0);
        func_00958000(0x55);
    }
}
