/* Types used by the recovered zlib 1.1.4 functions. See THIRD_PARTY.md. */
#ifndef PES6_ZLIB_TYPES_H
#define PES6_ZLIB_TYPES_H

typedef unsigned char Byte;

typedef struct inflate_blocks_state inflate_blocks_statef;

typedef struct inflate_codes_state inflate_codes_statef;

typedef struct inflate_huft_s inflate_huft;

typedef int intf;

typedef unsigned int uInt;

typedef unsigned long uLong;

typedef unsigned char uch;

typedef unsigned long ulg;

typedef unsigned short ush;

typedef void *voidpf;

typedef Byte Bytef;

typedef voidpf (*alloc_func)(voidpf opaque, uInt items, uInt size);

typedef void (*free_func)(voidpf opaque, voidpf address);

typedef uInt uIntf;

typedef uch uchf;

typedef ush ushf;

typedef uLong (*check_func)(uLong check, const Bytef *buf, uInt len);

typedef struct z_stream_s {
    Bytef *next_in;
    uInt avail_in;
    uLong total_in;
    Bytef *next_out;
    uInt avail_out;
    uLong total_out;
    char *msg;
    struct internal_state *state;
    alloc_func zalloc;
    free_func zfree;
    voidpf opaque;
    int data_type;
    uLong adler;
    uLong reserved;
} z_stream;

typedef z_stream *z_streamp;

#endif
