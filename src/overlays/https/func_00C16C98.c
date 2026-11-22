/* compiler: ee-gcc-3.2-Os-G0 */
#include "types.h"
extern const char D_00C54B68[]; /* \n */
extern const char D_00C54B70[]; /* mrdUPnP_SOAP_e2s */
extern const char D_00C54B88[]; /* mrd_upnp_soap.c */
extern int func_00C13890(const char *format, ...);
typedef struct {
    int code;
    const char *name;
    const char *description;
} SoapError;
extern const SoapError D_00C47A20[];
extern const char *D_00C479C4;
extern int func_00C0FE58(const char *caller, const char *file, int line, int status, int category,
                         ...);
const char *func_00C16C98(int code) {
    const char *result = D_00C479C4;
    int i = 0;
    for (;;) {
        const SoapError *error = &D_00C47A20[i++];
        if (!error->code) {
            func_00C13890(D_00C54B68);
            func_00C0FE58(D_00C54B70, D_00C54B88, 110, 0x1308, 0x1901);
            break;
        }
        if (error->code == code) {
            result = error->name;
            break;
        }
    }
    return result;
}
