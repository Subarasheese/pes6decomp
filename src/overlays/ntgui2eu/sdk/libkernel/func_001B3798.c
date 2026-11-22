/* compiler: ee-gcc-2.96-G0-g */
/* devin-thomas/guilty-gear-x-plus src/sdk/newlib/locale.c (_setlocale_r). See THIRD_PARTY.md. */

extern int func_001B016C(const char *a, const char *b);
typedef struct {
    unsigned char *base;
    int size;
} Sbuf;
typedef struct Glue {
    struct Glue *next;
    int niobs;
    struct Fil *iobs;
} Glue;
typedef struct Fil {
    unsigned char *p;
    int r;
    int w;
    short flags;
    short file;
    Sbuf bf;
    int lbfsize;
    void *cookie;
    int (*read)(void *cookie, char *buf, int n);
    int (*write)(void *cookie, const char *buf, int n);
    long (*seek)(void *cookie, long off, int whence);
    int (*close)(void *cookie);
    Sbuf ub;
    unsigned char *up;
    int ur;
    unsigned char ubuf[3];
    unsigned char nbuf[1];
    Sbuf lb;
    int blksize;
    int offset;
    struct Reent *data;
} Fil;
struct _Bigint {
    struct _Bigint *_next;
    int _k;
    int _maxwds;
    int _sign;
    int _wds;
    unsigned int _x[1];
};
typedef struct Reent {
    int err;
    Fil *in;
    Fil *out;
    Fil *errs;
    int inc;
    char emergency[25];
    int current_category;
    const char *current_locale;
    int sdidinit;
    void *cleanup;
    struct _Bigint *result;
    int result_k;
    struct _Bigint *p5s;
    struct _Bigint **freelist;
    int cvtlen;
    char *cvtbuf;
    unsigned int rand_next;
    char *strtok_last;
    char pad060[0x178];
    Glue glue;
    Fil sf[3];
} Reent;
extern const char D_00601AA0[];
extern const char D_00601A90[];

char *func_001B3798(struct Reent *data, int category, const char *locale) {
    if (locale == 0)
        goto no_check;
    if (func_001B016C(locale, D_00601AA0) == 0)
        goto found;
    if (func_001B016C(locale, D_00601A90) != 0)
        return 0;
found:
    data->current_category = category;

    data->current_locale = locale;
no_check:
    return (char *)D_00601AA0;
}
