/* compiler: mwcc-3.0.1b210 */
#include "types.h"

extern void func_001D4E00(void *);
extern s32 D_003E7CE8;
extern s32 D_003E7CEC;
extern s32 D_003EADB4;
extern s32 D_003EADB8;
extern s32 D_003EADBC;
extern s32 D_003EADC0;

void func_00AEAE00(void) {
    if (D_003EADB4 != 0) {
        func_001D4E00((void *)D_003EADB4);
        D_003EADB4 = 0;
    }
    D_003EADB8 = 0;
    D_003EADC0 = 0;
    D_003EADBC = 0;
    D_003E7CE8 = -1;
    D_003E7CEC = -1;
}
