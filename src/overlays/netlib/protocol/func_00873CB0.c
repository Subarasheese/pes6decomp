/* compiler: mwcc-3.0.1b210 */
#include "pes6/net_md5.h"
/* Initial chaining state of the RSA Data Security, Inc. MD5 Message-Digest Algorithm. */
void func_00873CB0(NetMd5Context *context) {
    context->count[0] = context->count[1] = 0;
    context->state[0] = 0x67452301U;
    context->state[1] = 0xefcdab89U;
    context->state[2] = 0x98badcfeU;
    context->state[3] = 0x10325476U;
}
