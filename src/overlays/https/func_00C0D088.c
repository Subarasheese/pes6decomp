/* compiler: ee-gcc-2.9-Os-G0 */
#include "pes6/https/client_state.h"
extern s32 func_00BCDD40(struct ssl_st *ssl, char *buffer, s32 length);
extern u32 func_00BB3560(void);
extern int printf(const char *format, ...);
extern const char D_00C50500[]; /* SSL_write() failed. err = 0x%x\n */
s32 func_00C0D088(HttpClient *client, char *buffer, s32 length) {
    s32 result = func_00BCDD40(client->ssl, buffer, length);
    if (result < 0) {
        printf(D_00C50500, func_00BB3560());
        client->sslError = -2002;
    }
    return result;
}
