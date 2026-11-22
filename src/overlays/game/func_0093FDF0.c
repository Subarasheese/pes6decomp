/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void func_001ABA10(void);
extern void Pes6World_SetActive(int);
M2C_UNK func_001A6570();                            /* extern */
M2C_UNK func_001A70C0();                            /* extern */
M2C_UNK func_001A96D0();                            /* extern */
M2C_UNK func_001B0FD0();                            /* extern */
M2C_UNK func_0026EDE0();                            /* extern */
extern s8 D_003EA6FC;

void func_0093FDF0(void) {
    Pes6World_SetActive(0);
    func_0026EDE0();
    func_001ABA10();
    func_001A6570();
    func_001A96D0();
    func_001A70C0();
    func_001B0FD0();
    D_003EA6FC = 1;
}
