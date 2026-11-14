/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

typedef struct { u8 b0 : 1; u8 rest : 7; } BF;
extern void func_00915000(s32);
extern void func_0092A540(void);
extern void func_0096BA80(void);
extern BF D_00CBBE50[];

void func_00B78F60(void) {
    func_0092A540();
    func_00915000(3);
    func_0096BA80();
    D_00CBBE50[0].b0 = 0;
}
