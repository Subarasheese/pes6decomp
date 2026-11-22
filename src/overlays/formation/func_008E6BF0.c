/* compiler: mwcc-3.0.1b210 */
#include "pes6/m2c.h"

extern void *func_001C48E8(void *, int, unsigned int);
extern void func_001D7F10(void *);
extern void func_001F1EA0(char *);
extern void func_008C5D70(char *);

void func_008E6BF0(char *arg0) {
    if (arg0 != NULL) {
        func_008C5D70(arg0 + 0x9EC);
        func_001F1EA0(M2C_FIELD(arg0, char **, 0x6C0));
        func_001F1EA0(M2C_FIELD(arg0, char **, 0x6C4));
        func_001D7F10(M2C_FIELD(arg0, char **, 0x9D0));
        func_001D7F10(M2C_FIELD(arg0, char **, 0x9D4));
        func_001D7F10(M2C_FIELD(arg0, char **, 0x9D8));
        func_001C48E8((s32 *) arg0, 0, 0xA0C);
    }
}
