/* compiler: mwcc-3.0.1b151 */
#include "types.h"
typedef struct {
    u8 values[0x160];
} EntryPage;
extern EntryPage *D_003EA5D0[2];
extern s32 D_003EA5CC;
extern char D_003EA58C[8], D_0092E9C8[];
extern s32 func_001C78F8(char *, const char *, ...);
char *func_0091FA50(void) {
    s32 value = D_003EA5D0[D_003EA5CC]->values[0x13a];
    value = value < 100 ? value : 99;
    func_001C78F8(D_003EA58C, D_0092E9C8, value);
    return D_003EA58C;
}