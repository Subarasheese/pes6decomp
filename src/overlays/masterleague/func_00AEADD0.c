/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001D7D60(void *, u8);
extern s32 D_003EADB4;
extern s32 D_003EADB8;

void func_00AEADD0(s32 arg0) {
    if (D_003EADB4 != 0) {
        func_001D7D60((void *)D_003EADB8, arg0 & 0xFF);
    }
}
