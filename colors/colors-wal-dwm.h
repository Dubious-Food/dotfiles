static const char norm_fg[] = "#efcdc4";
static const char norm_bg[] = "#040404";
static const char norm_border[] = "#a78f89";

static const char sel_fg[] = "#efcdc4";
static const char sel_bg[] = "#A3728C";
static const char sel_border[] = "#efcdc4";

static const char urg_fg[] = "#efcdc4";
static const char urg_bg[] = "#3D66B8";
static const char urg_border[] = "#3D66B8";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
