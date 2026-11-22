/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void **func_00B77B10(void);
extern void *func_001D5A10(s32 assetId);
extern void func_00B78420(void);
extern void func_001D7D80(void *asset, s32 flags);
extern void func_00B781E0(void);
extern void func_009BF230(void);

void func_00B787B0(void) {
    void **state = func_00B77B10();
    if (state != 0) {
        void *asset = func_001D5A10(0x10334);
        state[0] = asset;
        if (asset != 0) {
            func_00B78420();
            state = func_00B77B10();
            if (state != 0) {
                func_001D7D80(state[1], 0);
            }
            func_00B781E0();
            func_009BF230();
        }
    }
}
