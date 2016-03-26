/*******************************************************************************
 * Copyright (c) 2016 Wojciech Migda
 * All rights reserved
 * Distributed under the terms of Apache License, Version 2.0
 *******************************************************************************
 *
 * Filename: math_proxy.hpp
 *
 * Description:
 *      description
 *
 * Authors:
 *          Wojciech Migda (wm)
 *
 *******************************************************************************
 * History:
 * --------
 * Date         Who  Ticket     Description
 * ----------   ---  ---------  ------------------------------------------------
 * 2016-03-12   wm              Initial version
 *
 ******************************************************************************/


#ifndef MATH_PROXY_HPP_
#define MATH_PROXY_HPP_

#include <cmath>

namespace dmlc
{

namespace
{

typedef double real_type;
//typedef float real_type;

float log(const float x)
{
    return std::log((real_type)x);
}

double log(const double x)
{
    return std::log(x);
}

float exp(const float x)
{
    return std::exp((real_type)x);
}

double exp(const double x)
{
    return std::exp(x);
}


}  // anon namespace

}  // namespace dmlc

#endif /* MATH_PROXY_HPP_ */
