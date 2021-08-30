/*
 * Copyright (C) 1999-2005, 2016 Free Software Foundation, Inc.
 * This file is part of the GNU LIBICONV Library.
 *
 * The GNU LIBICONV Library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * The GNU LIBICONV Library is distributed in the hope that it will be
 * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with the GNU LIBICONV Library; see the file COPYING.LIB.
 * If not, see <https://www.gnu.org/licenses/>.
 */

/*
 * PT154
 */

static const unsigned short pt154_2uni[64] = {
  /* 0x80 */
  0x0496, 0x0492, 0x04ee, 0x0493, 0x201e, 0x2026, 0x04b6, 0x04ae,
  0x04b2, 0x04af, 0x04a0, 0x04e2, 0x04a2, 0x049a, 0x04ba, 0x04b8,
  /* 0x90 */
  0x0497, 0x2018, 0x2019, 0x201c, 0x201d, 0x2022, 0x2013, 0x2014,
  0x04b3, 0x04b7, 0x04a1, 0x04e3, 0x04a3, 0x049b, 0x04bb, 0x04b9,
  /* 0xa0 */
  0x00a0, 0x040e, 0x045e, 0x0408, 0x04e8, 0x0498, 0x04b0, 0x00a7,
  0x0401, 0x00a9, 0x04d8, 0x00ab, 0x00ac, 0x04ef, 0x00ae, 0x049c,
  /* 0xb0 */
  0x00b0, 0x04b1, 0x0406, 0x0456, 0x0499, 0x04e9, 0x00b6, 0x00b7,
  0x0451, 0x2116, 0x04d9, 0x00bb, 0x0458, 0x04aa, 0x04ab, 0x049d,
};

static int
pt154_mbtowc (conv_t conv, ucs4_t *pwc, const unsigned char *s, size_t n)
{
  unsigned char c = *s;
  if (c < 0x80)
    *pwc = (ucs4_t) c;
  else if (c >= 0xc0)
    *pwc = (ucs4_t) c + 0x0350;
  else
    *pwc = (ucs4_t) pt154_2uni[c-0x80];
  return 1;
}

static const unsigned char pt154_page00[32] = {
  0xa0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa7, /* 0xa0-0xa7 */
  0x00, 0xa9, 0x00, 0xab, 0xac, 0x00, 0xae, 0x00, /* 0xa8-0xaf */
  0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xb6, 0xb7, /* 0xb0-0xb7 */
  0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0x00, /* 0xb8-0xbf */
};
static const unsigned char pt154_page04[240] = {
  0x00, 0xa8, 0x00, 0x00, 0x00, 0x00, 0xb2, 0x00, /* 0x00-0x07 */
  0xa3, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa1, 0x00, /* 0x08-0x0f */
  0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, /* 0x10-0x17 */
  0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, /* 0x18-0x1f */
  0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, /* 0x20-0x27 */
  0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf, /* 0x28-0x2f */
  0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, /* 0x30-0x37 */
  0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef, /* 0x38-0x3f */
  0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, /* 0x40-0x47 */
  0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff, /* 0x48-0x4f */
  0x00, 0xb8, 0x00, 0x00, 0x00, 0x00, 0xb3, 0x00, /* 0x50-0x57 */
  0xbc, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa2, 0x00, /* 0x58-0x5f */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x60-0x67 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x68-0x6f */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x70-0x77 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x78-0x7f */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x80-0x87 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x88-0x8f */
  0x00, 0x00, 0x81, 0x83, 0x00, 0x00, 0x80, 0x90, /* 0x90-0x97 */
  0xa5, 0xb4, 0x8d, 0x9d, 0xaf, 0xbf, 0x00, 0x00, /* 0x98-0x9f */
  0x8a, 0x9a, 0x8c, 0x9c, 0x00, 0x00, 0x00, 0x00, /* 0xa0-0xa7 */
  0x00, 0x00, 0xbd, 0xbe, 0x00, 0x00, 0x87, 0x89, /* 0xa8-0xaf */
  0xa6, 0xb1, 0x88, 0x98, 0x00, 0x00, 0x86, 0x99, /* 0xb0-0xb7 */
  0x8f, 0x9f, 0x8e, 0x9e, 0x00, 0x00, 0x00, 0x00, /* 0xb8-0xbf */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xc0-0xc7 */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xc8-0xcf */
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xd0-0xd7 */
  0xaa, 0xba, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xd8-0xdf */
  0x00, 0x00, 0x8b, 0x9b, 0x00, 0x00, 0x00, 0x00, /* 0xe0-0xe7 */
  0xa4, 0xb5, 0x00, 0x00, 0x00, 0x00, 0x82, 0xad, /* 0xe8-0xef */
};
static const unsigned char pt154_page20[24] = {
  0x00, 0x00, 0x00, 0x96, 0x97, 0x00, 0x00, 0x00, /* 0x10-0x17 */
  0x91, 0x92, 0x00, 0x00, 0x93, 0x94, 0x84, 0x00, /* 0x18-0x1f */
  0x00, 0x00, 0x95, 0x00, 0x00, 0x00, 0x85, 0x00, /* 0x20-0x27 */
};

static int
pt154_wctomb (conv_t conv, unsigned char *r, ucs4_t wc, size_t n)
{
  unsigned char c = 0;
  if (wc < 0x0080) {
    *r = wc;
    return 1;
  }
  else if (wc >= 0x00a0 && wc < 0x00c0)
    c = pt154_page00[wc-0x00a0];
  else if (wc >= 0x0400 && wc < 0x04f0)
    c = pt154_page04[wc-0x0400];
  else if (wc >= 0x2010 && wc < 0x2028)
    c = pt154_page20[wc-0x2010];
  else if (wc == 0x2116)
    c = 0xb9;
  if (c != 0) {
    *r = c;
    return 1;
  }
  return RET_ILUNI;
}