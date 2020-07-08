/*
 * Copyright 2013 The Emscripten Authors.  All rights reserved.
 * Emscripten is available under two separate licenses, the MIT license and the
 * University of Illinois/NCSA Open Source License.  Both these licenses can be
 * found in the LICENSE file.
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv) {
  printf("argc %d\n", argc);
  char buffer[100];
  for (int i = 0; i < 100; i++) buffer[i] = argc*(argc > 10 ? (argc*i) % 3 : (i*i));
  memset(&buffer[10], -114, argc+25);
  for(int i = 0; i < 100; i++) printf("%d:%d\n", i, buffer[i]);
  //memset 5243040,-114,6,false,6
  return buffer[15] ? argc == 42 : 0;
}

