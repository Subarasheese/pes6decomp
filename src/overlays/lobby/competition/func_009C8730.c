/* compiler: mwcc-3.0.1b210 */
#include "types.h"
extern s32 func_0094F930(void);
extern const char *func_0094F810(void);
extern int sprintf(char *, const char *, ...);
extern void func_0099C6F0(const char *);
extern char D_00A02D18[];
void func_009C8730(void) {
    int number;
    const char *entry;
    char message[112];
    number = func_0094F930();
    entry = func_0094F810();
    sprintf(message, D_00A02D18, number, entry);
    func_0099C6F0(message);
}
