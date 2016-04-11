#ifndef PAGMO_SERIALIZATION_HPP
#define PAGMO_SERIALIZATION_HPP

#if defined(__clang__) || defined(__GNUC__)
    #pragma GCC diagnostic push
    #pragma GCC diagnostic ignored "-Wconversion"
    #pragma GCC diagnostic ignored "-Wnon-virtual-dtor"
#endif

#include "external/cereal/archives/binary.hpp"
#include "external/cereal/archives/json.hpp"
#include "external/cereal/archives/portable_binary.hpp"
#include "external/cereal/types/memory.hpp"
#include "external/cereal/types/polymorphic.hpp"

#if defined(__clang__) || defined(__GNUC__)
    #pragma GCC diagnostic pop
#endif

#endif
