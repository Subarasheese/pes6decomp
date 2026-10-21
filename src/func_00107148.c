/* compiler: ee-gcc-2.9-as210-G0 */
/* Sony SDK code (libkernel's printf engine, behind kprintf, printf and the TTY writers); written
   from the PES6 executable, as this SDK release's version differs from the older one in
   kfiv-decomp and crashwoc-decomp-ps2. */
typedef char *va_list;
#define va_arg(ap, type) (*(type *)(((ap) += 8) - 8))

#define F_MINUS 0x1
#define F_PLUS 0x2
#define F_ZERO 0x4
#define F_SPACE 0x8
#define F_ALT 0x10
#define F_PREC 0x20
#define F_LONG 0x40
#define F_SHORT 0x80
#define F_CHAR 0x100

int printfloat(int (*out)(), void *ctx, int *remain, double v);

/* Format fmt with the arguments at ap, passing each character to out(ctx, &remain, c) and a final
   0 when done; remain is the space left, which out maintains. Supports the flags - + 0 space #,
   a width, a precision (.N or .*), the l and h sizes and the conversions d i u o x X p c s e f
   (e and f both print "0.<6 digits>e<exp>"). Returns the sum of out's results. */

int func_00107148(int (*out)(), void *ctx, int remain, const char *fmt, va_list ap)
{
    char buf[32];
    char prefix[32];
    char *bufend;
    char *p;
    char *start;
    const char *digits;
    char *s;
    char c;
    char padch;
    int flags;
    int width;
    int prec;
    int plen;
    int len;
    int total;
    int n;
    unsigned long long uval;
    long long sval;
    float f;

    bufend = &buf[31];
    total = 0;
    while (*fmt) {
        flags = 0;
        width = 0;
        prec = 0;
        plen = 0;
        c = *fmt;
        if (c == '%') {
        parse:
            fmt++;
            switch (*fmt) {
            case '-':
                flags |= F_MINUS;
                goto parse;
            case '+':
                flags |= F_PLUS;
                goto parse;
            case '0':
                flags |= F_ZERO;
                goto parse;
            case '1': case '2': case '3': case '4': case '5': case '6': case '7': case '8': case '9':
                n = 0;
                do {
                    n = n * 10 + (*fmt - '0');
                    fmt++;
                } while (*fmt >= '0' && *fmt <= '9');
                width = n;
            digits_done:
                if (*fmt == 0) {
                    goto next;
                }
                fmt--;
                goto parse;
            case '.':
                fmt++;
                flags |= F_PREC;
                if (*fmt == '*') {
                    n = va_arg(ap, int);
                    prec = n > -2 ? n : -1;
                    goto parse;
                }
                n = 0;
                while (*fmt >= '0' && *fmt <= '9') {
                    n = n * 10 + (*fmt - '0');
                    fmt++;
                }
                prec = n > -2 ? n : -1;
                goto digits_done;
            case ' ':
                flags |= F_SPACE;
                goto parse;
            case '#':
                flags |= F_ALT;
                goto parse;
            case 'l':
                flags |= F_LONG;
                goto parse;
            case 'h':
                flags |= F_SHORT;
                goto parse;
            case 'o':
                if (flags & F_LONG) {
                    uval = va_arg(ap, unsigned long long);
                } else if (flags & F_SHORT) {
                    uval = va_arg(ap, unsigned short);
                } else {
                    uval = va_arg(ap, unsigned int);
                }
                p = bufend;
                if (uval == 0) {
                    if (!(flags & F_PREC) || prec != 0) {
                        *p-- = '0';
                    }
                } else {
                    do {
                        *p-- = (uval & 7) + '0';
                        uval >>= 3;
                    } while (uval != 0);
                    if (flags & F_ALT) {
                        *p-- = '0';
                    }
                }
                start = p + 1;
                len = bufend - p;
                break;
            case 'x':
                digits = "0123456789abcdef";
                if (flags & F_ALT) {
                    prefix[0] = '0';
                    prefix[1] = 'x';
                    plen = 2;
                }
                goto hex;
            case 'X':
                digits = "0123456789ABCDEF";
                if (flags & F_ALT) {
                    prefix[0] = '0';
                    prefix[1] = 'X';
                    plen = 2;
                }
            hex:
                if (flags & F_LONG) {
                    uval = va_arg(ap, unsigned long long);
                } else if (flags & F_SHORT) {
                    uval = va_arg(ap, unsigned short);
                } else {
                    uval = va_arg(ap, unsigned int);
                }
                p = bufend;
                if (uval == 0) {
                    plen = 0;
                    if (!(flags & F_PREC) || prec != 0) {
                        *p-- = '0';
                    }
                } else {
                    do {
                        *p-- = digits[uval & 0xF];
                        uval >>= 4;
                    } while (uval != 0);
                }
                start = p + 1;
                len = bufend - p;
                break;
            case 'd':
            case 'i':
                if (flags & F_LONG) {
                    sval = va_arg(ap, long long);
                } else if (flags & F_SHORT) {
                    sval = va_arg(ap, short);
                } else {
                    sval = va_arg(ap, int);
                }
                p = bufend;
                if (sval >= 0) {
                    if (flags & F_PLUS) {
                        prefix[0] = '+';
                        plen = 1;
                    } else if (flags & F_SPACE) {
                        prefix[0] = ' ';
                        plen = 1;
                    }
                } else {
                    prefix[0] = '-';
                    plen = 1;
                }
                if (sval == 0) {
                    if (!(flags & F_PREC) || prec != 0) {
                        *p-- = '0';
                    }
                } else {
                    if (sval < 0) {
                        sval = -sval;
                    }
                    while (sval != 0) {
                        *p-- = sval % 10 + '0';
                        sval /= 10;
                    }
                }
                start = p + 1;
                len = bufend - p;
                break;
            case 'u':
                if (flags & F_LONG) {
                    uval = va_arg(ap, unsigned long long);
                } else if (flags & F_SHORT) {
                    uval = va_arg(ap, unsigned short);
                } else {
                    uval = va_arg(ap, unsigned int);
                }
                p = bufend;
                if (uval == 0) {
                    if (!(flags & F_PREC) || prec != 0) {
                        *p-- = '0';
                    }
                } else {
                    do {
                        *p-- = uval % 10 + '0';
                        uval /= 10;
                    } while (uval != 0);
                }
                start = p + 1;
                len = bufend - p;
                break;
            case 'e':
            case 'f':
                f = va_arg(ap, double);
                if (f == 0.0f) {
                    total += out(ctx, &remain, '0');
                } else {
                    total += printfloat(out, ctx, &remain, f);
                }
                goto next;
            case 's':
                s = va_arg(ap, char *);
                if (s == 0) {
                    out(ctx, &remain, '(');
                    out(ctx, &remain, 'n');
                    out(ctx, &remain, 'u');
                    out(ctx, &remain, 'l');
                    out(ctx, &remain, 'l');
                    out(ctx, &remain, ')');
                    goto next;
                }
                p = s;
                if (flags & F_PREC) {
                    n = 0;
                    while (n < prec && *p++) {
                        n++;
                    }
                    len = n;
                } else {
                    len = 0;
                    while (*p) {
                        p++;
                        len++;
                    }
                }
                start = s;
                break;
            case 'c':
                p = bufend;
                sval = va_arg(ap, char);
                flags |= F_CHAR;
                prec = 1;
                *p-- = sval;
                start = p + 1;
                len = bufend - p;
                break;
            case 'p':
                uval = va_arg(ap, unsigned int);
                digits = "0123456789abcdef";
                p = bufend;
                if (uval == 0) {
                    if (!(flags & F_PREC) || prec != 0) {
                        *p-- = '0';
                    }
                } else {
                    do {
                        *p-- = digits[uval & 0xF];
                        uval >>= 4;
                    } while (uval != 0);
                }
                prefix[0] = '0';
                prefix[1] = 'x';
                plen = 2;
                start = p + 1;
                len = bufend - p;
                break;
            default:
                if (*fmt == 0) {
                    goto next;
                }
                p = bufend;
                flags |= F_CHAR;
                prec = 1;
                *p-- = *fmt;
                start = p + 1;
                len = bufend - p;
                break;
            }

            /* prec becomes the count of leading zeros, width the count of padding characters. */
            if (len < prec) {
                prec -= len;
            } else {
                prec = 0;
            }
            p = start + len;
            width = width - len - plen - prec;
            if (flags & F_CHAR) {
                padch = ' ';
                if (flags & F_ZERO) {
                    padch = width > 0 ? '0' : ' ';
                }
            } else {
                padch = ' ';
                if ((flags & (F_PREC | F_ZERO)) == F_ZERO) {
                    padch = width > 0 ? '0' : ' ';
                }
            }
            if (flags & F_MINUS) {
                for (n = 0; n < plen; n++) {
                    total += out(ctx, &remain, prefix[n]);
                }
                for (n = 0; n < prec; n++) {
                    total += out(ctx, &remain, '0');
                }
                while (start < p) {
                    total += out(ctx, &remain, *start++);
                }
                for (n = 0; n < width; n++) {
                    total += out(ctx, &remain, ' ');
                }
            } else if (flags & F_ZERO) {
                if (padch == '0') {
                    for (n = 0; n < plen; n++) {
                        total += out(ctx, &remain, prefix[n]);
                    }
                    for (n = 0; n < width; n++) {
                        total += out(ctx, &remain, padch);
                    }
                } else {
                    for (n = 0; n < width; n++) {
                        total += out(ctx, &remain, padch);
                    }
                    for (n = 0; n < plen; n++) {
                        total += out(ctx, &remain, prefix[n]);
                    }
                }
                for (n = 0; n < prec; n++) {
                    total += out(ctx, &remain, '0');
                }
                while (start < p) {
                    total += out(ctx, &remain, *start++);
                }
            } else {
                for (n = 0; n < width; n++) {
                    total += out(ctx, &remain, padch);
                }
                for (n = 0; n < plen; n++) {
                    total += out(ctx, &remain, prefix[n]);
                }
                for (n = 0; n < prec; n++) {
                    total += out(ctx, &remain, '0');
                }
                while (start < p) {
                    total += out(ctx, &remain, *start++);
                }
            }
        } else if (c != 0) {
            total += out(ctx, &remain, c);
        }
    next:
        if (*fmt) {
            fmt++;
        }
    }
    out(ctx, &remain, 0);
    return total;
}
