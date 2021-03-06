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

#ifndef FUTURE_PLACEHOLDERS_H_
#define FUTURE_PLACEHOLDERS_H_

namespace future {
namespace placeholders {

static ::future::internal::argument_wrapper_base _1(true, 0);
static ::future::internal::argument_wrapper_base _2(true, 1);
static ::future::internal::argument_wrapper_base _3(true, 2);
static ::future::internal::argument_wrapper_base _4(true, 3);
static ::future::internal::argument_wrapper_base _5(true, 4);
static ::future::internal::argument_wrapper_base _6(true, 5);
static ::future::internal::argument_wrapper_base _7(true, 6);
static ::future::internal::argument_wrapper_base _8(true, 7);
static ::future::internal::argument_wrapper_base _9(true, 8);
static ::future::internal::argument_wrapper_base _10(true, 9);

}  /*  namespace placeholders */
}  /* namespace future */

#endif  /* FUTURE_PLACEHOLDERS_H_ */
