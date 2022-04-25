const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#221927", /* black   */
  [1] = "#6F7890", /* red     */
  [2] = "#BF5E97", /* green   */
  [3] = "#7A8693", /* yellow  */
  [4] = "#7D81C0", /* blue    */
  [5] = "#8B95B2", /* magenta */
  [6] = "#A09CAC", /* cyan    */
  [7] = "#d6cbdb", /* white   */

  /* 8 bright colors */
  [8]  = "#958e99",  /* black   */
  [9]  = "#6F7890",  /* red     */
  [10] = "#BF5E97", /* green   */
  [11] = "#7A8693", /* yellow  */
  [12] = "#7D81C0", /* blue    */
  [13] = "#8B95B2", /* magenta */
  [14] = "#A09CAC", /* cyan    */
  [15] = "#d6cbdb", /* white   */

  /* special colors */
  [256] = "#221927", /* background */
  [257] = "#d6cbdb", /* foreground */
  [258] = "#d6cbdb",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
