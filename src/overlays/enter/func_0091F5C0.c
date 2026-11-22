/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 values[0x160];
} EntryPage;
extern EntryPage *D_003EA5D0[2];
extern s32 D_003EA5CC;
extern char D_003EA5C4[8], D_0092E9C8[];
extern s32 func_001C78F8(char *, const char *, ...);
char *func_0091F5C0(void) {
    s32 value = D_003EA5D0[D_003EA5CC]->values[0x15b];
    value = value < 1000 ? value : 999;
    func_001C78F8(D_003EA5C4, D_0092E9C8, value);
    return D_003EA5C4;
}