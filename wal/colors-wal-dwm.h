static const char norm_fg[] = "#d6cbdb";
static const char norm_bg[] = "#221927";
static const char norm_border[] = "#958e99";

static const char sel_fg[] = "#d6cbdb";
static const char sel_bg[] = "#BF5E97";
static const char sel_border[] = "#d6cbdb";

static const char urg_fg[] = "#d6cbdb";
static const char urg_bg[] = "#6F7890";
static const char urg_border[] = "#6F7890";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
