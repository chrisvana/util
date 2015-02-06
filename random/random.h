// Copyright 2015
// Author: Christopher Van Arsdale

#ifndef _THIRD_PARTY_UTIL_RANDOM_RANDOM_H__
#define _THIRD_PARTY_UTIL_RANDOM_RANDOM_H__

#include "third_party/util/third_party/google/or_tools/base/random.h"

namespace util {

typedef operations_research::ACMRandom ACMRandom;
typedef operations_research::MTRandom MTRandom;

// Any additional methods?
// see "util/third_party/google/or_tools/base/util.h" for ACMRandom object.

}  // namespace util

#endif  // _THIRD_PARTY_UTIL_RANDOM_RANDOM_H__
