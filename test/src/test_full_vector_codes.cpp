// Copyright Steinwurf ApS 2015.
// Distributed under the "STEINWURF RESEARCH LICENSE 1.0".
// See accompanying file LICENSE.rst or
// http://www.steinwurf.com/licensing

#include <kodocpp/kodocpp.hpp>

#include <gtest/gtest.h>

#include "test_helper.hpp"

TEST(test_full_vector_codes, invoke_api)
{
    using namespace kodocpp;

    uint32_t max_symbols = rand_symbols();
    uint32_t max_symbol_size = rand_symbol_size();

    kodo_code_type code_type = kodo_full_vector;

    test_basic_api(max_symbols, max_symbol_size, code_type, kodo_binary);
    test_basic_api(max_symbols, max_symbol_size, code_type, kodo_binary4);
    test_basic_api(max_symbols, max_symbol_size, code_type, kodo_binary8);
}
