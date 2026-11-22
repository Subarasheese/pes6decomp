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
extern void func_001C4730(void *dst, const void *src, u32 bytes);
void func_00873BB0(NetMd5Context *context, const u8 *input, u32 inputLen) {
    unsigned int i, index, partLen;

    /* Compute number of bytes mod 64 */
    index = (unsigned int)((context->count[0] >> 3) & 0x3F);

    /* Update number of bits */
    if ((context->count[0] += ((u32)inputLen << 3)) < ((u32)inputLen << 3))
        context->count[1]++;
    context->count[1] += ((u32)inputLen >> 29);

    partLen = 64 - index;

    /* Transform as many times as possible.
     */
    if (inputLen >= partLen) {
        func_001C4730(&context->buffer[index], input, partLen);
        func_00872B00(context->state, context->buffer);

        for (i = partLen; i + 63 < inputLen; i += 64)
            func_00872B00(context->state, &input[i]);

        index = 0;
    } else
        i = 0;

    /* Buffer remaining input */
    func_001C4730(&context->buffer[index], &input[i], inputLen - i);
}
