// Copyright (c) 2015 libfuture-c++ authors.
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//
// Author: sergey.vfx@gmail.com (Sergey Sharybin)

#include <cstdlib>
#include <cstdio>
#include <vector>

#include "future/foreach.h"

using std::vector;

void foo(const vector<int>& v) {
  FUTURE_FOREACH(int a, v) {
    printf("%d\n", a);
  }
  FUTURE_FOREACH(const int& a, v) {
    printf("%d\n", a);
  }
}

int main(int argc, char **argv) {
  vector<int> v;
  v.push_back(1);
  v.push_back(666);
  v.push_back(10);
  FUTURE_FOREACH(int a, v) {
    printf("%d\n", a);
  }
  FUTURE_FOREACH(int& a, v) {
    printf("%d\n", a);
  }
  foo(v);
  return EXIT_SUCCESS;
}
