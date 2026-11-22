/* compiler: mwcc-3.0.1b151 */
#pragma optimize_for_size on
/* MD5C.C - RSA Data Security, Inc., MD5 message-digest algorithm
 */

/* Copyright (C) 1991-2, RSA Data Security, Inc. Created 1991. All
rights reserved.

License to copy and use this software is granted provided that it
is identified as the "RSA Data Security, Inc. MD5 Message-Digest
Algorithm" in all material mentioning or referencing this software
or this function.

License is also granted to make and use derivative works provided
that such works are identified as "derived from the RSA Data
Security, Inc. MD5 Message-Digest Algorithm" in all material
mentioning or referencing the derived work.

RSA Data Security, Inc. makes no representations concerning either
the merchantability of this software or the suitability of this
software for any particular purpose. It is provided "as is"
without express or implied warranty of any kind.

These notices must be retained in any copies of any part of this
documentation and/or software.
 */
/* Derived from the RSA Data Security, Inc. MD5 Message-Digest Algorithm, RFC 1321, Appendix A.3. */
#include "pes6/net_md5.h"
/* 0x80 followed by 63 zero bytes. */
extern const u8 D_00887950[64];
static inline void encodeWords(u8 *output, u32 *input, unsigned int len) {
    unsigned int i, j;

    for (i = 0, j = 0; j < len; i++, j += 4) {
        output[j] = (unsigned char)(input[i] & 0xff);
        output[j + 1] = (unsigned char)((input[i] >> 8) & 0xff);
        output[j + 2] = (unsigned char)((input[i] >> 16) & 0xff);
        output[j + 3] = (unsigned char)((input[i] >> 24) & 0xff);
    }
}

static inline void clearBlock(u8 *output, int value, unsigned int len) {
    unsigned int i;

    for (i = 0; i < len; i++)
        ((char *)output)[i] = (char)value;
}

void func_00873A70(u8 digest[16], NetMd5Context *context) {
    unsigned char bits[8];
    unsigned int index, padLen;

    /* Save number of bits */
    encodeWords(bits, context->count, 8);

    /* Pad out to 56 mod 64.
     */
    index = (unsigned int)((context->count[0] >> 3) & 0x3f);
    padLen = (index < 56) ? (56 - index) : (120 - index);
    func_00873BB0(context, D_00887950, padLen);

    /* Append length (before padding) */
    func_00873BB0(context, bits, 8);
    /* Store state in digest */
    encodeWords(digest, context->state, 16);

    /* Zeroize sensitive information.
     */
    clearBlock((u8 *)context, 0, sizeof(*context));
}
