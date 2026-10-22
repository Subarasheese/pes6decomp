/* compiler: ee-gcc-2.96-G0 */
/* C runtime code; source adapted from crashwoc-decomp-ps2 (src/sdk/newlib/libc/locale/locale.c). */
extern char D_003D1B98[]; /* "C" */
extern char D_003D1B88[]; /* "" */
struct _reent {
    int _errno;
    void *_stdin;
    void *_stdout;
    void *_stderr;
    int _inc;
    char _emergency[25];
    int _current_category;
    const char *_current_locale;
};
struct D_003D1B58 {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
};
extern struct _reent *_impure_ptr[];
extern int strcmp(const char *s1, const char *s2);
extern const struct D_003D1B58 D_003D1B58;

char *_setlocale_r(struct _reent *p, int category, const char *locale)
{
    if (locale) {
        if (strcmp(locale, D_003D1B98) && strcmp(locale, D_003D1B88)) {
            return 0;
        }
        p->_current_category = category;
        p->_current_locale = locale;
    }
    return D_003D1B98;
}
extern struct D_003D1B58 *_localeconv_r(struct _reent *data)
{
    return &D_003D1B58;
}
char *setlocale(int category, const char *locale)
{
    return _setlocale_r((_impure_ptr[0]), category, locale);
}