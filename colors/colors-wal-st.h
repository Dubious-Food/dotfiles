const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#040404", /* black   */
  [1] = "#3D66B8", /* red     */
  [2] = "#A3728C", /* green   */
  [3] = "#FC6A94", /* yellow  */
  [4] = "#389587", /* blue    */
  [5] = "#3CA393", /* magenta */
  [6] = "#4B9D99", /* cyan    */
  [7] = "#efcdc4", /* white   */

  /* 8 bright colors */
  [8]  = "#a78f89",  /* black   */
  [9]  = "#3D66B8",  /* red     */
  [10] = "#A3728C", /* green   */
  [11] = "#FC6A94", /* yellow  */
  [12] = "#389587", /* blue    */
  [13] = "#3CA393", /* magenta */
  [14] = "#4B9D99", /* cyan    */
  [15] = "#efcdc4", /* white   */

  /* special colors */
  [256] = "#040404", /* background */
  [257] = "#efcdc4", /* foreground */
  [258] = "#efcdc4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
